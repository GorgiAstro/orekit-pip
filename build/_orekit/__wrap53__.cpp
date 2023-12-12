#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage.h"
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace ephemeris {

              ::java::lang::Class *RtcmEphemerisMessage::class$ = NULL;
              jmethodID *RtcmEphemerisMessage::mids$ = NULL;
              bool RtcmEphemerisMessage::live$ = false;

              jclass RtcmEphemerisMessage::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisMessage");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b637eaca7786a504] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;)V");
                  mids$[mid_getEphemerisData_0d91fc2e9dc67222] = env->getMethodID(cls, "getEphemerisData", "()Lorg/orekit/gnss/metric/messages/rtcm/ephemeris/RtcmEphemerisData;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmEphemerisMessage::RtcmEphemerisMessage(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData & a1) : ::org::orekit::gnss::metric::messages::rtcm::RtcmMessage(env->newObject(initializeClass, &mids$, mid_init$_b637eaca7786a504, a0, a1.this$)) {}

              ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData RtcmEphemerisMessage::getEphemerisData() const
              {
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->callObjectMethod(this$, mids$[mid_getEphemerisData_0d91fc2e9dc67222]));
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
              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args);
              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self);
              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data);
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data);
              static PyGetSetDef t_RtcmEphemerisMessage__fields_[] = {
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, ephemerisData),
                DECLARE_GET_FIELD(t_RtcmEphemerisMessage, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmEphemerisMessage__methods_[] = {
                DECLARE_METHOD(t_RtcmEphemerisMessage, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, of_, METH_VARARGS),
                DECLARE_METHOD(t_RtcmEphemerisMessage, getEphemerisData, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmEphemerisMessage)[] = {
                { Py_tp_methods, t_RtcmEphemerisMessage__methods_ },
                { Py_tp_init, (void *) t_RtcmEphemerisMessage_init_ },
                { Py_tp_getset, t_RtcmEphemerisMessage__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmEphemerisMessage)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmMessage),
                NULL
              };

              DEFINE_TYPE(RtcmEphemerisMessage, t_RtcmEphemerisMessage, RtcmEphemerisMessage);
              PyObject *t_RtcmEphemerisMessage::wrap_Object(const RtcmEphemerisMessage& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_RtcmEphemerisMessage::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_RtcmEphemerisMessage::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_RtcmEphemerisMessage *self = (t_RtcmEphemerisMessage *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_RtcmEphemerisMessage::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmEphemerisMessage), &PY_TYPE_DEF(RtcmEphemerisMessage), module, "RtcmEphemerisMessage", 0);
              }

              void t_RtcmEphemerisMessage::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "class_", make_descriptor(RtcmEphemerisMessage::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "wrapfn_", make_descriptor(t_RtcmEphemerisMessage::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmEphemerisMessage), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmEphemerisMessage_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmEphemerisMessage::initializeClass, 1)))
                  return NULL;
                return t_RtcmEphemerisMessage::wrap_Object(RtcmEphemerisMessage(((t_RtcmEphemerisMessage *) arg)->object.this$));
              }
              static PyObject *t_RtcmEphemerisMessage_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmEphemerisMessage::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_RtcmEphemerisMessage_of_(t_RtcmEphemerisMessage *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_RtcmEphemerisMessage_init_(t_RtcmEphemerisMessage *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData a1((jobject) NULL);
                RtcmEphemerisMessage object((jobject) NULL);

                if (!parseArgs(args, "Ik", ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RtcmEphemerisMessage(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_RtcmEphemerisMessage_getEphemerisData(t_RtcmEphemerisMessage *self)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData result((jobject) NULL);
                OBJ_CALL(result = self->object.getEphemerisData());
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(result);
              }
              static PyObject *t_RtcmEphemerisMessage_get__parameters_(t_RtcmEphemerisMessage *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_RtcmEphemerisMessage_get__ephemerisData(t_RtcmEphemerisMessage *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData value((jobject) NULL);
                OBJ_CALL(value = self->object.getEphemerisData());
                return ::org::orekit::gnss::metric::messages::rtcm::ephemeris::t_RtcmEphemerisData::wrap_Object(value);
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
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagationType::class$ = NULL;
      jmethodID *PropagationType::mids$ = NULL;
      bool PropagationType::live$ = false;
      PropagationType *PropagationType::MEAN = NULL;
      PropagationType *PropagationType::OSCULATING = NULL;

      jclass PropagationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_25b190766836d732] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/PropagationType;");
          mids$[mid_values_c7e1b07703a6d148] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/PropagationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MEAN = new PropagationType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/propagation/PropagationType;"));
          OSCULATING = new PropagationType(env->getStaticObjectField(cls, "OSCULATING", "Lorg/orekit/propagation/PropagationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagationType PropagationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PropagationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_25b190766836d732], a0.this$));
      }

      JArray< PropagationType > PropagationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PropagationType >(env->callStaticObjectMethod(cls, mids$[mid_values_c7e1b07703a6d148]));
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
      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args);
      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PropagationType_values(PyTypeObject *type);
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data);
      static PyGetSetDef t_PropagationType__fields_[] = {
        DECLARE_GET_FIELD(t_PropagationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagationType__methods_[] = {
        DECLARE_METHOD(t_PropagationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PropagationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagationType)[] = {
        { Py_tp_methods, t_PropagationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PropagationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PropagationType, t_PropagationType, PropagationType);
      PyObject *t_PropagationType::wrap_Object(const PropagationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PropagationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PropagationType::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagationType), &PY_TYPE_DEF(PropagationType), module, "PropagationType", 0);
      }

      void t_PropagationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "class_", make_descriptor(PropagationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "wrapfn_", make_descriptor(t_PropagationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PropagationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "MEAN", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "OSCULATING", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::OSCULATING)));
      }

      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagationType::initializeClass, 1)))
          return NULL;
        return t_PropagationType::wrap_Object(PropagationType(((t_PropagationType *) arg)->object.this$));
      }
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PropagationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::PropagationType::valueOf(a0));
          return t_PropagationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PropagationType_values(PyTypeObject *type)
      {
        JArray< PropagationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::propagation::PropagationType::values());
        return JArray<jobject>(result.this$).wrap(t_PropagationType::wrap_jobject);
      }
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/util/HashSet.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/util/Pair.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *Dcb::class$ = NULL;
        jmethodID *Dcb::mids$ = NULL;
        bool Dcb::live$ = false;

        jclass Dcb::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/Dcb");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDcbLine_f8425e5f06189d8f] = env->getMethodID(cls, "addDcbLine", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_getAvailableObservationPairs_fc7b48c0d5e6c265] = env->getMethodID(cls, "getAvailableObservationPairs", "()Ljava/util/HashSet;");
            mids$[mid_getDcb_eba7bc87dc9f0799] = env->getMethodID(cls, "getDcb", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getDcb_a93d9d84dcac73ce] = env->getMethodID(cls, "getDcb", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMaximumValidDateForObservationPair_d490791b6f858d32] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMaximumValidDateForObservationPair_8fa5e032962a0c87] = env->getMethodID(cls, "getMaximumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_d490791b6f858d32] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Lorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinimumValidDateForObservationPair_8fa5e032962a0c87] = env->getMethodID(cls, "getMinimumValidDateForObservationPair", "(Ljava/lang/String;Ljava/lang/String;)Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Dcb::Dcb() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void Dcb::addDcbLine(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, jdouble a4) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcbLine_f8425e5f06189d8f], a0.this$, a1.this$, a2.this$, a3.this$, a4);
        }

        ::java::util::HashSet Dcb::getAvailableObservationPairs() const
        {
          return ::java::util::HashSet(env->callObjectMethod(this$, mids$[mid_getAvailableObservationPairs_fc7b48c0d5e6c265]));
        }

        jdouble Dcb::getDcb(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_eba7bc87dc9f0799], a0.this$, a1.this$, a2.this$);
        }

        jdouble Dcb::getDcb(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDcb_a93d9d84dcac73ce], a0.this$, a1.this$, a2.this$);
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_d490791b6f858d32], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMaximumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaximumValidDateForObservationPair_8fa5e032962a0c87], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::org::orekit::gnss::ObservationType & a0, const ::org::orekit::gnss::ObservationType & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_d490791b6f858d32], a0.this$, a1.this$));
        }

        ::org::orekit::time::AbsoluteDate Dcb::getMinimumValidDateForObservationPair(const ::java::lang::String & a0, const ::java::lang::String & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinimumValidDateForObservationPair_8fa5e032962a0c87], a0.this$, a1.this$));
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
        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self);
        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args);
        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data);
        static PyGetSetDef t_Dcb__fields_[] = {
          DECLARE_GET_FIELD(t_Dcb, availableObservationPairs),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Dcb__methods_[] = {
          DECLARE_METHOD(t_Dcb, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Dcb, addDcbLine, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getAvailableObservationPairs, METH_NOARGS),
          DECLARE_METHOD(t_Dcb, getDcb, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMaximumValidDateForObservationPair, METH_VARARGS),
          DECLARE_METHOD(t_Dcb, getMinimumValidDateForObservationPair, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Dcb)[] = {
          { Py_tp_methods, t_Dcb__methods_ },
          { Py_tp_init, (void *) t_Dcb_init_ },
          { Py_tp_getset, t_Dcb__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Dcb)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Dcb, t_Dcb, Dcb);

        void t_Dcb::install(PyObject *module)
        {
          installType(&PY_TYPE(Dcb), &PY_TYPE_DEF(Dcb), module, "Dcb", 0);
        }

        void t_Dcb::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "class_", make_descriptor(Dcb::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "wrapfn_", make_descriptor(t_Dcb::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Dcb), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Dcb_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Dcb::initializeClass, 1)))
            return NULL;
          return t_Dcb::wrap_Object(Dcb(((t_Dcb *) arg)->object.this$));
        }
        static PyObject *t_Dcb_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Dcb::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Dcb_init_(t_Dcb *self, PyObject *args, PyObject *kwds)
        {
          Dcb object((jobject) NULL);

          INT_CALL(object = Dcb());
          self->object = object;

          return 0;
        }

        static PyObject *t_Dcb_addDcbLine(t_Dcb *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          jdouble a4;

          if (!parseArgs(args, "sskkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(self->object.addDcbLine(a0, a1, a2, a3, a4));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcbLine", args);
          return NULL;
        }

        static PyObject *t_Dcb_getAvailableObservationPairs(t_Dcb *self)
        {
          ::java::util::HashSet result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(result);
        }

        static PyObject *t_Dcb_getDcb(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "KKk", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "ssk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDcb(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getDcb", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMaximumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMaximumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMaximumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_getMinimumValidDateForObservationPair(t_Dcb *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::gnss::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::gnss::ObservationType a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "ss", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getMinimumValidDateForObservationPair(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMinimumValidDateForObservationPair", args);
          return NULL;
        }

        static PyObject *t_Dcb_get__availableObservationPairs(t_Dcb *self, void *data)
        {
          ::java::util::HashSet value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableObservationPairs());
          return ::java::util::t_HashSet::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/SphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *SphericalHarmonicsProvider::class$ = NULL;
          jmethodID *SphericalHarmonicsProvider::mids$ = NULL;
          bool SphericalHarmonicsProvider::live$ = false;

          jclass SphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/SphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_557b8123390d8d0c]);
          }

          jint SphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_412668abc8d889e9]);
          }

          jint SphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_412668abc8d889e9]);
          }

          jdouble SphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
          }

          ::org::orekit::time::AbsoluteDate SphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
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
      namespace gravity {
        namespace potential {
          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self);
          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data);
          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_SphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_SphericalHarmonicsProvider, referenceDate),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_SphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_SphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_SphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::TideSystemProvider),
            NULL
          };

          DEFINE_TYPE(SphericalHarmonicsProvider, t_SphericalHarmonicsProvider, SphericalHarmonicsProvider);

          void t_SphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalHarmonicsProvider), &PY_TYPE_DEF(SphericalHarmonicsProvider), module, "SphericalHarmonicsProvider", 0);
          }

          void t_SphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "class_", make_descriptor(SphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_SphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_SphericalHarmonicsProvider::wrap_Object(SphericalHarmonicsProvider(((t_SphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_SphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalHarmonicsProvider_getAe(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxDegree(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMaxOrder(t_SphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getMu(t_SphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SphericalHarmonicsProvider_getReferenceDate(t_SphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__ae(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxDegree(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__maxOrder(t_SphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__mu(t_SphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SphericalHarmonicsProvider_get__referenceDate(t_SphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivative.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldGradient::class$ = NULL;
        jmethodID *FieldGradient::mids$ = NULL;
        bool FieldGradient::live$ = false;

        jclass FieldGradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldGradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d88ba13dc070d10b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_960efa47e0a8eec2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_fc34f2fa32af76f3] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acos_fc34f2fa32af76f3] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_acosh_fc34f2fa32af76f3] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_6adaf4b79c4224b7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_7026fbe694870993] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_add_d903750b39e554a2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asin_fc34f2fa32af76f3] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_asinh_fc34f2fa32af76f3] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan_fc34f2fa32af76f3] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atan2_6adaf4b79c4224b7] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_atanh_fc34f2fa32af76f3] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cbrt_fc34f2fa32af76f3] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ceil_fc34f2fa32af76f3] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_compose_b61c7fae0a12297b] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_constant_32575b33be5d0a59] = env->getStaticMethodID(cls, "constant", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_6adaf4b79c4224b7] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_7026fbe694870993] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_copySign_d903750b39e554a2] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cos_fc34f2fa32af76f3] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_cosh_fc34f2fa32af76f3] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_6adaf4b79c4224b7] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_7026fbe694870993] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_divide_d903750b39e554a2] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_fc34f2fa32af76f3] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_expm1_fc34f2fa32af76f3] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_floor_fc34f2fa32af76f3] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_2a49048a02bcf730] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getFreeParameters_412668abc8d889e9] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_41762fd4377ff26e] = env->getMethodID(cls, "getGradient", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_412668abc8d889e9] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_12d47fa54f2033ee] = env->getMethodID(cls, "getPartialDerivative", "([I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPartialDerivative_8b3a1c735adfa4bc] = env->getMethodID(cls, "getPartialDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getPi_fc34f2fa32af76f3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_613c8f46c659f636] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_20f98801541dcec1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_6adaf4b79c4224b7] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_b59f331852eb7c71] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_cdbc88b0e983a2ae] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_274452b16ec2c300] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldGradient;[Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_fa3046b02c3efd7a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_15082e4564257c73] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_e3f5d785b5d1f2e5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_0034a3516c99ab56] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_d91ddfb2d4776c1f] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_da1e813663ef1b77] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_linearCombination_4933cc47e9448bfa] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log_fc34f2fa32af76f3] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log10_fc34f2fa32af76f3] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_log1p_fc34f2fa32af76f3] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_6adaf4b79c4224b7] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_7026fbe694870993] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_6cbe28bfc06a25a7] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_multiply_d903750b39e554a2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_negate_fc34f2fa32af76f3] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_7026fbe694870993] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_newInstance_d903750b39e554a2] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_6adaf4b79c4224b7] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_7026fbe694870993] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_6cbe28bfc06a25a7] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_pow_36b95f8d1fa74c1e] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_reciprocal_fc34f2fa32af76f3] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_6adaf4b79c4224b7] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_7026fbe694870993] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_remainder_d903750b39e554a2] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rint_fc34f2fa32af76f3] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_rootN_6cbe28bfc06a25a7] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_scalb_6cbe28bfc06a25a7] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sign_fc34f2fa32af76f3] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sin_fc34f2fa32af76f3] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_fc34f2fa32af76f3] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_fc34f2fa32af76f3] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_6adaf4b79c4224b7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldGradient;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_7026fbe694870993] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_subtract_d903750b39e554a2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tan_fc34f2fa32af76f3] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_tanh_fc34f2fa32af76f3] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_taylor_c2a9122c04338397] = env->getMethodID(cls, "taylor", "([D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_e3919ad898361abd] = env->getMethodID(cls, "taylor", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_fc34f2fa32af76f3] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_toDerivativeStructure_5997f22f8d76210e] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_fc34f2fa32af76f3] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_ulp_fc34f2fa32af76f3] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_variable_0e7bec785d19c10f] = env->getStaticMethodID(cls, "variable", "(IILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldGradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldGradient::FieldGradient(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d88ba13dc070d10b, a0.this$)) {}

        FieldGradient::FieldGradient(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_960efa47e0a8eec2, a0.this$, a1.this$)) {}

        FieldGradient FieldGradient::abs() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_abs_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::acos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acos_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::acosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_acosh_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::add(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::add(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_add_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::asin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asin_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::asinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_asinh_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::atan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::atan2(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atan2_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::atanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_atanh_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::cbrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cbrt_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::ceil() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ceil_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_compose_b61c7fae0a12297b], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::constant(jint a0, const ::org::hipparchus::CalculusFieldElement & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_constant_32575b33be5d0a59], a0, a1.this$));
        }

        FieldGradient FieldGradient::copySign(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::copySign(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_copySign_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::cos() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cos_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::cosh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_cosh_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::divide(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::divide(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_divide_d903750b39e554a2], a0.this$));
        }

        jboolean FieldGradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        FieldGradient FieldGradient::exp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_exp_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::expm1() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_expm1_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::floor() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_floor_fc34f2fa32af76f3]));
        }

        jint FieldGradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
        }

        ::org::hipparchus::analysis::differentiation::FieldGradientField FieldGradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradientField(env->callObjectMethod(this$, mids$[mid_getField_2a49048a02bcf730]));
        }

        jint FieldGradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldGradient::getGradient() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGradient_41762fd4377ff26e]));
        }

        jint FieldGradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_412668abc8d889e9]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_12d47fa54f2033ee], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getPartialDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPartialDerivative_8b3a1c735adfa4bc], a0));
        }

        FieldGradient FieldGradient::getPi() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_getPi_fc34f2fa32af76f3]));
        }

        jdouble FieldGradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_613c8f46c659f636]));
        }

        ::org::hipparchus::Field FieldGradient::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_20f98801541dcec1]));
        }

        jint FieldGradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
        }

        FieldGradient FieldGradient::hypot(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_hypot_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< jdouble > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_b59f331852eb7c71], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_cdbc88b0e983a2ae], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const JArray< FieldGradient > & a0, const JArray< FieldGradient > & a1) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_274452b16ec2c300], a0.this$, a1.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_fa3046b02c3efd7a], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_15082e4564257c73], a0, a1.this$, a2, a3.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e3f5d785b5d1f2e5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_0034a3516c99ab56], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldGradient & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldGradient & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldGradient & a5) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_d91ddfb2d4776c1f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldGradient FieldGradient::linearCombination(const FieldGradient & a0, const FieldGradient & a1, const FieldGradient & a2, const FieldGradient & a3, const FieldGradient & a4, const FieldGradient & a5, const FieldGradient & a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_da1e813663ef1b77], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldGradient FieldGradient::linearCombination(jdouble a0, const FieldGradient & a1, jdouble a2, const FieldGradient & a3, jdouble a4, const FieldGradient & a5, jdouble a6, const FieldGradient & a7) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4933cc47e9448bfa], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldGradient FieldGradient::log() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::log10() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log10_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::log1p() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_log1p_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::multiply(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::multiply(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::multiply(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_6cbe28bfc06a25a7], a0));
        }

        FieldGradient FieldGradient::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_multiply_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::negate() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_negate_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::newInstance(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::newInstance(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_newInstance_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::pow(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::pow(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::pow(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_pow_6cbe28bfc06a25a7], a0));
        }

        FieldGradient FieldGradient::pow(jdouble a0, const FieldGradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_pow_36b95f8d1fa74c1e], a0, a1.this$));
        }

        FieldGradient FieldGradient::reciprocal() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_reciprocal_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::remainder(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::remainder(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_remainder_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::rint() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rint_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::rootN(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_rootN_6cbe28bfc06a25a7], a0));
        }

        FieldGradient FieldGradient::scalb(jint a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_scalb_6cbe28bfc06a25a7], a0));
        }

        FieldGradient FieldGradient::sign() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sign_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::sin() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sin_fc34f2fa32af76f3]));
        }

        ::org::hipparchus::util::FieldSinCos FieldGradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
        }

        FieldGradient FieldGradient::sinh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sinh_fc34f2fa32af76f3]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldGradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
        }

        FieldGradient FieldGradient::sqrt() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_sqrt_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::subtract(const FieldGradient & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_6adaf4b79c4224b7], a0.this$));
        }

        FieldGradient FieldGradient::subtract(jdouble a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_7026fbe694870993], a0));
        }

        FieldGradient FieldGradient::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_subtract_d903750b39e554a2], a0.this$));
        }

        FieldGradient FieldGradient::tan() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tan_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::tanh() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_tanh_fc34f2fa32af76f3]));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_c2a9122c04338397], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldGradient::taylor(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_e3919ad898361abd], a0.this$));
        }

        FieldGradient FieldGradient::toDegrees() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toDegrees_fc34f2fa32af76f3]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldGradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_5997f22f8d76210e]));
        }

        FieldGradient FieldGradient::toRadians() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_toRadians_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::ulp() const
        {
          return FieldGradient(env->callObjectMethod(this$, mids$[mid_ulp_fc34f2fa32af76f3]));
        }

        FieldGradient FieldGradient::variable(jint a0, jint a1, const ::org::hipparchus::CalculusFieldElement & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradient(env->callStaticObjectMethod(cls, mids$[mid_variable_0e7bec785d19c10f], a0, a1, a2.this$));
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
        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args);
        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldGradient_abs(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_asin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self);
        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_cos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_exp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self);
        static PyObject *t_FieldGradient_floor(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self);
        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self);
        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_log(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log10(t_FieldGradient *self);
        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self);
        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_negate(t_FieldGradient *self);
        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self);
        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_rint(t_FieldGradient *self);
        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg);
        static PyObject *t_FieldGradient_sign(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sin(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self);
        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_tan(t_FieldGradient *self);
        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self);
        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args);
        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self);
        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self);
        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self);
        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data);
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data);
        static PyGetSetDef t_FieldGradient__fields_[] = {
          DECLARE_GET_FIELD(t_FieldGradient, exponent),
          DECLARE_GET_FIELD(t_FieldGradient, field),
          DECLARE_GET_FIELD(t_FieldGradient, freeParameters),
          DECLARE_GET_FIELD(t_FieldGradient, gradient),
          DECLARE_GET_FIELD(t_FieldGradient, order),
          DECLARE_GET_FIELD(t_FieldGradient, pi),
          DECLARE_GET_FIELD(t_FieldGradient, real),
          DECLARE_GET_FIELD(t_FieldGradient, value),
          DECLARE_GET_FIELD(t_FieldGradient, valueField),
          DECLARE_GET_FIELD(t_FieldGradient, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldGradient__methods_[] = {
          DECLARE_METHOD(t_FieldGradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, atan2, METH_O),
          DECLARE_METHOD(t_FieldGradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, hypot, METH_O),
          DECLARE_METHOD(t_FieldGradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, log, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldGradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, rootN, METH_O),
          DECLARE_METHOD(t_FieldGradient, scalb, METH_O),
          DECLARE_METHOD(t_FieldGradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldGradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_FieldGradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldGradient)[] = {
          { Py_tp_methods, t_FieldGradient__methods_ },
          { Py_tp_init, (void *) t_FieldGradient_init_ },
          { Py_tp_getset, t_FieldGradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldGradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldGradient, t_FieldGradient, FieldGradient);
        PyObject *t_FieldGradient::wrap_Object(const FieldGradient& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldGradient::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldGradient::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldGradient *self = (t_FieldGradient *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldGradient::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldGradient), &PY_TYPE_DEF(FieldGradient), module, "FieldGradient", 0);
        }

        void t_FieldGradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "class_", make_descriptor(FieldGradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "wrapfn_", make_descriptor(t_FieldGradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldGradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldGradient::initializeClass, 1)))
            return NULL;
          return t_FieldGradient::wrap_Object(FieldGradient(((t_FieldGradient *) arg)->object.this$));
        }
        static PyObject *t_FieldGradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldGradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldGradient_of_(t_FieldGradient *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldGradient_init_(t_FieldGradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldGradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient object((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldGradient(a0, a1));
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

        static PyObject *t_FieldGradient_abs(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_acosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_add(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_asin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_asinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_atan2(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_atanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cbrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ceil(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_compose(t_FieldGradient *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::constant(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_copySign(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_cos(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_cosh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_divide(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_equals(t_FieldGradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldGradient_exp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_expm1(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_floor(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getExponent(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getField(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getFreeParameters(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getGradient(t_FieldGradient *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_getOrder(t_FieldGradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldGradient_getPartialDerivative(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_getPi(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_getReal(t_FieldGradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldGradient_getValue(t_FieldGradient *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_getValueField(t_FieldGradient *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_hashCode(t_FieldGradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldGradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldGradient_hypot(t_FieldGradient *self, PyObject *arg)
        {
          FieldGradient a0((jobject) NULL);
          PyTypeObject **p0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_linearCombination(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldGradient > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldGradient > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldGradient::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              FieldGradient a2((jobject) NULL);
              PyTypeObject **p2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGradient a4((jobject) NULL);
              PyTypeObject **p4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              FieldGradient a6((jobject) NULL);
              PyTypeObject **p6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_, &a1, &p1, t_FieldGradient::parameters_, &a2, &p2, t_FieldGradient::parameters_, &a3, &p3, t_FieldGradient::parameters_, &a4, &p4, t_FieldGradient::parameters_, &a5, &p5, t_FieldGradient::parameters_, &a6, &p6, t_FieldGradient::parameters_, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldGradient a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldGradient a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldGradient a7((jobject) NULL);
              PyTypeObject **p7;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_, &a2, &a3, &p3, t_FieldGradient::parameters_, &a4, &a5, &p5, t_FieldGradient::parameters_, &a6, &a7, &p7, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_log(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log10(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_log1p(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_multiply(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_negate(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_newInstance(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.newInstance(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldGradient a1((jobject) NULL);
          PyTypeObject **p1;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldGradient::initializeClass, &a0, &a1, &p1, t_FieldGradient::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::pow(a0, a1));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_reciprocal(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_remainder(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_rint(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_rootN(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_scalb(t_FieldGradient *self, PyObject *arg)
        {
          jint a0;
          FieldGradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldGradient::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_FieldGradient_sign(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sin(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinCos(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sinh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_sinhCosh(t_FieldGradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
        }

        static PyObject *t_FieldGradient_sqrt(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_subtract(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldGradient a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", FieldGradient::initializeClass, &a0, &p0, t_FieldGradient::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldGradient result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldGradient::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_tan(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_tanh(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_taylor(t_FieldGradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldGradient_toDegrees(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toDerivativeStructure(t_FieldGradient *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_toRadians(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_ulp(t_FieldGradient *self)
        {
          FieldGradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_FieldGradient::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldGradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldGradient result((jobject) NULL);

          if (!parseArgs(args, "IIK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldGradient::variable(a0, a1, a2));
            return t_FieldGradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }
        static PyObject *t_FieldGradient_get__parameters_(t_FieldGradient *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldGradient_get__exponent(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__field(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldGradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldGradientField::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__freeParameters(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__gradient(t_FieldGradient *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldGradient_get__order(t_FieldGradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldGradient_get__pi(t_FieldGradient *self, void *data)
        {
          FieldGradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldGradient::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__real(t_FieldGradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldGradient_get__value(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldGradient_get__valueField(t_FieldGradient *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/TimeSystemCorrection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *TimeSystemCorrection::class$ = NULL;
          jmethodID *TimeSystemCorrection::mids$ = NULL;
          bool TimeSystemCorrection::live$ = false;

          jclass TimeSystemCorrection::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/TimeSystemCorrection");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f3eb9ceafa1e55a5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DD)V");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTimeSystemCorrectionA0_557b8123390d8d0c] = env->getMethodID(cls, "getTimeSystemCorrectionA0", "()D");
              mids$[mid_getTimeSystemCorrectionA1_557b8123390d8d0c] = env->getMethodID(cls, "getTimeSystemCorrectionA1", "()D");
              mids$[mid_getTimeSystemCorrectionType_3cffd47377eca18a] = env->getMethodID(cls, "getTimeSystemCorrectionType", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TimeSystemCorrection::TimeSystemCorrection(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3eb9ceafa1e55a5, a0.this$, a1.this$, a2, a3)) {}

          ::org::orekit::time::AbsoluteDate TimeSystemCorrection::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA0_557b8123390d8d0c]);
          }

          jdouble TimeSystemCorrection::getTimeSystemCorrectionA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTimeSystemCorrectionA1_557b8123390d8d0c]);
          }

          ::java::lang::String TimeSystemCorrection::getTimeSystemCorrectionType() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTimeSystemCorrectionType_3cffd47377eca18a]));
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
          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self);
          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data);
          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data);
          static PyGetSetDef t_TimeSystemCorrection__fields_[] = {
            DECLARE_GET_FIELD(t_TimeSystemCorrection, referenceDate),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA0),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionA1),
            DECLARE_GET_FIELD(t_TimeSystemCorrection, timeSystemCorrectionType),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TimeSystemCorrection__methods_[] = {
            DECLARE_METHOD(t_TimeSystemCorrection, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TimeSystemCorrection, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA0, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionA1, METH_NOARGS),
            DECLARE_METHOD(t_TimeSystemCorrection, getTimeSystemCorrectionType, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TimeSystemCorrection)[] = {
            { Py_tp_methods, t_TimeSystemCorrection__methods_ },
            { Py_tp_init, (void *) t_TimeSystemCorrection_init_ },
            { Py_tp_getset, t_TimeSystemCorrection__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TimeSystemCorrection)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TimeSystemCorrection, t_TimeSystemCorrection, TimeSystemCorrection);

          void t_TimeSystemCorrection::install(PyObject *module)
          {
            installType(&PY_TYPE(TimeSystemCorrection), &PY_TYPE_DEF(TimeSystemCorrection), module, "TimeSystemCorrection", 0);
          }

          void t_TimeSystemCorrection::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "class_", make_descriptor(TimeSystemCorrection::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "wrapfn_", make_descriptor(t_TimeSystemCorrection::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSystemCorrection), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TimeSystemCorrection_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TimeSystemCorrection::initializeClass, 1)))
              return NULL;
            return t_TimeSystemCorrection::wrap_Object(TimeSystemCorrection(((t_TimeSystemCorrection *) arg)->object.this$));
          }
          static PyObject *t_TimeSystemCorrection_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TimeSystemCorrection::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TimeSystemCorrection_init_(t_TimeSystemCorrection *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            TimeSystemCorrection object((jobject) NULL);

            if (!parseArgs(args, "skDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeSystemCorrection(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TimeSystemCorrection_getReferenceDate(t_TimeSystemCorrection *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA0(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionA1(t_TimeSystemCorrection *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TimeSystemCorrection_getTimeSystemCorrectionType(t_TimeSystemCorrection *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystemCorrectionType());
            return j2p(result);
          }

          static PyObject *t_TimeSystemCorrection_get__referenceDate(t_TimeSystemCorrection *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA0(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionA1(t_TimeSystemCorrection *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTimeSystemCorrectionA1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TimeSystemCorrection_get__timeSystemCorrectionType(t_TimeSystemCorrection *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystemCorrectionType());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeInterpolator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeInterpolator::class$ = NULL;
      jmethodID *PythonTimeInterpolator::mids$ = NULL;
      bool PythonTimeInterpolator::live$ = false;

      jclass PythonTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_b0318f5e4535bbc9] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_interpolate_bd5b63eaa0e67fdc] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeInterpolator::PythonTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonTimeInterpolator::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args);
      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self);
      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data);
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeInterpolator, t_PythonTimeInterpolator, PythonTimeInterpolator);
      PyObject *t_PythonTimeInterpolator::wrap_Object(const PythonTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeInterpolator *self = (t_PythonTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeInterpolator), &PY_TYPE_DEF(PythonTimeInterpolator), module, "PythonTimeInterpolator", 1);
      }

      void t_PythonTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "class_", make_descriptor(PythonTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "wrapfn_", make_descriptor(t_PythonTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeInterpolator;", (void *) t_PythonTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeInterpolator::wrap_Object(PythonTimeInterpolator(((t_PythonTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeInterpolator_of_(t_PythonTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeInterpolator_init_(t_PythonTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeInterpolator_finalize(t_PythonTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeInterpolator_pythonExtension(t_PythonTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeInterpolator::mids$[PythonTimeInterpolator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeInterpolator_get__self(t_PythonTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonTimeInterpolator_get__parameters_(t_PythonTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *OneWayGNSSPhase::class$ = NULL;
          jmethodID *OneWayGNSSPhase::mids$ = NULL;
          bool OneWayGNSSPhase::live$ = false;
          ::java::lang::String *OneWayGNSSPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *OneWayGNSSPhase::MEASUREMENT_TYPE = NULL;

          jclass OneWayGNSSPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/OneWayGNSSPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_995f210f8a7d7954] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/time/AbsoluteDate;DDDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
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

          OneWayGNSSPhase::OneWayGNSSPhase(const ::org::orekit::utils::PVCoordinatesProvider & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, const ::org::orekit::estimation::measurements::ObservableSatellite & a7) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_995f210f8a7d7954, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7.this$)) {}

          ::org::orekit::utils::ParameterDriver OneWayGNSSPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_4194657b5e280ddc]));
          }

          jdouble OneWayGNSSPhase::getWavelength() const
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
          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args);
          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self);
          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data);
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data);
          static PyGetSetDef t_OneWayGNSSPhase__fields_[] = {
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, wavelength),
            DECLARE_GET_FIELD(t_OneWayGNSSPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OneWayGNSSPhase__methods_[] = {
            DECLARE_METHOD(t_OneWayGNSSPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OneWayGNSSPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_OneWayGNSSPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OneWayGNSSPhase)[] = {
            { Py_tp_methods, t_OneWayGNSSPhase__methods_ },
            { Py_tp_init, (void *) t_OneWayGNSSPhase_init_ },
            { Py_tp_getset, t_OneWayGNSSPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OneWayGNSSPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(OneWayGNSSPhase, t_OneWayGNSSPhase, OneWayGNSSPhase);
          PyObject *t_OneWayGNSSPhase::wrap_Object(const OneWayGNSSPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OneWayGNSSPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OneWayGNSSPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OneWayGNSSPhase *self = (t_OneWayGNSSPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OneWayGNSSPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(OneWayGNSSPhase), &PY_TYPE_DEF(OneWayGNSSPhase), module, "OneWayGNSSPhase", 0);
          }

          void t_OneWayGNSSPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "class_", make_descriptor(OneWayGNSSPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "wrapfn_", make_descriptor(t_OneWayGNSSPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(OneWayGNSSPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*OneWayGNSSPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OneWayGNSSPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*OneWayGNSSPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_OneWayGNSSPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OneWayGNSSPhase::initializeClass, 1)))
              return NULL;
            return t_OneWayGNSSPhase::wrap_Object(OneWayGNSSPhase(((t_OneWayGNSSPhase *) arg)->object.this$));
          }
          static PyObject *t_OneWayGNSSPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OneWayGNSSPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OneWayGNSSPhase_of_(t_OneWayGNSSPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OneWayGNSSPhase_init_(t_OneWayGNSSPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ::org::orekit::estimation::measurements::ObservableSatellite a7((jobject) NULL);
            OneWayGNSSPhase object((jobject) NULL);

            if (!parseArgs(args, "kDkDDDDk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              INT_CALL(object = OneWayGNSSPhase(a0, a1, a2, a3, a4, a5, a6, a7));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(OneWayGNSSPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OneWayGNSSPhase_getAmbiguityDriver(t_OneWayGNSSPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_OneWayGNSSPhase_getWavelength(t_OneWayGNSSPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_OneWayGNSSPhase_get__parameters_(t_OneWayGNSSPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OneWayGNSSPhase_get__ambiguityDriver(t_OneWayGNSSPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_OneWayGNSSPhase_get__wavelength(t_OneWayGNSSPhase *self, void *data)
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
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/DateComponents.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/OffsetModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/UTCTAIOffset.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCScale::class$ = NULL;
      jmethodID *UTCScale::mids$ = NULL;
      bool UTCScale::live$ = false;

      jclass UTCScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getBaseOffsets_12ee61573a18f417] = env->getMethodID(cls, "getBaseOffsets", "()Ljava/util/Collection;");
          mids$[mid_getFirstKnownLeapSecond_7a97f7e149e79afb] = env->getMethodID(cls, "getFirstKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLastKnownLeapSecond_7a97f7e149e79afb] = env->getMethodID(cls, "getLastKnownLeapSecond", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getLeap_b0b988f941da47d8] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getLeap_b884068a2c99f6ca] = env->getMethodID(cls, "getLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCTAIOffsets_0d9551367f7ecdef] = env->getMethodID(cls, "getUTCTAIOffsets", "()Ljava/util/List;");
          mids$[mid_insideLeap_981023bfa4a8a093] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/AbsoluteDate;)Z");
          mids$[mid_insideLeap_f02ea951706eaf64] = env->getMethodID(cls, "insideLeap", "(Lorg/orekit/time/FieldAbsoluteDate;)Z");
          mids$[mid_minuteDuration_7488878b3477b7fd] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/AbsoluteDate;)I");
          mids$[mid_minuteDuration_2c4b5d48930cdcbe] = env->getMethodID(cls, "minuteDuration", "(Lorg/orekit/time/FieldAbsoluteDate;)I");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::Collection UTCScale::getBaseOffsets() const
      {
        return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getBaseOffsets_12ee61573a18f417]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getFirstKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getFirstKnownLeapSecond_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate UTCScale::getLastKnownLeapSecond() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastKnownLeapSecond_7a97f7e149e79afb]));
      }

      jdouble UTCScale::getLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLeap_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::getLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLeap_b884068a2c99f6ca], a0.this$));
      }

      ::java::lang::String UTCScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      ::java::util::List UTCScale::getUTCTAIOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUTCTAIOffsets_0d9551367f7ecdef]));
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_981023bfa4a8a093], a0.this$);
      }

      jboolean UTCScale::insideLeap(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_insideLeap_f02ea951706eaf64], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_7488878b3477b7fd], a0.this$);
      }

      jint UTCScale::minuteDuration(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_minuteDuration_2c4b5d48930cdcbe], a0.this$);
      }

      jdouble UTCScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UTCScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble UTCScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String UTCScale::toString() const
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
    namespace time {
      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self);
      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_getName(t_UTCScale *self);
      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self);
      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args);
      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data);
      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data);
      static PyGetSetDef t_UTCScale__fields_[] = {
        DECLARE_GET_FIELD(t_UTCScale, baseOffsets),
        DECLARE_GET_FIELD(t_UTCScale, firstKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, lastKnownLeapSecond),
        DECLARE_GET_FIELD(t_UTCScale, name),
        DECLARE_GET_FIELD(t_UTCScale, uTCTAIOffsets),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UTCScale__methods_[] = {
        DECLARE_METHOD(t_UTCScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCScale, getBaseOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getFirstKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLastKnownLeapSecond, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, getUTCTAIOffsets, METH_NOARGS),
        DECLARE_METHOD(t_UTCScale, insideLeap, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, minuteDuration, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_UTCScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCScale)[] = {
        { Py_tp_methods, t_UTCScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UTCScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UTCScale, t_UTCScale, UTCScale);

      void t_UTCScale::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCScale), &PY_TYPE_DEF(UTCScale), module, "UTCScale", 0);
      }

      void t_UTCScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "class_", make_descriptor(UTCScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "wrapfn_", make_descriptor(t_UTCScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCScale::initializeClass, 1)))
          return NULL;
        return t_UTCScale::wrap_Object(UTCScale(((t_UTCScale *) arg)->object.this$));
      }
      static PyObject *t_UTCScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UTCScale_getBaseOffsets(t_UTCScale *self)
      {
        ::java::util::Collection result((jobject) NULL);
        OBJ_CALL(result = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getFirstKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLastKnownLeapSecond(t_UTCScale *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_UTCScale_getLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getLeap(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_getName(t_UTCScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UTCScale_getUTCTAIOffsets(t_UTCScale *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(UTCTAIOffset));
      }

      static PyObject *t_UTCScale_insideLeap(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.insideLeap(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "insideLeap", args);
        return NULL;
      }

      static PyObject *t_UTCScale_minuteDuration(t_UTCScale *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.minuteDuration(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "minuteDuration", args);
        return NULL;
      }

      static PyObject *t_UTCScale_offsetFromTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_offsetToTAI(t_UTCScale *self, PyObject *args)
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

      static PyObject *t_UTCScale_toString(t_UTCScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UTCScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UTCScale_get__baseOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::Collection value((jobject) NULL);
        OBJ_CALL(value = self->object.getBaseOffsets());
        return ::java::util::t_Collection::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__firstKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__lastKnownLeapSecond(t_UTCScale *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastKnownLeapSecond());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_UTCScale_get__name(t_UTCScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UTCScale_get__uTCTAIOffsets(t_UTCScale *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCTAIOffsets());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/Optional.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/TimeStampedPair.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *Ephemeris::class$ = NULL;
        jmethodID *Ephemeris::mids$ = NULL;
        bool Ephemeris::live$ = false;

        jclass Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7e65a9ed6be4bebc] = env->getMethodID(cls, "<init>", "(Ljava/util/List;I)V");
            mids$[mid_init$_2ee441fbc689b748] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_d43f63068c548b32] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_init$_df8ca70857921fcd] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_init$_99a5fbadd0cd572e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_basicPropagate_15e0d02372b1347b] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_checkInputConsistency_df8ca70857921fcd] = env->getStaticMethodID(cls, "checkInputConsistency", "(Ljava/util/List;Lorg/orekit/time/TimeInterpolator;Ljava/util/List;Lorg/orekit/time/TimeInterpolator;)V");
            mids$[mid_checkStatesAndCovariancesConsistency_aaa4588ba4c2491b] = env->getStaticMethodID(cls, "checkStatesAndCovariancesConsistency", "(Ljava/util/List;Ljava/util/List;)V");
            mids$[mid_getCovariance_85b6ecc270268e0d] = env->getMethodID(cls, "getCovariance", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/Optional;");
            mids$[mid_getCovarianceInterpolator_d0ccac9b4c6bdd55] = env->getMethodID(cls, "getCovarianceInterpolator", "()Ljava/util/Optional;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
            mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStateInterpolator_1bb20e7ea407bfce] = env->getMethodID(cls, "getStateInterpolator", "()Lorg/orekit/time/TimeInterpolator;");
            mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
            mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_propagateOrbit_9e937c0ae63d8022] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_resetIntermediateState_45bf76e836befe86] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");
            mids$[mid_getMass_b0b988f941da47d8] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_createHarvester_5f0409a66c29e9c1] = env->getMethodID(cls, "createHarvester", "(Ljava/lang/String;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/utils/DoubleArrayDictionary;)Lorg/orekit/propagation/AbstractMatricesHarvester;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ephemeris::Ephemeris(const ::java::util::List & a0, jint a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7e65a9ed6be4bebc, a0.this$, a1)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_2ee441fbc689b748, a0.this$, a1.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_d43f63068c548b32, a0.this$, a1.this$, a2.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_df8ca70857921fcd, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        Ephemeris::Ephemeris(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_99a5fbadd0cd572e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::propagation::SpacecraftState Ephemeris::basicPropagate(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_basicPropagate_15e0d02372b1347b], a0.this$));
        }

        void Ephemeris::checkInputConsistency(const ::java::util::List & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::java::util::List & a2, const ::org::orekit::time::TimeInterpolator & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkInputConsistency_df8ca70857921fcd], a0.this$, a1.this$, a2.this$, a3.this$);
        }

        void Ephemeris::checkStatesAndCovariancesConsistency(const ::java::util::List & a0, const ::java::util::List & a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_checkStatesAndCovariancesConsistency_aaa4588ba4c2491b], a0.this$, a1.this$);
        }

        ::java::util::Optional Ephemeris::getCovariance(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovariance_85b6ecc270268e0d], a0.this$));
        }

        ::java::util::Optional Ephemeris::getCovarianceInterpolator() const
        {
          return ::java::util::Optional(env->callObjectMethod(this$, mids$[mid_getCovarianceInterpolator_d0ccac9b4c6bdd55]));
        }

        ::org::orekit::frames::Frame Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::org::orekit::propagation::SpacecraftState Ephemeris::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_15e85d5301b90ef8]));
        }

        JArray< ::java::lang::String > Ephemeris::getManagedAdditionalStates() const
        {
          return JArray< ::java::lang::String >(env->callObjectMethod(this$, mids$[mid_getManagedAdditionalStates_5d7d8c500345981d]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate Ephemeris::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
        }

        ::org::orekit::time::TimeInterpolator Ephemeris::getStateInterpolator() const
        {
          return ::org::orekit::time::TimeInterpolator(env->callObjectMethod(this$, mids$[mid_getStateInterpolator_1bb20e7ea407bfce]));
        }

        jboolean Ephemeris::isAdditionalStateManaged(const ::java::lang::String & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe], a0.this$);
        }

        void Ephemeris::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8655761ebf04b503], a0.this$);
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
        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args);
        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg);
        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self);
        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self);
        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args);
        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data);
        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data);
        static PyGetSetDef t_Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_Ephemeris, covarianceInterpolator),
          DECLARE_GET_FIELD(t_Ephemeris, frame),
          DECLARE_GET_FIELD(t_Ephemeris, initialState),
          DECLARE_GET_FIELD(t_Ephemeris, managedAdditionalStates),
          DECLARE_GET_FIELD(t_Ephemeris, maxDate),
          DECLARE_GET_FIELD(t_Ephemeris, minDate),
          DECLARE_GET_FIELD(t_Ephemeris, stateInterpolator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Ephemeris__methods_[] = {
          DECLARE_METHOD(t_Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, basicPropagate, METH_O),
          DECLARE_METHOD(t_Ephemeris, checkInputConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, checkStatesAndCovariancesConsistency, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Ephemeris, getCovariance, METH_O),
          DECLARE_METHOD(t_Ephemeris, getCovarianceInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getManagedAdditionalStates, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, getStateInterpolator, METH_NOARGS),
          DECLARE_METHOD(t_Ephemeris, isAdditionalStateManaged, METH_VARARGS),
          DECLARE_METHOD(t_Ephemeris, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ephemeris)[] = {
          { Py_tp_methods, t_Ephemeris__methods_ },
          { Py_tp_init, (void *) t_Ephemeris_init_ },
          { Py_tp_getset, t_Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ephemeris)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(Ephemeris, t_Ephemeris, Ephemeris);

        void t_Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(Ephemeris), &PY_TYPE_DEF(Ephemeris), module, "Ephemeris", 0);
        }

        void t_Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "class_", make_descriptor(Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "wrapfn_", make_descriptor(t_Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ephemeris::initializeClass, 1)))
            return NULL;
          return t_Ephemeris::wrap_Object(Ephemeris(((t_Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ephemeris_init_(t_Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              Ephemeris object((jobject) NULL);

              if (!parseArgs(args, "KKKKk", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_, &a4))
              {
                INT_CALL(object = Ephemeris(a0, a1, a2, a3, a4));
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

        static PyObject *t_Ephemeris_basicPropagate(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.basicPropagate(a0));
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "basicPropagate", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkInputConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::TimeInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::util::List a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::orekit::time::TimeInterpolator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "KKKK", ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, ::java::util::List::initializeClass, ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::time::t_TimeInterpolator::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &p3, ::org::orekit::time::t_TimeInterpolator::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkInputConsistency(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkInputConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_checkStatesAndCovariancesConsistency(PyTypeObject *type, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::org::orekit::propagation::analytical::Ephemeris::checkStatesAndCovariancesConsistency(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "checkStatesAndCovariancesConsistency", args);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovariance(t_Ephemeris *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::java::util::Optional result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getCovariance(a0));
            return ::java::util::t_Optional::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(StateCovariance));
          }

          PyErr_SetArgsError((PyObject *) self, "getCovariance", arg);
          return NULL;
        }

        static PyObject *t_Ephemeris_getCovarianceInterpolator(t_Ephemeris *self)
        {
          ::java::util::Optional result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getFrame(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getFrame", args, 2);
        }

        static PyObject *t_Ephemeris_getInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_getManagedAdditionalStates(t_Ephemeris *self, PyObject *args)
        {
          JArray< ::java::lang::String > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getManagedAdditionalStates());
            return JArray<jstring>(result.this$).wrap();
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "getManagedAdditionalStates", args, 2);
        }

        static PyObject *t_Ephemeris_getMaxDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getMinDate(t_Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_Ephemeris_getStateInterpolator(t_Ephemeris *self)
        {
          ::org::orekit::time::TimeInterpolator result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(result, ::org::orekit::propagation::PY_TYPE(SpacecraftState));
        }

        static PyObject *t_Ephemeris_isAdditionalStateManaged(t_Ephemeris *self, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = self->object.isAdditionalStateManaged(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "isAdditionalStateManaged", args, 2);
        }

        static PyObject *t_Ephemeris_resetInitialState(t_Ephemeris *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(Ephemeris), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_Ephemeris_get__covarianceInterpolator(t_Ephemeris *self, void *data)
        {
          ::java::util::Optional value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovarianceInterpolator());
          return ::java::util::t_Optional::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__frame(t_Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__initialState(t_Ephemeris *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__managedAdditionalStates(t_Ephemeris *self, void *data)
        {
          JArray< ::java::lang::String > value((jobject) NULL);
          OBJ_CALL(value = self->object.getManagedAdditionalStates());
          return JArray<jstring>(value.this$).wrap();
        }

        static PyObject *t_Ephemeris_get__maxDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__minDate(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_Ephemeris_get__stateInterpolator(t_Ephemeris *self, void *data)
        {
          ::org::orekit::time::TimeInterpolator value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateInterpolator());
          return ::org::orekit::time::t_TimeInterpolator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *LazyLoadedGeoMagneticFields::class$ = NULL;
        jmethodID *LazyLoadedGeoMagneticFields::mids$ = NULL;
        bool LazyLoadedGeoMagneticFields::live$ = false;

        jclass LazyLoadedGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/LazyLoadedGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_451bc3479d2995cd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/data/DataProvidersManager;)V");
            mids$[mid_getField_a3e70fb66ee864fe] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_7100d3672aa999e4] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_7100d3672aa999e4] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LazyLoadedGeoMagneticFields::LazyLoadedGeoMagneticFields(const ::org::orekit::data::DataProvidersManager & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_451bc3479d2995cd, a0.this$)) {}

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getField(const ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel & a0, jdouble a1) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getField_a3e70fb66ee864fe], a0.this$, a1));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getIGRF(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getIGRF_7100d3672aa999e4], a0));
        }

        ::org::orekit::models::earth::GeoMagneticField LazyLoadedGeoMagneticFields::getWMM(jdouble a0) const
        {
          return ::org::orekit::models::earth::GeoMagneticField(env->callObjectMethod(this$, mids$[mid_getWMM_7100d3672aa999e4], a0));
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
        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args);
        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);
        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg);

        static PyMethodDef t_LazyLoadedGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getField, METH_VARARGS),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getIGRF, METH_O),
          DECLARE_METHOD(t_LazyLoadedGeoMagneticFields, getWMM, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LazyLoadedGeoMagneticFields)[] = {
          { Py_tp_methods, t_LazyLoadedGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_LazyLoadedGeoMagneticFields_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LazyLoadedGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LazyLoadedGeoMagneticFields, t_LazyLoadedGeoMagneticFields, LazyLoadedGeoMagneticFields);

        void t_LazyLoadedGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(LazyLoadedGeoMagneticFields), &PY_TYPE_DEF(LazyLoadedGeoMagneticFields), module, "LazyLoadedGeoMagneticFields", 0);
        }

        void t_LazyLoadedGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "class_", make_descriptor(LazyLoadedGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "wrapfn_", make_descriptor(t_LazyLoadedGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_LazyLoadedGeoMagneticFields::wrap_Object(LazyLoadedGeoMagneticFields(((t_LazyLoadedGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_LazyLoadedGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LazyLoadedGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LazyLoadedGeoMagneticFields_init_(t_LazyLoadedGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::data::DataProvidersManager a0((jobject) NULL);
          LazyLoadedGeoMagneticFields object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::data::DataProvidersManager::initializeClass, &a0))
          {
            INT_CALL(object = LazyLoadedGeoMagneticFields(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getField(t_LazyLoadedGeoMagneticFields *self, PyObject *args)
        {
          ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArgs(args, "KD", ::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel::initializeClass, &a0, &p0, ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getField(a0, a1));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getField", args);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getIGRF(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getIGRF(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getIGRF", arg);
          return NULL;
        }

        static PyObject *t_LazyLoadedGeoMagneticFields_getWMM(t_LazyLoadedGeoMagneticFields *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::models::earth::GeoMagneticField result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getWMM(a0));
            return ::org::orekit::models::earth::t_GeoMagneticField::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getWMM", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DDefinition::class$ = NULL;
              jmethodID *ShortTermEncounter2DDefinition::mids$ = NULL;
              bool ShortTermEncounter2DDefinition::live$ = false;

              jclass ShortTermEncounter2DDefinition::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_45b4ee740e8d45ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_c946a44e40dff7f4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)V");
                  mids$[mid_init$_fe93df6ed6c46598] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_init$_4f9dd48a8d0a9867] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/frames/encounter/EncounterLOFType;D)V");
                  mids$[mid_computeCombinedCovarianceInEncounterFrame_8e9af39b29713242] = env->getMethodID(cls, "computeCombinedCovarianceInEncounterFrame", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCombinedCovarianceInReferenceTNW_8e9af39b29713242] = env->getMethodID(cls, "computeCombinedCovarianceInReferenceTNW", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_computeCoppolaEncounterDuration_557b8123390d8d0c] = env->getMethodID(cls, "computeCoppolaEncounterDuration", "()D");
                  mids$[mid_computeMahalanobisDistance_557b8123390d8d0c] = env->getMethodID(cls, "computeMahalanobisDistance", "()D");
                  mids$[mid_computeMahalanobisDistance_7e960cd6eee376d8] = env->getMethodID(cls, "computeMahalanobisDistance", "(D)D");
                  mids$[mid_computeMissDistance_557b8123390d8d0c] = env->getMethodID(cls, "computeMissDistance", "()D");
                  mids$[mid_computeOtherPositionInCollisionPlane_f681f2fc9cdfab57] = env->getMethodID(cls, "computeOtherPositionInCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_f681f2fc9cdfab57] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherPositionInRotatedCollisionPlane_1b4c0a5fd68f3ffb] = env->getMethodID(cls, "computeOtherPositionInRotatedCollisionPlane", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
                  mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_77bd7b3cdab2713e] = env->getMethodID(cls, "computeOtherRelativeToReferencePVInReferenceInertial", "()Lorg/orekit/utils/PVCoordinates;");
                  mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_70a207fcbc031df2] = env->getMethodID(cls, "computeProjectedCombinedPositionalCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_70a207fcbc031df2] = env->getMethodID(cls, "computeReferenceInertialToCollisionPlaneProjectionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_computeSquaredMahalanobisDistance_557b8123390d8d0c] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "()D");
                  mids$[mid_computeSquaredMahalanobisDistance_7e960cd6eee376d8] = env->getMethodID(cls, "computeSquaredMahalanobisDistance", "(D)D");
                  mids$[mid_computeSquaredMahalanobisDistance_ee5b345ac15668c2] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/linear/RealMatrix;)D");
                  mids$[mid_computeSquaredMahalanobisDistance_79d60f5d1a9d8623] = env->getStaticMethodID(cls, "computeSquaredMahalanobisDistance", "(DDDD)D");
                  mids$[mid_getCombinedRadius_557b8123390d8d0c] = env->getMethodID(cls, "getCombinedRadius", "()D");
                  mids$[mid_getEncounterFrame_ebfb39c00facd535] = env->getMethodID(cls, "getEncounterFrame", "()Lorg/orekit/frames/encounter/EncounterLOF;");
                  mids$[mid_getOtherAtTCA_71f9c54b5f482a59] = env->getMethodID(cls, "getOtherAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getOtherCovariance_8e9af39b29713242] = env->getMethodID(cls, "getOtherCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getReferenceAtTCA_71f9c54b5f482a59] = env->getMethodID(cls, "getReferenceAtTCA", "()Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getReferenceCovariance_8e9af39b29713242] = env->getMethodID(cls, "getReferenceCovariance", "()Lorg/orekit/propagation/StateCovariance;");
                  mids$[mid_getTca_7a97f7e149e79afb] = env->getMethodID(cls, "getTca", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_45b4ee740e8d45ab, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c946a44e40dff7f4, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, const ::org::orekit::frames::encounter::EncounterLOFType & a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fe93df6ed6c46598, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$, a6)) {}

              ShortTermEncounter2DDefinition::ShortTermEncounter2DDefinition(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5, const ::org::orekit::frames::encounter::EncounterLOFType & a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f9dd48a8d0a9867, a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$, a7)) {}

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInEncounterFrame() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInEncounterFrame_8e9af39b29713242]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::computeCombinedCovarianceInReferenceTNW() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_computeCombinedCovarianceInReferenceTNW_8e9af39b29713242]));
              }

              jdouble ShortTermEncounter2DDefinition::computeCoppolaEncounterDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeCoppolaEncounterDuration_557b8123390d8d0c]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_557b8123390d8d0c]);
              }

              jdouble ShortTermEncounter2DDefinition::computeMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMahalanobisDistance_7e960cd6eee376d8], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeMissDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeMissDistance_557b8123390d8d0c]);
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInCollisionPlane_f681f2fc9cdfab57]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane() const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_f681f2fc9cdfab57]));
              }

              ::org::hipparchus::geometry::euclidean::twod::Vector2D ShortTermEncounter2DDefinition::computeOtherPositionInRotatedCollisionPlane(jdouble a0) const
              {
                return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_computeOtherPositionInRotatedCollisionPlane_1b4c0a5fd68f3ffb], a0));
              }

              ::org::orekit::utils::PVCoordinates ShortTermEncounter2DDefinition::computeOtherRelativeToReferencePVInReferenceInertial() const
              {
                return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeOtherRelativeToReferencePVInReferenceInertial_77bd7b3cdab2713e]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix_70a207fcbc031df2]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeProjectedCombinedPositionalCovarianceMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeProjectedCombinedPositionalCovarianceMatrix_70a207fcbc031df2]));
              }

              ::org::hipparchus::linear::RealMatrix ShortTermEncounter2DDefinition::computeReferenceInertialToCollisionPlaneProjectionMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_computeReferenceInertialToCollisionPlaneProjectionMatrix_70a207fcbc031df2]));
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance() const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_557b8123390d8d0c]);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0) const
              {
                return env->callDoubleMethod(this$, mids$[mid_computeSquaredMahalanobisDistance_7e960cd6eee376d8], a0);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, const ::org::hipparchus::linear::RealMatrix & a1)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_ee5b345ac15668c2], a0.this$, a1.this$);
              }

              jdouble ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
              {
                jclass cls = env->getClass(initializeClass);
                return env->callStaticDoubleMethod(cls, mids$[mid_computeSquaredMahalanobisDistance_79d60f5d1a9d8623], a0, a1, a2, a3);
              }

              jdouble ShortTermEncounter2DDefinition::getCombinedRadius() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getCombinedRadius_557b8123390d8d0c]);
              }

              ::org::orekit::frames::encounter::EncounterLOF ShortTermEncounter2DDefinition::getEncounterFrame() const
              {
                return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getEncounterFrame_ebfb39c00facd535]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getOtherAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOtherAtTCA_71f9c54b5f482a59]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getOtherCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getOtherCovariance_8e9af39b29713242]));
              }

              ::org::orekit::orbits::Orbit ShortTermEncounter2DDefinition::getReferenceAtTCA() const
              {
                return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getReferenceAtTCA_71f9c54b5f482a59]));
              }

              ::org::orekit::propagation::StateCovariance ShortTermEncounter2DDefinition::getReferenceCovariance() const
              {
                return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_getReferenceCovariance_8e9af39b29713242]));
              }

              ::org::orekit::time::AbsoluteDate ShortTermEncounter2DDefinition::getTca() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTca_7a97f7e149e79afb]));
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
              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg);
              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self);
              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DDefinition__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, combinedRadius),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, encounterFrame),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, otherCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceAtTCA),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, referenceCovariance),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DDefinition, tca),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DDefinition__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCombinedCovarianceInReferenceTNW, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeCoppolaEncounterDuration, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeMissDistance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInCollisionPlane, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherPositionInRotatedCollisionPlane, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeOtherRelativeToReferencePVInReferenceInertial, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeProjectedCombinedPositionalCovarianceMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeReferenceInertialToCollisionPlaneProjectionMatrix, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, computeSquaredMahalanobisDistance_, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getCombinedRadius, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getEncounterFrame, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getOtherCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceAtTCA, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getReferenceCovariance, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DDefinition, getTca, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DDefinition)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DDefinition__methods_ },
                { Py_tp_init, (void *) t_ShortTermEncounter2DDefinition_init_ },
                { Py_tp_getset, t_ShortTermEncounter2DDefinition__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DDefinition)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DDefinition, t_ShortTermEncounter2DDefinition, ShortTermEncounter2DDefinition);

              void t_ShortTermEncounter2DDefinition::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DDefinition), &PY_TYPE_DEF(ShortTermEncounter2DDefinition), module, "ShortTermEncounter2DDefinition", 0);
              }

              void t_ShortTermEncounter2DDefinition::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "class_", make_descriptor(ShortTermEncounter2DDefinition::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "wrapfn_", make_descriptor(t_ShortTermEncounter2DDefinition::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DDefinition), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_ShortTermEncounter2DDefinition_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DDefinition::wrap_Object(ShortTermEncounter2DDefinition(((t_ShortTermEncounter2DDefinition *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DDefinition_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DDefinition::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_ShortTermEncounter2DDefinition_init_(t_ShortTermEncounter2DDefinition *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 5:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 6:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 7:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::frames::encounter::EncounterLOFType a5((jobject) NULL);
                    PyTypeObject **p5;
                    jdouble a6;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a6))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6));
                      self->object = object;
                      break;
                    }
                  }
                  goto err;
                 case 8:
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::frames::encounter::EncounterLOFType a6((jobject) NULL);
                    PyTypeObject **p6;
                    jdouble a7;
                    ShortTermEncounter2DDefinition object((jobject) NULL);

                    if (!parseArgs(args, "kkDkkDKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::frames::encounter::EncounterLOFType::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::frames::encounter::t_EncounterLOFType::parameters_, &a7))
                    {
                      INT_CALL(object = ShortTermEncounter2DDefinition(a0, a1, a2, a3, a4, a5, a6, a7));
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

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInEncounterFrame());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCombinedCovarianceInReferenceTNW(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.computeCombinedCovarianceInReferenceTNW());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeCoppolaEncounterDuration(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeCoppolaEncounterDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeMissDistance(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.computeMissDistance());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInCollisionPlane(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherPositionInCollisionPlane());
                return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherPositionInRotatedCollisionPlane(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);
                    OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane());
                    return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeOtherPositionInRotatedCollisionPlane(a0));
                      return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeOtherPositionInRotatedCollisionPlane", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeOtherRelativeToReferencePVInReferenceInertial(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::utils::PVCoordinates result((jobject) NULL);
                OBJ_CALL(result = self->object.computeOtherRelativeToReferencePVInReferenceInertial());
                return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedAndDiagonalizedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeProjectedCombinedPositionalCovarianceMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeProjectedCombinedPositionalCovarianceMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeReferenceInertialToCollisionPlaneProjectionMatrix(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.computeReferenceInertialToCollisionPlaneProjectionMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance(t_ShortTermEncounter2DDefinition *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    jdouble result;
                    OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance());
                    return PyFloat_FromDouble((double) result);
                  }
                  break;
                 case 1:
                  {
                    jdouble a0;
                    jdouble result;

                    if (!parseArgs(args, "D", &a0))
                    {
                      OBJ_CALL(result = self->object.computeSquaredMahalanobisDistance(a0));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "computeSquaredMahalanobisDistance", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_computeSquaredMahalanobisDistance_(PyTypeObject *type, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
                    ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                    jdouble result;

                    if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1));
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
                      OBJ_CALL(result = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::computeSquaredMahalanobisDistance(a0, a1, a2, a3));
                      return PyFloat_FromDouble((double) result);
                    }
                  }
                }

                PyErr_SetArgsError(type, "computeSquaredMahalanobisDistance_", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getCombinedRadius(t_ShortTermEncounter2DDefinition *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getEncounterFrame(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);
                OBJ_CALL(result = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getOtherCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceAtTCA(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::orbits::Orbit result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getReferenceCovariance(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::propagation::StateCovariance result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_getTca(t_ShortTermEncounter2DDefinition *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getTca());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__combinedRadius(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getCombinedRadius());
                return PyFloat_FromDouble((double) value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__encounterFrame(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::frames::encounter::EncounterLOF value((jobject) NULL);
                OBJ_CALL(value = self->object.getEncounterFrame());
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__otherCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getOtherCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceAtTCA(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::orbits::Orbit value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceAtTCA());
                return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__referenceCovariance(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::propagation::StateCovariance value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceCovariance());
                return ::org::orekit::propagation::t_StateCovariance::wrap_Object(value);
              }

              static PyObject *t_ShortTermEncounter2DDefinition_get__tca(t_ShortTermEncounter2DDefinition *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getTca());
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
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ProfileThrustPropulsionModel::class$ = NULL;
          jmethodID *ProfileThrustPropulsionModel::mids$ = NULL;
          bool ProfileThrustPropulsionModel::live$ = false;

          jclass ProfileThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_695d3f43be2dface] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFlowRate_1bbf81d80c47ecdd] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_810dcb8f9f5d191a] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_4ad317f7598a10a9] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_3fff8c49d4e2dc6b] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_b61fb59a041240c6] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_61944e27a39e8290] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfileThrustPropulsionModel::ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap & a0, jdouble a1, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_695d3f43be2dface, a0.this$, a1, a2.this$, a3.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType ProfileThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_601f05e5d0c82ad9]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_d7cce92225eb0db2]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_8130af76f6998f44], a0.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_1bbf81d80c47ecdd], a0.this$);
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_810dcb8f9f5d191a], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_4ad317f7598a10a9], a0.this$, a1.this$));
          }

          ::java::lang::String ProfileThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::java::util::List ProfileThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3fff8c49d4e2dc6b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_b61fb59a041240c6], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_61944e27a39e8290], a0.this$, a1.this$));
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
        namespace propulsion {
          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ProfileThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfileThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfileThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ProfileThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ProfileThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ProfileThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfileThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ProfileThrustPropulsionModel, t_ProfileThrustPropulsionModel, ProfileThrustPropulsionModel);

          void t_ProfileThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfileThrustPropulsionModel), &PY_TYPE_DEF(ProfileThrustPropulsionModel), module, "ProfileThrustPropulsionModel", 0);
          }

          void t_ProfileThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "class_", make_descriptor(ProfileThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "wrapfn_", make_descriptor(t_ProfileThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ProfileThrustPropulsionModel::wrap_Object(ProfileThrustPropulsionModel(((t_ProfileThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::lang::String a3((jobject) NULL);
            ProfileThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "KDKs", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2, &p2, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a3))
            {
              INT_CALL(object = ProfileThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
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
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1243::class$ = NULL;
              jmethodID *Rtcm1243::mids$ = NULL;
              bool Rtcm1243::live$ = false;

              jclass Rtcm1243::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1243");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_e429337ce34e6c7c] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1243::Rtcm1243(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_e429337ce34e6c7c, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args);
              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data);
              static PyGetSetDef t_Rtcm1243__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1243, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1243__methods_[] = {
                DECLARE_METHOD(t_Rtcm1243, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1243, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1243)[] = {
                { Py_tp_methods, t_Rtcm1243__methods_ },
                { Py_tp_init, (void *) t_Rtcm1243_init_ },
                { Py_tp_getset, t_Rtcm1243__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1243)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1243, t_Rtcm1243, Rtcm1243);
              PyObject *t_Rtcm1243::wrap_Object(const Rtcm1243& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1243::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1243::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1243 *self = (t_Rtcm1243 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1243::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1243), &PY_TYPE_DEF(Rtcm1243), module, "Rtcm1243", 0);
              }

              void t_Rtcm1243::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "class_", make_descriptor(Rtcm1243::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "wrapfn_", make_descriptor(t_Rtcm1243::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1243), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1243_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1243::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1243::wrap_Object(Rtcm1243(((t_Rtcm1243 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1243_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1243::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1243_of_(t_Rtcm1243 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1243_init_(t_Rtcm1243 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1243 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1243(a0, a1, a2));
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
              static PyObject *t_Rtcm1243_get__parameters_(t_Rtcm1243 *self, void *data)
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldMaxGapInterpolationGrid::class$ = NULL;
            jmethodID *FieldMaxGapInterpolationGrid::mids$ = NULL;
            bool FieldMaxGapInterpolationGrid::live$ = false;

            jclass FieldMaxGapInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldMaxGapInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
                mids$[mid_getGridPoints_4a8c729a6fb08a74] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldMaxGapInterpolationGrid::FieldMaxGapInterpolationGrid(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

            JArray< ::org::hipparchus::CalculusFieldElement > FieldMaxGapInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4a8c729a6fb08a74], a0.this$, a1.this$));
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
            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldMaxGapInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldMaxGapInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldMaxGapInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldMaxGapInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldMaxGapInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldMaxGapInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_FieldMaxGapInterpolationGrid_init_ },
              { Py_tp_getset, t_FieldMaxGapInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldMaxGapInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldMaxGapInterpolationGrid, t_FieldMaxGapInterpolationGrid, FieldMaxGapInterpolationGrid);
            PyObject *t_FieldMaxGapInterpolationGrid::wrap_Object(const FieldMaxGapInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldMaxGapInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldMaxGapInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldMaxGapInterpolationGrid *self = (t_FieldMaxGapInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldMaxGapInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldMaxGapInterpolationGrid), &PY_TYPE_DEF(FieldMaxGapInterpolationGrid), module, "FieldMaxGapInterpolationGrid", 0);
            }

            void t_FieldMaxGapInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "class_", make_descriptor(FieldMaxGapInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "wrapfn_", make_descriptor(t_FieldMaxGapInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMaxGapInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldMaxGapInterpolationGrid::wrap_Object(FieldMaxGapInterpolationGrid(((t_FieldMaxGapInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldMaxGapInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_of_(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldMaxGapInterpolationGrid_init_(t_FieldMaxGapInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              FieldMaxGapInterpolationGrid object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldMaxGapInterpolationGrid(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldMaxGapInterpolationGrid_getGridPoints(t_FieldMaxGapInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldMaxGapInterpolationGrid_get__parameters_(t_FieldMaxGapInterpolationGrid *self, void *data)
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
#include "org/orekit/propagation/StateCovarianceBlender.h"
#include "org/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/frames/LOFType.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
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
          mids$[mid_init$_4c0eb030f755b484] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/LOFType;)V");
          mids$[mid_init$_9518e74cf0516047] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/polynomials/SmoothStepFactory$SmoothStepFunction;Lorg/orekit/time/TimeInterpolator;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_computeInterpolatedCovarianceInOrbitFrame_1da586432f5e847a] = env->getMethodID(cls, "computeInterpolatedCovarianceInOrbitFrame", "(Ljava/util/List;Lorg/orekit/orbits/Orbit;)Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::LOFType & a2) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4c0eb030f755b484, a0.this$, a1.this$, a2.this$)) {}

      StateCovarianceBlender::StateCovarianceBlender(const ::org::hipparchus::analysis::polynomials::SmoothStepFactory$SmoothStepFunction & a0, const ::org::orekit::time::TimeInterpolator & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::org::orekit::propagation::AbstractStateCovarianceInterpolator(env->newObject(initializeClass, &mids$, mid_init$_9518e74cf0516047, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
#include "org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/CharSequence.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *HexadecimalSequenceEncodedMessage::class$ = NULL;
          jmethodID *HexadecimalSequenceEncodedMessage::mids$ = NULL;
          bool HexadecimalSequenceEncodedMessage::live$ = false;

          jclass HexadecimalSequenceEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/HexadecimalSequenceEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_01ce980d49cb2b81] = env->getMethodID(cls, "<init>", "(Ljava/lang/CharSequence;)V");
              mids$[mid_start_0640e6acf969ed28] = env->getMethodID(cls, "start", "()V");
              mids$[mid_fetchByte_412668abc8d889e9] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          HexadecimalSequenceEncodedMessage::HexadecimalSequenceEncodedMessage(const ::java::lang::CharSequence & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_01ce980d49cb2b81, a0.this$)) {}

          void HexadecimalSequenceEncodedMessage::start() const
          {
            env->callVoidMethod(this$, mids$[mid_start_0640e6acf969ed28]);
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
          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args);

          static PyMethodDef t_HexadecimalSequenceEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_HexadecimalSequenceEncodedMessage, start, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(HexadecimalSequenceEncodedMessage)[] = {
            { Py_tp_methods, t_HexadecimalSequenceEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_HexadecimalSequenceEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(HexadecimalSequenceEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(HexadecimalSequenceEncodedMessage, t_HexadecimalSequenceEncodedMessage, HexadecimalSequenceEncodedMessage);

          void t_HexadecimalSequenceEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(HexadecimalSequenceEncodedMessage), &PY_TYPE_DEF(HexadecimalSequenceEncodedMessage), module, "HexadecimalSequenceEncodedMessage", 0);
          }

          void t_HexadecimalSequenceEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "class_", make_descriptor(HexadecimalSequenceEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "wrapfn_", make_descriptor(t_HexadecimalSequenceEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(HexadecimalSequenceEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_HexadecimalSequenceEncodedMessage::wrap_Object(HexadecimalSequenceEncodedMessage(((t_HexadecimalSequenceEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_HexadecimalSequenceEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, HexadecimalSequenceEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_HexadecimalSequenceEncodedMessage_init_(t_HexadecimalSequenceEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::CharSequence a0((jobject) NULL);
            HexadecimalSequenceEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "O", ::java::lang::PY_TYPE(CharSequence), &a0))
            {
              INT_CALL(object = HexadecimalSequenceEncodedMessage(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_HexadecimalSequenceEncodedMessage_start(t_HexadecimalSequenceEncodedMessage *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.start());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(HexadecimalSequenceEncodedMessage), (PyObject *) self, "start", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNegateDetector::class$ = NULL;
        jmethodID *FieldNegateDetector::mids$ = NULL;
        bool FieldNegateDetector::live$ = false;

        jclass FieldNegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2ffeff0ffaf1deef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_de1c2d709eb2829c] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOriginal_07d9256595c42b86] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_6b615758cd0b7a12] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNegateDetector::FieldNegateDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_2ffeff0ffaf1deef, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNegateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_de1c2d709eb2829c], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldNegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_07d9256595c42b86]));
        }

        void FieldNegateDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
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
        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args);
        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self);
        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data);
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data);
        static PyGetSetDef t_FieldNegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNegateDetector, original),
          DECLARE_GET_FIELD(t_FieldNegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNegateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_FieldNegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNegateDetector)[] = {
          { Py_tp_methods, t_FieldNegateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNegateDetector_init_ },
          { Py_tp_getset, t_FieldNegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNegateDetector, t_FieldNegateDetector, FieldNegateDetector);
        PyObject *t_FieldNegateDetector::wrap_Object(const FieldNegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNegateDetector), &PY_TYPE_DEF(FieldNegateDetector), module, "FieldNegateDetector", 0);
        }

        void t_FieldNegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "class_", make_descriptor(FieldNegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "wrapfn_", make_descriptor(t_FieldNegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNegateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNegateDetector::wrap_Object(FieldNegateDetector(((t_FieldNegateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldNegateDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldNegateDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/CovarianceMethod.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CovarianceMethod::class$ = NULL;
            jmethodID *CovarianceMethod::mids$ = NULL;
            bool CovarianceMethod::live$ = false;
            CovarianceMethod *CovarianceMethod::CALCULATED = NULL;
            CovarianceMethod *CovarianceMethod::DEFAULT = NULL;

            jclass CovarianceMethod::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CovarianceMethod");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_5d9d13c02fa6e83f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");
                mids$[mid_values_f84183ccdd089e0a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CALCULATED = new CovarianceMethod(env->getStaticObjectField(cls, "CALCULATED", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                DEFAULT = new CovarianceMethod(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/files/ccsds/ndm/cdm/CovarianceMethod;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CovarianceMethod CovarianceMethod::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CovarianceMethod(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5d9d13c02fa6e83f], a0.this$));
            }

            JArray< CovarianceMethod > CovarianceMethod::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CovarianceMethod >(env->callStaticObjectMethod(cls, mids$[mid_values_f84183ccdd089e0a]));
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
            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args);
            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CovarianceMethod_values(PyTypeObject *type);
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data);
            static PyGetSetDef t_CovarianceMethod__fields_[] = {
              DECLARE_GET_FIELD(t_CovarianceMethod, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CovarianceMethod__methods_[] = {
              DECLARE_METHOD(t_CovarianceMethod, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, of_, METH_VARARGS),
              DECLARE_METHOD(t_CovarianceMethod, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CovarianceMethod, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CovarianceMethod)[] = {
              { Py_tp_methods, t_CovarianceMethod__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CovarianceMethod__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CovarianceMethod)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CovarianceMethod, t_CovarianceMethod, CovarianceMethod);
            PyObject *t_CovarianceMethod::wrap_Object(const CovarianceMethod& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CovarianceMethod::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CovarianceMethod::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CovarianceMethod *self = (t_CovarianceMethod *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CovarianceMethod::install(PyObject *module)
            {
              installType(&PY_TYPE(CovarianceMethod), &PY_TYPE_DEF(CovarianceMethod), module, "CovarianceMethod", 0);
            }

            void t_CovarianceMethod::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "class_", make_descriptor(CovarianceMethod::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "wrapfn_", make_descriptor(t_CovarianceMethod::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "boxfn_", make_descriptor(boxObject));
              env->getClass(CovarianceMethod::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "CALCULATED", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::CALCULATED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMethod), "DEFAULT", make_descriptor(t_CovarianceMethod::wrap_Object(*CovarianceMethod::DEFAULT)));
            }

            static PyObject *t_CovarianceMethod_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CovarianceMethod::initializeClass, 1)))
                return NULL;
              return t_CovarianceMethod::wrap_Object(CovarianceMethod(((t_CovarianceMethod *) arg)->object.this$));
            }
            static PyObject *t_CovarianceMethod_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CovarianceMethod::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CovarianceMethod_of_(t_CovarianceMethod *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CovarianceMethod_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CovarianceMethod result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::valueOf(a0));
                return t_CovarianceMethod::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CovarianceMethod_values(PyTypeObject *type)
            {
              JArray< CovarianceMethod > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CovarianceMethod::values());
              return JArray<jobject>(result.this$).wrap(t_CovarianceMethod::wrap_jobject);
            }
            static PyObject *t_CovarianceMethod_get__parameters_(t_CovarianceMethod *self, void *data)
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
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *HypergeometricDistribution::class$ = NULL;
        jmethodID *HypergeometricDistribution::mids$ = NULL;
        bool HypergeometricDistribution::live$ = false;

        jclass HypergeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/HypergeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3796b665437eba81] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_cumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPopulationSize_412668abc8d889e9] = env->getMethodID(cls, "getPopulationSize", "()I");
            mids$[mid_getSampleSize_412668abc8d889e9] = env->getMethodID(cls, "getSampleSize", "()I");
            mids$[mid_getSupportLowerBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_412668abc8d889e9] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_69cfb132c661aca4] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_69cfb132c661aca4] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_upperCumulativeProbability_69cfb132c661aca4] = env->getMethodID(cls, "upperCumulativeProbability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HypergeometricDistribution::HypergeometricDistribution(jint a0, jint a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_3796b665437eba81, a0, a1, a2)) {}

        jdouble HypergeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_69cfb132c661aca4], a0);
        }

        jint HypergeometricDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_412668abc8d889e9]);
        }

        jdouble HypergeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble HypergeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jint HypergeometricDistribution::getPopulationSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getPopulationSize_412668abc8d889e9]);
        }

        jint HypergeometricDistribution::getSampleSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSampleSize_412668abc8d889e9]);
        }

        jint HypergeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_412668abc8d889e9]);
        }

        jint HypergeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_412668abc8d889e9]);
        }

        jboolean HypergeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
        }

        jdouble HypergeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_69cfb132c661aca4], a0);
        }

        jdouble HypergeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_69cfb132c661aca4], a0);
        }

        jdouble HypergeometricDistribution::upperCumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_upperCumulativeProbability_69cfb132c661aca4], a0);
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
        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data);
        static PyGetSetDef t_HypergeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, populationSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, sampleSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HypergeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_HypergeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getPopulationSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSampleSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, probability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, upperCumulativeProbability, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HypergeometricDistribution)[] = {
          { Py_tp_methods, t_HypergeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_HypergeometricDistribution_init_ },
          { Py_tp_getset, t_HypergeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HypergeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(HypergeometricDistribution, t_HypergeometricDistribution, HypergeometricDistribution);

        void t_HypergeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(HypergeometricDistribution), &PY_TYPE_DEF(HypergeometricDistribution), module, "HypergeometricDistribution", 0);
        }

        void t_HypergeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "class_", make_descriptor(HypergeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "wrapfn_", make_descriptor(t_HypergeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HypergeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_HypergeometricDistribution::wrap_Object(HypergeometricDistribution(((t_HypergeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HypergeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jint a2;
          HypergeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = HypergeometricDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPopulationSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSampleSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.upperCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "upperCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPopulationSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSampleSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data)
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
#include "org/orekit/data/DataSource$ReaderOpener.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "java/io/Reader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataSource$ReaderOpener::class$ = NULL;
      jmethodID *DataSource$ReaderOpener::mids$ = NULL;
      bool DataSource$ReaderOpener::live$ = false;

      jclass DataSource$ReaderOpener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataSource$ReaderOpener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_openOnce_db817b1afec8e8b3] = env->getMethodID(cls, "openOnce", "()Ljava/io/Reader;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::io::Reader DataSource$ReaderOpener::openOnce() const
      {
        return ::java::io::Reader(env->callObjectMethod(this$, mids$[mid_openOnce_db817b1afec8e8b3]));
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
      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self);

      static PyMethodDef t_DataSource$ReaderOpener__methods_[] = {
        DECLARE_METHOD(t_DataSource$ReaderOpener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataSource$ReaderOpener, openOnce, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataSource$ReaderOpener)[] = {
        { Py_tp_methods, t_DataSource$ReaderOpener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataSource$ReaderOpener)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataSource$ReaderOpener, t_DataSource$ReaderOpener, DataSource$ReaderOpener);

      void t_DataSource$ReaderOpener::install(PyObject *module)
      {
        installType(&PY_TYPE(DataSource$ReaderOpener), &PY_TYPE_DEF(DataSource$ReaderOpener), module, "DataSource$ReaderOpener", 0);
      }

      void t_DataSource$ReaderOpener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "class_", make_descriptor(DataSource$ReaderOpener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "wrapfn_", make_descriptor(t_DataSource$ReaderOpener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataSource$ReaderOpener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataSource$ReaderOpener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataSource$ReaderOpener::initializeClass, 1)))
          return NULL;
        return t_DataSource$ReaderOpener::wrap_Object(DataSource$ReaderOpener(((t_DataSource$ReaderOpener *) arg)->object.this$));
      }
      static PyObject *t_DataSource$ReaderOpener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataSource$ReaderOpener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataSource$ReaderOpener_openOnce(t_DataSource$ReaderOpener *self)
      {
        ::java::io::Reader result((jobject) NULL);
        OBJ_CALL(result = self->object.openOnce());
        return ::java::io::t_Reader::wrap_Object(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *UnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool UnscentedKalmanEstimatorBuilder::live$ = false;

        jclass UnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_910d9b705ae177cf] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_99c6e345eb94588e] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/UnscentedKalmanEstimator;");
            mids$[mid_decomposer_d9ee1fe18fb8546c] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_8c50f82de329d511] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_961c88377e177f40] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnscentedKalmanEstimatorBuilder::UnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_910d9b705ae177cf], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::UnscentedKalmanEstimator UnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::UnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_99c6e345eb94588e]));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_d9ee1fe18fb8546c], a0.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_8c50f82de329d511], a0.this$, a1.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_961c88377e177f40], a0.this$));
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
        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_UnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_UnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimatorBuilder, t_UnscentedKalmanEstimatorBuilder, UnscentedKalmanEstimatorBuilder);

        void t_UnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder), module, "UnscentedKalmanEstimatorBuilder", 0);
        }

        void t_UnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "class_", make_descriptor(UnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimatorBuilder::wrap_Object(UnscentedKalmanEstimatorBuilder(((t_UnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          UnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = UnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_UnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
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
#include "org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonManeuverTriggers::class$ = NULL;
          jmethodID *PythonManeuverTriggers::mids$ = NULL;
          bool PythonManeuverTriggers::live$ = false;

          jclass PythonManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addResetter_6c2e9e35ba95043d] = env->getMethodID(cls, "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V");
              mids$[mid_addResetter_17259cc5ef51ebf7] = env->getMethodID(cls, "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_d7cce92225eb0db2] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_8130af76f6998f44] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_isFiring_cf913265ec3c3fe7] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z");
              mids$[mid_isFiring_7ccb736f2a8bfc30] = env->getMethodID(cls, "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonManeuverTriggers::PythonManeuverTriggers() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          void PythonManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          jlong PythonManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonManeuverTriggers::pythonExtension(jlong a0) const
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self);
          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args);
          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonManeuverTriggers)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonManeuverTriggers, t_PythonManeuverTriggers, PythonManeuverTriggers);

          void t_PythonManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonManeuverTriggers), &PY_TYPE_DEF(PythonManeuverTriggers), module, "PythonManeuverTriggers", 1);
          }

          void t_PythonManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "class_", make_descriptor(PythonManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "wrapfn_", make_descriptor(t_PythonManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "addResetter", "(Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter0 },
              { "addResetter", "(Lorg/hipparchus/Field;Lorg/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter;)V", (void *) t_PythonManeuverTriggers_addResetter1 },
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getEventDetectors2 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonManeuverTriggers_getFieldEventDetectors3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonManeuverTriggers_getParametersDrivers4 },
              { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonManeuverTriggers_init5 },
              { "isFiring", "(Lorg/orekit/time/AbsoluteDate;[D)Z", (void *) t_PythonManeuverTriggers_isFiring6 },
              { "isFiring", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Z", (void *) t_PythonManeuverTriggers_isFiring7 },
              { "pythonDecRef", "()V", (void *) t_PythonManeuverTriggers_pythonDecRef8 },
            };
            env->registerNatives(cls, methods, 9);
          }

          static PyObject *t_PythonManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonManeuverTriggers::wrap_Object(PythonManeuverTriggers(((t_PythonManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonManeuverTriggers_init_(t_PythonManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonManeuverTriggers_finalize(t_PythonManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonManeuverTriggers_pythonExtension(t_PythonManeuverTriggers *self, PyObject *args)
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

          static void JNICALL t_PythonManeuverTriggers_addResetter0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::forces::maneuvers::trigger::t_ManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::ManeuverTriggersResetter(a0));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonManeuverTriggers_addResetter1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::forces::maneuvers::trigger::t_FieldManeuverTriggersResetter::wrap_Object(::org::orekit::forces::maneuvers::trigger::FieldManeuverTriggersResetter(a1));
            PyObject *result = PyObject_CallMethod(obj, "addResetter", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jobject JNICALL t_PythonManeuverTriggers_getEventDetectors2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getFieldEventDetectors3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonManeuverTriggers_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
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

          static void JNICALL t_PythonManeuverTriggers_init5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
            PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *o1 = JArray<jdouble>(a1).wrap();
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static jboolean JNICALL t_PythonManeuverTriggers_isFiring7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
            PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "isFiring", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiring", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonManeuverTriggers_pythonDecRef8(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonManeuverTriggers::mids$[PythonManeuverTriggers::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonManeuverTriggers_get__self(t_PythonManeuverTriggers *self, void *data)
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
#include "org/orekit/frames/TransformProviderUtils.h"
#include "org/orekit/frames/TransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformProviderUtils::class$ = NULL;
      jmethodID *TransformProviderUtils::mids$ = NULL;
      bool TransformProviderUtils::live$ = false;
      ::org::orekit::frames::TransformProvider *TransformProviderUtils::IDENTITY_PROVIDER = NULL;

      jclass TransformProviderUtils::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformProviderUtils");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getCombinedProvider_8798d257229cdce9] = env->getStaticMethodID(cls, "getCombinedProvider", "(Lorg/orekit/frames/TransformProvider;Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");
          mids$[mid_getReversedProvider_8b834322b537d1ea] = env->getStaticMethodID(cls, "getReversedProvider", "(Lorg/orekit/frames/TransformProvider;)Lorg/orekit/frames/TransformProvider;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          IDENTITY_PROVIDER = new ::org::orekit::frames::TransformProvider(env->getStaticObjectField(cls, "IDENTITY_PROVIDER", "Lorg/orekit/frames/TransformProvider;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getCombinedProvider(const ::org::orekit::frames::TransformProvider & a0, const ::org::orekit::frames::TransformProvider & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getCombinedProvider_8798d257229cdce9], a0.this$, a1.this$));
      }

      ::org::orekit::frames::TransformProvider TransformProviderUtils::getReversedProvider(const ::org::orekit::frames::TransformProvider & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::TransformProvider(env->callStaticObjectMethod(cls, mids$[mid_getReversedProvider_8b834322b537d1ea], a0.this$));
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
      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args);
      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_TransformProviderUtils__methods_[] = {
        DECLARE_METHOD(t_TransformProviderUtils, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getCombinedProvider, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TransformProviderUtils, getReversedProvider, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformProviderUtils)[] = {
        { Py_tp_methods, t_TransformProviderUtils__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformProviderUtils)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformProviderUtils, t_TransformProviderUtils, TransformProviderUtils);

      void t_TransformProviderUtils::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformProviderUtils), &PY_TYPE_DEF(TransformProviderUtils), module, "TransformProviderUtils", 0);
      }

      void t_TransformProviderUtils::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "class_", make_descriptor(TransformProviderUtils::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "wrapfn_", make_descriptor(t_TransformProviderUtils::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "boxfn_", make_descriptor(boxObject));
        env->getClass(TransformProviderUtils::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformProviderUtils), "IDENTITY_PROVIDER", make_descriptor(::org::orekit::frames::t_TransformProvider::wrap_Object(*TransformProviderUtils::IDENTITY_PROVIDER)));
      }

      static PyObject *t_TransformProviderUtils_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformProviderUtils::initializeClass, 1)))
          return NULL;
        return t_TransformProviderUtils::wrap_Object(TransformProviderUtils(((t_TransformProviderUtils *) arg)->object.this$));
      }
      static PyObject *t_TransformProviderUtils_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformProviderUtils::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TransformProviderUtils_getCombinedProvider(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::TransformProvider::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getCombinedProvider(a0, a1));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getCombinedProvider", args);
        return NULL;
      }

      static PyObject *t_TransformProviderUtils_getReversedProvider(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::TransformProvider a0((jobject) NULL);
        ::org::orekit::frames::TransformProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::TransformProvider::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::TransformProviderUtils::getReversedProvider(a0));
          return ::org::orekit::frames::t_TransformProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getReversedProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/utils/MinSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *MinSelector::class$ = NULL;
        jmethodID *MinSelector::mids$ = NULL;
        bool MinSelector::live$ = false;

        jclass MinSelector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/MinSelector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_fd4cbcccc697f17c] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MinSelector;");
            mids$[mid_selectFirst_41fce65646328eb2] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MinSelector MinSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MinSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_fd4cbcccc697f17c]));
        }

        jboolean MinSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_41fce65646328eb2], a0, a1);
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
        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MinSelector_getInstance(PyTypeObject *type);
        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args);
        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data);
        static PyGetSetDef t_MinSelector__fields_[] = {
          DECLARE_GET_FIELD(t_MinSelector, instance),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MinSelector__methods_[] = {
          DECLARE_METHOD(t_MinSelector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, getInstance, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_MinSelector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MinSelector)[] = {
          { Py_tp_methods, t_MinSelector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_MinSelector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MinSelector)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::utils::Selector),
          NULL
        };

        DEFINE_TYPE(MinSelector, t_MinSelector, MinSelector);

        void t_MinSelector::install(PyObject *module)
        {
          installType(&PY_TYPE(MinSelector), &PY_TYPE_DEF(MinSelector), module, "MinSelector", 0);
        }

        void t_MinSelector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "class_", make_descriptor(MinSelector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "wrapfn_", make_descriptor(t_MinSelector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MinSelector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MinSelector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MinSelector::initializeClass, 1)))
            return NULL;
          return t_MinSelector::wrap_Object(MinSelector(((t_MinSelector *) arg)->object.this$));
        }
        static PyObject *t_MinSelector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MinSelector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MinSelector_getInstance(PyTypeObject *type)
        {
          MinSelector result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::utils::MinSelector::getInstance());
          return t_MinSelector::wrap_Object(result);
        }

        static PyObject *t_MinSelector_selectFirst(t_MinSelector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(MinSelector), (PyObject *) self, "selectFirst", args, 2);
        }

        static PyObject *t_MinSelector_get__instance(t_MinSelector *self, void *data)
        {
          MinSelector value((jobject) NULL);
          OBJ_CALL(value = self->object.getInstance());
          return t_MinSelector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/DiskGenerator.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *DiskGenerator::class$ = NULL;
          jmethodID *DiskGenerator::mids$ = NULL;
          bool DiskGenerator::live$ = false;

          jclass DiskGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/DiskGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_7c06e55e72f854ed] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DiskGenerator::DiskGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall DiskGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_7c06e55e72f854ed], a0.this$));
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
          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg);

          static PyMethodDef t_DiskGenerator__methods_[] = {
            DECLARE_METHOD(t_DiskGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DiskGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DiskGenerator)[] = {
            { Py_tp_methods, t_DiskGenerator__methods_ },
            { Py_tp_init, (void *) t_DiskGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DiskGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DiskGenerator, t_DiskGenerator, DiskGenerator);

          void t_DiskGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(DiskGenerator), &PY_TYPE_DEF(DiskGenerator), module, "DiskGenerator", 0);
          }

          void t_DiskGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "class_", make_descriptor(DiskGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "wrapfn_", make_descriptor(t_DiskGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DiskGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DiskGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DiskGenerator::initializeClass, 1)))
              return NULL;
            return t_DiskGenerator::wrap_Object(DiskGenerator(((t_DiskGenerator *) arg)->object.this$));
          }
          static PyObject *t_DiskGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DiskGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DiskGenerator_init_(t_DiskGenerator *self, PyObject *args, PyObject *kwds)
          {
            DiskGenerator object((jobject) NULL);

            INT_CALL(object = DiskGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_DiskGenerator_ballOnSupport(t_DiskGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D), ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Vector2D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/refraction/AtmosphericComputationParameters.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace refraction {

        ::java::lang::Class *AtmosphericComputationParameters::class$ = NULL;
        jmethodID *AtmosphericComputationParameters::mids$ = NULL;
        bool AtmosphericComputationParameters::live$ = false;

        jclass AtmosphericComputationParameters::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/refraction/AtmosphericComputationParameters");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_configureCorrectionGrid_03c83376fa653679] = env->getMethodID(cls, "configureCorrectionGrid", "(Lorg/orekit/rugged/linesensor/LineSensor;II)V");
            mids$[mid_getDefaultInverseLocMargin_557b8123390d8d0c] = env->getMethodID(cls, "getDefaultInverseLocMargin", "()D");
            mids$[mid_getInverseLocMargin_557b8123390d8d0c] = env->getMethodID(cls, "getInverseLocMargin", "()D");
            mids$[mid_getMaxLineSensor_557b8123390d8d0c] = env->getMethodID(cls, "getMaxLineSensor", "()D");
            mids$[mid_getMinLineSensor_557b8123390d8d0c] = env->getMethodID(cls, "getMinLineSensor", "()D");
            mids$[mid_getNbLineGrid_412668abc8d889e9] = env->getMethodID(cls, "getNbLineGrid", "()I");
            mids$[mid_getNbPixelGrid_412668abc8d889e9] = env->getMethodID(cls, "getNbPixelGrid", "()I");
            mids$[mid_getSensorName_3cffd47377eca18a] = env->getMethodID(cls, "getSensorName", "()Ljava/lang/String;");
            mids$[mid_getUgrid_a53a7513ecedada2] = env->getMethodID(cls, "getUgrid", "()[D");
            mids$[mid_getVgrid_a53a7513ecedada2] = env->getMethodID(cls, "getVgrid", "()[D");
            mids$[mid_setGridSteps_a84c9a223722150c] = env->getMethodID(cls, "setGridSteps", "(II)V");
            mids$[mid_setInverseLocMargin_10f281d777284cea] = env->getMethodID(cls, "setInverseLocMargin", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AtmosphericComputationParameters::AtmosphericComputationParameters() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void AtmosphericComputationParameters::configureCorrectionGrid(const ::org::orekit::rugged::linesensor::LineSensor & a0, jint a1, jint a2) const
        {
          env->callVoidMethod(this$, mids$[mid_configureCorrectionGrid_03c83376fa653679], a0.this$, a1, a2);
        }

        jdouble AtmosphericComputationParameters::getDefaultInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultInverseLocMargin_557b8123390d8d0c]);
        }

        jdouble AtmosphericComputationParameters::getInverseLocMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInverseLocMargin_557b8123390d8d0c]);
        }

        jdouble AtmosphericComputationParameters::getMaxLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxLineSensor_557b8123390d8d0c]);
        }

        jdouble AtmosphericComputationParameters::getMinLineSensor() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinLineSensor_557b8123390d8d0c]);
        }

        jint AtmosphericComputationParameters::getNbLineGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbLineGrid_412668abc8d889e9]);
        }

        jint AtmosphericComputationParameters::getNbPixelGrid() const
        {
          return env->callIntMethod(this$, mids$[mid_getNbPixelGrid_412668abc8d889e9]);
        }

        ::java::lang::String AtmosphericComputationParameters::getSensorName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorName_3cffd47377eca18a]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getUgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getUgrid_a53a7513ecedada2]));
        }

        JArray< jdouble > AtmosphericComputationParameters::getVgrid() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getVgrid_a53a7513ecedada2]));
        }

        void AtmosphericComputationParameters::setGridSteps(jint a0, jint a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setGridSteps_a84c9a223722150c], a0, a1);
        }

        void AtmosphericComputationParameters::setInverseLocMargin(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInverseLocMargin_10f281d777284cea], a0);
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
        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self);
        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args);
        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg);
        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data);
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data);
        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data);
        static PyGetSetDef t_AtmosphericComputationParameters__fields_[] = {
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, defaultInverseLocMargin),
          DECLARE_GETSET_FIELD(t_AtmosphericComputationParameters, inverseLocMargin),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, maxLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, minLineSensor),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbLineGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, nbPixelGrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, sensorName),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, ugrid),
          DECLARE_GET_FIELD(t_AtmosphericComputationParameters, vgrid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AtmosphericComputationParameters__methods_[] = {
          DECLARE_METHOD(t_AtmosphericComputationParameters, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, configureCorrectionGrid, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getDefaultInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getInverseLocMargin, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMaxLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getMinLineSensor, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbLineGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getNbPixelGrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getSensorName, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getUgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, getVgrid, METH_NOARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setGridSteps, METH_VARARGS),
          DECLARE_METHOD(t_AtmosphericComputationParameters, setInverseLocMargin, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AtmosphericComputationParameters)[] = {
          { Py_tp_methods, t_AtmosphericComputationParameters__methods_ },
          { Py_tp_init, (void *) t_AtmosphericComputationParameters_init_ },
          { Py_tp_getset, t_AtmosphericComputationParameters__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AtmosphericComputationParameters)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AtmosphericComputationParameters, t_AtmosphericComputationParameters, AtmosphericComputationParameters);

        void t_AtmosphericComputationParameters::install(PyObject *module)
        {
          installType(&PY_TYPE(AtmosphericComputationParameters), &PY_TYPE_DEF(AtmosphericComputationParameters), module, "AtmosphericComputationParameters", 0);
        }

        void t_AtmosphericComputationParameters::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "class_", make_descriptor(AtmosphericComputationParameters::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "wrapfn_", make_descriptor(t_AtmosphericComputationParameters::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AtmosphericComputationParameters), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AtmosphericComputationParameters_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AtmosphericComputationParameters::initializeClass, 1)))
            return NULL;
          return t_AtmosphericComputationParameters::wrap_Object(AtmosphericComputationParameters(((t_AtmosphericComputationParameters *) arg)->object.this$));
        }
        static PyObject *t_AtmosphericComputationParameters_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AtmosphericComputationParameters::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AtmosphericComputationParameters_init_(t_AtmosphericComputationParameters *self, PyObject *args, PyObject *kwds)
        {
          AtmosphericComputationParameters object((jobject) NULL);

          INT_CALL(object = AtmosphericComputationParameters());
          self->object = object;

          return 0;
        }

        static PyObject *t_AtmosphericComputationParameters_configureCorrectionGrid(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "kII", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.configureCorrectionGrid(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "configureCorrectionGrid", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_getDefaultInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getInverseLocMargin(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMaxLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getMinLineSensor(t_AtmosphericComputationParameters *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbLineGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbLineGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getNbPixelGrid(t_AtmosphericComputationParameters *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AtmosphericComputationParameters_getSensorName(t_AtmosphericComputationParameters *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSensorName());
          return j2p(result);
        }

        static PyObject *t_AtmosphericComputationParameters_getUgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getUgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_getVgrid(t_AtmosphericComputationParameters *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getVgrid());
          return result.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_setGridSteps(t_AtmosphericComputationParameters *self, PyObject *args)
        {
          jint a0;
          jint a1;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(self->object.setGridSteps(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGridSteps", args);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_setInverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setInverseLocMargin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInverseLocMargin", arg);
          return NULL;
        }

        static PyObject *t_AtmosphericComputationParameters_get__defaultInverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__inverseLocMargin(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInverseLocMargin());
          return PyFloat_FromDouble((double) value);
        }
        static int t_AtmosphericComputationParameters_set__inverseLocMargin(t_AtmosphericComputationParameters *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setInverseLocMargin(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "inverseLocMargin", arg);
          return -1;
        }

        static PyObject *t_AtmosphericComputationParameters_get__maxLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__minLineSensor(t_AtmosphericComputationParameters *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinLineSensor());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbLineGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbLineGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__nbPixelGrid(t_AtmosphericComputationParameters *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNbPixelGrid());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__sensorName(t_AtmosphericComputationParameters *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSensorName());
          return j2p(value);
        }

        static PyObject *t_AtmosphericComputationParameters_get__ugrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getUgrid());
          return value.wrap();
        }

        static PyObject *t_AtmosphericComputationParameters_get__vgrid(t_AtmosphericComputationParameters *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getVgrid());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitIOException.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitIOException::class$ = NULL;
      jmethodID *OrekitIOException::mids$ = NULL;
      bool OrekitIOException::live$ = false;

      jclass OrekitIOException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitIOException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitIOException::OrekitIOException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::io::IOException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitIOException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIOException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitIOException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitIOException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitIOException::getSpecifier() const
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
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args);
      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self);
      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data);
      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data);
      static PyGetSetDef t_OrekitIOException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitIOException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitIOException, message),
        DECLARE_GET_FIELD(t_OrekitIOException, parts),
        DECLARE_GET_FIELD(t_OrekitIOException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitIOException__methods_[] = {
        DECLARE_METHOD(t_OrekitIOException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitIOException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitIOException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitIOException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitIOException)[] = {
        { Py_tp_methods, t_OrekitIOException__methods_ },
        { Py_tp_init, (void *) t_OrekitIOException_init_ },
        { Py_tp_getset, t_OrekitIOException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitIOException)[] = {
        &PY_TYPE_DEF(::java::io::IOException),
        NULL
      };

      DEFINE_TYPE(OrekitIOException, t_OrekitIOException, OrekitIOException);

      void t_OrekitIOException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitIOException), &PY_TYPE_DEF(OrekitIOException), module, "OrekitIOException", 0);
      }

      void t_OrekitIOException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "class_", make_descriptor(OrekitIOException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "wrapfn_", make_descriptor(t_OrekitIOException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitIOException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitIOException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitIOException::initializeClass, 1)))
          return NULL;
        return t_OrekitIOException::wrap_Object(OrekitIOException(((t_OrekitIOException *) arg)->object.this$));
      }
      static PyObject *t_OrekitIOException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitIOException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitIOException_init_(t_OrekitIOException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitIOException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitIOException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitIOException_getLocalizedMessage(t_OrekitIOException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getMessage(t_OrekitIOException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitIOException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitIOException_getParts(t_OrekitIOException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_getSpecifier(t_OrekitIOException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitIOException_get__localizedMessage(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__message(t_OrekitIOException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitIOException_get__parts(t_OrekitIOException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitIOException_get__specifier(t_OrekitIOException *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame1.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame1::class$ = NULL;
          jmethodID *SubFrame1::mids$ = NULL;
          bool SubFrame1::live$ = false;

          jclass SubFrame1::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame1");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_557b8123390d8d0c] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_557b8123390d8d0c] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getAF2_557b8123390d8d0c] = env->getMethodID(cls, "getAF2", "()D");
              mids$[mid_getCaOrPFlag_412668abc8d889e9] = env->getMethodID(cls, "getCaOrPFlag", "()I");
              mids$[mid_getIODC_412668abc8d889e9] = env->getMethodID(cls, "getIODC", "()I");
              mids$[mid_getL2PDataFlag_412668abc8d889e9] = env->getMethodID(cls, "getL2PDataFlag", "()I");
              mids$[mid_getReserved04_412668abc8d889e9] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_412668abc8d889e9] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_412668abc8d889e9] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_412668abc8d889e9] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getSvHealth_412668abc8d889e9] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getTGD_412668abc8d889e9] = env->getMethodID(cls, "getTGD", "()I");
              mids$[mid_getTOC_412668abc8d889e9] = env->getMethodID(cls, "getTOC", "()I");
              mids$[mid_getUraIndex_412668abc8d889e9] = env->getMethodID(cls, "getUraIndex", "()I");
              mids$[mid_getWeekNumber_412668abc8d889e9] = env->getMethodID(cls, "getWeekNumber", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame1::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_557b8123390d8d0c]);
          }

          jdouble SubFrame1::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_557b8123390d8d0c]);
          }

          jdouble SubFrame1::getAF2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF2_557b8123390d8d0c]);
          }

          jint SubFrame1::getCaOrPFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getCaOrPFlag_412668abc8d889e9]);
          }

          jint SubFrame1::getIODC() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODC_412668abc8d889e9]);
          }

          jint SubFrame1::getL2PDataFlag() const
          {
            return env->callIntMethod(this$, mids$[mid_getL2PDataFlag_412668abc8d889e9]);
          }

          jint SubFrame1::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_412668abc8d889e9]);
          }

          jint SubFrame1::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_412668abc8d889e9]);
          }

          jint SubFrame1::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_412668abc8d889e9]);
          }

          jint SubFrame1::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_412668abc8d889e9]);
          }

          jint SubFrame1::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_412668abc8d889e9]);
          }

          jint SubFrame1::getTGD() const
          {
            return env->callIntMethod(this$, mids$[mid_getTGD_412668abc8d889e9]);
          }

          jint SubFrame1::getTOC() const
          {
            return env->callIntMethod(this$, mids$[mid_getTOC_412668abc8d889e9]);
          }

          jint SubFrame1::getUraIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getUraIndex_412668abc8d889e9]);
          }

          jint SubFrame1::getWeekNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getWeekNumber_412668abc8d889e9]);
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
          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self);
          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data);
          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data);
          static PyGetSetDef t_SubFrame1__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame1, aF0),
            DECLARE_GET_FIELD(t_SubFrame1, aF1),
            DECLARE_GET_FIELD(t_SubFrame1, aF2),
            DECLARE_GET_FIELD(t_SubFrame1, caOrPFlag),
            DECLARE_GET_FIELD(t_SubFrame1, iODC),
            DECLARE_GET_FIELD(t_SubFrame1, l2PDataFlag),
            DECLARE_GET_FIELD(t_SubFrame1, reserved04),
            DECLARE_GET_FIELD(t_SubFrame1, reserved05),
            DECLARE_GET_FIELD(t_SubFrame1, reserved06),
            DECLARE_GET_FIELD(t_SubFrame1, reserved07),
            DECLARE_GET_FIELD(t_SubFrame1, svHealth),
            DECLARE_GET_FIELD(t_SubFrame1, tGD),
            DECLARE_GET_FIELD(t_SubFrame1, tOC),
            DECLARE_GET_FIELD(t_SubFrame1, uraIndex),
            DECLARE_GET_FIELD(t_SubFrame1, weekNumber),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame1__methods_[] = {
            DECLARE_METHOD(t_SubFrame1, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame1, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getAF2, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getCaOrPFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getIODC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getL2PDataFlag, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTGD, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getTOC, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getUraIndex, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame1, getWeekNumber, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame1)[] = {
            { Py_tp_methods, t_SubFrame1__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame1__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame1)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame1, t_SubFrame1, SubFrame1);

          void t_SubFrame1::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame1), &PY_TYPE_DEF(SubFrame1), module, "SubFrame1", 0);
          }

          void t_SubFrame1::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "class_", make_descriptor(SubFrame1::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "wrapfn_", make_descriptor(t_SubFrame1::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame1), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame1_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame1::initializeClass, 1)))
              return NULL;
            return t_SubFrame1::wrap_Object(SubFrame1(((t_SubFrame1 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame1_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame1::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame1_getAF0(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF1(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getAF2(t_SubFrame1 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame1_getCaOrPFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getIODC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getL2PDataFlag(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved04(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved05(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved06(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getReserved07(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getSvHealth(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTGD(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTGD());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getTOC(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTOC());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getUraIndex(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getUraIndex());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_getWeekNumber(t_SubFrame1 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getWeekNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame1_get__aF0(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF1(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__aF2(t_SubFrame1 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF2());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame1_get__caOrPFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getCaOrPFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__iODC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__l2PDataFlag(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getL2PDataFlag());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved04(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved05(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved06(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__reserved07(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__svHealth(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tGD(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTGD());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__tOC(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTOC());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__uraIndex(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getUraIndex());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame1_get__weekNumber(t_SubFrame1 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getWeekNumber());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldStateCovariance::class$ = NULL;
      jmethodID *FieldStateCovariance::mids$ = NULL;
      bool FieldStateCovariance::live$ = false;

      jclass FieldStateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldStateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_e793e31fd7661d04] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_5d99d74ed1c760dc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_27b207a35c9e1194] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceFrame_b0e3ac315d7b5d79] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceType_bbfc7ef621f6c573] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_13b82f8eb71f0f31] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_1d6b27621d7bea96] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_shiftedBy_af70d7fbde9f1d5c] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_toStateCovariance_8e9af39b29713242] = env->getMethodID(cls, "toStateCovariance", "()Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e793e31fd7661d04, a0.this$, a1.this$, a2.this$)) {}

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d99d74ed1c760dc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_27b207a35c9e1194], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_b0e3ac315d7b5d79], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceType(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_bbfc7ef621f6c573], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldStateCovariance::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::orekit::frames::Frame FieldStateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
      }

      ::org::orekit::frames::LOF FieldStateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_13b82f8eb71f0f31]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldStateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_1d6b27621d7bea96]));
      }

      ::org::orekit::orbits::OrbitType FieldStateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
      }

      ::org::orekit::orbits::PositionAngleType FieldStateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
      }

      FieldStateCovariance FieldStateCovariance::shiftedBy(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_af70d7fbde9f1d5c], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::propagation::StateCovariance FieldStateCovariance::toStateCovariance() const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_toStateCovariance_8e9af39b29713242]));
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
      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args);
      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data);
      static PyGetSetDef t_FieldStateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStateCovariance, date),
        DECLARE_GET_FIELD(t_FieldStateCovariance, frame),
        DECLARE_GET_FIELD(t_FieldStateCovariance, lOF),
        DECLARE_GET_FIELD(t_FieldStateCovariance, matrix),
        DECLARE_GET_FIELD(t_FieldStateCovariance, orbitType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, positionAngleType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStateCovariance__methods_[] = {
        DECLARE_METHOD(t_FieldStateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, toStateCovariance, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStateCovariance)[] = {
        { Py_tp_methods, t_FieldStateCovariance__methods_ },
        { Py_tp_init, (void *) t_FieldStateCovariance_init_ },
        { Py_tp_getset, t_FieldStateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldStateCovariance, t_FieldStateCovariance, FieldStateCovariance);
      PyObject *t_FieldStateCovariance::wrap_Object(const FieldStateCovariance& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStateCovariance::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStateCovariance), &PY_TYPE_DEF(FieldStateCovariance), module, "FieldStateCovariance", 0);
      }

      void t_FieldStateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "class_", make_descriptor(FieldStateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "wrapfn_", make_descriptor(t_FieldStateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStateCovariance::initializeClass, 1)))
          return NULL;
        return t_FieldStateCovariance::wrap_Object(FieldStateCovariance(((t_FieldStateCovariance *) arg)->object.this$));
      }
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOF a2((jobject) NULL);
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKkKK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOF a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self)
      {
        ::org::orekit::propagation::StateCovariance result((jobject) NULL);
        OBJ_CALL(result = self->object.toStateCovariance());
        return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
      }
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/FieldAngularCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitude::class$ = NULL;
      jmethodID *FieldAttitude::mids$ = NULL;
      bool FieldAttitude::live$ = false;

      jclass FieldAttitude::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitude");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d19b0669806052fb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)V");
          mids$[mid_init$_5dfce6dcb2f2f4fa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/attitudes/Attitude;)V");
          mids$[mid_init$_ff527da09f82b6d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldAngularCoordinates;)V");
          mids$[mid_init$_8dfe6ba809ac1d2d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_0de1d014cc09f042] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/Field;)V");
          mids$[mid_getDate_f1fe4daf77c66560] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getOrientation_6ee4b6b8d0c547ac] = env->getMethodID(cls, "getOrientation", "()Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
          mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getRotation_73da4eeccf2b7e14] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getRotationAcceleration_2d64addf4c3391d9] = env->getMethodID(cls, "getRotationAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getSpin_2d64addf4c3391d9] = env->getMethodID(cls, "getSpin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_shiftedBy_7f36c3f6f9d790d4] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_shiftedBy_2ba1b5f5b87774e7] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_toAttitude_ed1eef73b5133690] = env->getMethodID(cls, "toAttitude", "()Lorg/orekit/attitudes/Attitude;");
          mids$[mid_withReferenceFrame_708b51366c08d226] = env->getMethodID(cls, "withReferenceFrame", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitude::FieldAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d19b0669806052fb, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::hipparchus::Field & a0, const ::org::orekit::attitudes::Attitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5dfce6dcb2f2f4fa, a0.this$, a1.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::FieldAngularCoordinates & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff527da09f82b6d2, a0.this$, a1.this$, a2.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dfe6ba809ac1d2d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldAttitude::FieldAttitude(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0de1d014cc09f042, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::time::FieldAbsoluteDate FieldAttitude::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_f1fe4daf77c66560]));
      }

      ::org::orekit::utils::TimeStampedFieldAngularCoordinates FieldAttitude::getOrientation() const
      {
        return ::org::orekit::utils::TimeStampedFieldAngularCoordinates(env->callObjectMethod(this$, mids$[mid_getOrientation_6ee4b6b8d0c547ac]));
      }

      ::org::orekit::frames::Frame FieldAttitude::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldAttitude::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_73da4eeccf2b7e14]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getRotationAcceleration() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getRotationAcceleration_2d64addf4c3391d9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldAttitude::getSpin() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getSpin_2d64addf4c3391d9]));
      }

      FieldAttitude FieldAttitude::shiftedBy(jdouble a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_7f36c3f6f9d790d4], a0));
      }

      FieldAttitude FieldAttitude::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_shiftedBy_2ba1b5f5b87774e7], a0.this$));
      }

      ::org::orekit::attitudes::Attitude FieldAttitude::toAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_toAttitude_ed1eef73b5133690]));
      }

      FieldAttitude FieldAttitude::withReferenceFrame(const ::org::orekit::frames::Frame & a0) const
      {
        return FieldAttitude(env->callObjectMethod(this$, mids$[mid_withReferenceFrame_708b51366c08d226], a0.this$));
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
      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args);
      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args);
      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self);
      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg);
      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data);
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data);
      static PyGetSetDef t_FieldAttitude__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitude, date),
        DECLARE_GET_FIELD(t_FieldAttitude, orientation),
        DECLARE_GET_FIELD(t_FieldAttitude, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitude, rotation),
        DECLARE_GET_FIELD(t_FieldAttitude, rotationAcceleration),
        DECLARE_GET_FIELD(t_FieldAttitude, spin),
        DECLARE_GET_FIELD(t_FieldAttitude, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitude__methods_[] = {
        DECLARE_METHOD(t_FieldAttitude, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitude, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getOrientation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getReferenceFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getRotationAcceleration, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, getSpin, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitude, toAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitude, withReferenceFrame, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitude)[] = {
        { Py_tp_methods, t_FieldAttitude__methods_ },
        { Py_tp_init, (void *) t_FieldAttitude_init_ },
        { Py_tp_getset, t_FieldAttitude__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitude)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldAttitude, t_FieldAttitude, FieldAttitude);
      PyObject *t_FieldAttitude::wrap_Object(const FieldAttitude& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitude::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitude::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitude *self = (t_FieldAttitude *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitude::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitude), &PY_TYPE_DEF(FieldAttitude), module, "FieldAttitude", 0);
      }

      void t_FieldAttitude::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "class_", make_descriptor(FieldAttitude::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "wrapfn_", make_descriptor(t_FieldAttitude::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitude), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitude_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitude::initializeClass, 1)))
          return NULL;
        return t_FieldAttitude::wrap_Object(FieldAttitude(((t_FieldAttitude *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitude_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitude::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitude_of_(t_FieldAttitude *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitude_init_(t_FieldAttitude *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldAngularCoordinates a1((jobject) NULL);
            PyTypeObject **p1;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::Attitude a1((jobject) NULL);
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldAttitude(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::FieldAngularCoordinates a2((jobject) NULL);
            PyTypeObject **p2;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldAngularCoordinates::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_FieldAngularCoordinates::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a4((jobject) NULL);
            PyTypeObject **p4;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkKKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a3, &p3, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a4, &p4, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
            ::org::hipparchus::Field a5((jobject) NULL);
            PyTypeObject **p5;
            FieldAttitude object((jobject) NULL);

            if (!parseArgs(args, "KkkkkK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &a2, &a3, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = FieldAttitude(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_FieldAttitude_getDate(t_FieldAttitude *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getOrientation(t_FieldAttitude *self)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getReferenceFrame(t_FieldAttitude *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_getRotation(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getRotationAcceleration(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_getSpin(t_FieldAttitude *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldAttitude_shiftedBy(t_FieldAttitude *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldAttitude_toAttitude(t_FieldAttitude *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.toAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_FieldAttitude_withReferenceFrame(t_FieldAttitude *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        FieldAttitude result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withReferenceFrame(a0));
          return t_FieldAttitude::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "withReferenceFrame", arg);
        return NULL;
      }
      static PyObject *t_FieldAttitude_get__parameters_(t_FieldAttitude *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitude_get__date(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__orientation(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldAngularCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrientation());
        return ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__referenceFrame(t_FieldAttitude *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotation(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__rotationAcceleration(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotationAcceleration());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }

      static PyObject *t_FieldAttitude_get__spin(t_FieldAttitude *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpin());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonGroundReceiverMeasurement::class$ = NULL;
        jmethodID *PythonGroundReceiverMeasurement::mids$ = NULL;
        bool PythonGroundReceiverMeasurement::live$ = false;

        jclass PythonGroundReceiverMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonGroundReceiverMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0c97652d522ed1b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGroundReceiverMeasurement::PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0c97652d522ed1b8, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        void PythonGroundReceiverMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonGroundReceiverMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonGroundReceiverMeasurement::pythonExtension(jlong a0) const
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
      namespace measurements {
        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self);
        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args);
        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2);
        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data);
        static PyGetSetDef t_PythonGroundReceiverMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, self),
          DECLARE_GET_FIELD(t_PythonGroundReceiverMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGroundReceiverMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGroundReceiverMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGroundReceiverMeasurement)[] = {
          { Py_tp_methods, t_PythonGroundReceiverMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonGroundReceiverMeasurement_init_ },
          { Py_tp_getset, t_PythonGroundReceiverMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGroundReceiverMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(PythonGroundReceiverMeasurement, t_PythonGroundReceiverMeasurement, PythonGroundReceiverMeasurement);
        PyObject *t_PythonGroundReceiverMeasurement::wrap_Object(const PythonGroundReceiverMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_PythonGroundReceiverMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_PythonGroundReceiverMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_PythonGroundReceiverMeasurement *self = (t_PythonGroundReceiverMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_PythonGroundReceiverMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGroundReceiverMeasurement), &PY_TYPE_DEF(PythonGroundReceiverMeasurement), module, "PythonGroundReceiverMeasurement", 1);
        }

        void t_PythonGroundReceiverMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "class_", make_descriptor(PythonGroundReceiverMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "wrapfn_", make_descriptor(t_PythonGroundReceiverMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGroundReceiverMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGroundReceiverMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonGroundReceiverMeasurement_pythonDecRef0 },
            { "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluation1 },
            { "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;", (void *) t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonGroundReceiverMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonGroundReceiverMeasurement::wrap_Object(PythonGroundReceiverMeasurement(((t_PythonGroundReceiverMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonGroundReceiverMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGroundReceiverMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_of_(t_PythonGroundReceiverMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_PythonGroundReceiverMeasurement_init_(t_PythonGroundReceiverMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          jboolean a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          PythonGroundReceiverMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kZkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = PythonGroundReceiverMeasurement(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_PythonGroundReceiverMeasurement_finalize(t_PythonGroundReceiverMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGroundReceiverMeasurement_pythonExtension(t_PythonGroundReceiverMeasurement *self, PyObject *args)
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

        static void JNICALL t_PythonGroundReceiverMeasurement_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluation", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluation", result);
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

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluationWithoutDerivatives2(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase value((jobject) NULL);
          PyObject *o2 = JArray<jobject>(a2).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "theoreticalEvaluationWithoutDerivatives", "iiO", (int) a0, (int) a1, o2);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &value))
          {
            throwTypeError("theoreticalEvaluationWithoutDerivatives", result);
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

        static PyObject *t_PythonGroundReceiverMeasurement_get__self(t_PythonGroundReceiverMeasurement *self, void *data)
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
        static PyObject *t_PythonGroundReceiverMeasurement_get__parameters_(t_PythonGroundReceiverMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
