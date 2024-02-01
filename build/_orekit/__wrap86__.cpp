#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *CovarianceMatrixProvider::class$ = NULL;
        jmethodID *CovarianceMatrixProvider::mids$ = NULL;
        bool CovarianceMatrixProvider::live$ = false;

        jclass CovarianceMatrixProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/CovarianceMatrixProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInitialCovarianceMatrix_011bf64ebaa4e018] = env->getMethodID(cls, "getInitialCovarianceMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getProcessNoiseMatrix_70abd86226561523] = env->getMethodID(cls, "getProcessNoiseMatrix", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getInitialCovarianceMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInitialCovarianceMatrix_011bf64ebaa4e018], a0.this$));
        }

        ::org::hipparchus::linear::RealMatrix CovarianceMatrixProvider::getProcessNoiseMatrix(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getProcessNoiseMatrix_70abd86226561523], a0.this$, a1.this$));
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
        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg);
        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args);

        static PyMethodDef t_CovarianceMatrixProvider__methods_[] = {
          DECLARE_METHOD(t_CovarianceMatrixProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getInitialCovarianceMatrix, METH_O),
          DECLARE_METHOD(t_CovarianceMatrixProvider, getProcessNoiseMatrix, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CovarianceMatrixProvider)[] = {
          { Py_tp_methods, t_CovarianceMatrixProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CovarianceMatrixProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CovarianceMatrixProvider, t_CovarianceMatrixProvider, CovarianceMatrixProvider);

        void t_CovarianceMatrixProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(CovarianceMatrixProvider), &PY_TYPE_DEF(CovarianceMatrixProvider), module, "CovarianceMatrixProvider", 0);
        }

        void t_CovarianceMatrixProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "class_", make_descriptor(CovarianceMatrixProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "wrapfn_", make_descriptor(t_CovarianceMatrixProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CovarianceMatrixProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CovarianceMatrixProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CovarianceMatrixProvider::initializeClass, 1)))
            return NULL;
          return t_CovarianceMatrixProvider::wrap_Object(CovarianceMatrixProvider(((t_CovarianceMatrixProvider *) arg)->object.this$));
        }
        static PyObject *t_CovarianceMatrixProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CovarianceMatrixProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_CovarianceMatrixProvider_getInitialCovarianceMatrix(t_CovarianceMatrixProvider *self, PyObject *arg)
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

        static PyObject *t_CovarianceMatrixProvider_getProcessNoiseMatrix(t_CovarianceMatrixProvider *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getProcessNoiseMatrix(a0, a1));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getProcessNoiseMatrix", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$Receiver::class$ = NULL;
          jmethodID *RinexClock$Receiver::mids$ = NULL;
          bool RinexClock$Receiver::live$ = false;

          jclass RinexClock$Receiver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$Receiver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3889116904fa611b] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DDD)V");
              mids$[mid_getDesignator_d2c8eb4129821f0e] = env->getMethodID(cls, "getDesignator", "()Ljava/lang/String;");
              mids$[mid_getReceiverIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getReceiverIdentifier", "()Ljava/lang/String;");
              mids$[mid_getX_9981f74b2d109da6] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_9981f74b2d109da6] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_9981f74b2d109da6] = env->getMethodID(cls, "getZ", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$Receiver::RinexClock$Receiver(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3889116904fa611b, a0.this$, a1.this$, a2, a3, a4)) {}

          ::java::lang::String RinexClock$Receiver::getDesignator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDesignator_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock$Receiver::getReceiverIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverIdentifier_d2c8eb4129821f0e]));
          }

          jdouble RinexClock$Receiver::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_9981f74b2d109da6]);
          }

          jdouble RinexClock$Receiver::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_9981f74b2d109da6]);
          }

          jdouble RinexClock$Receiver::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_9981f74b2d109da6]);
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
        namespace clock {
          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data);
          static PyGetSetDef t_RinexClock$Receiver__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$Receiver, designator),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, receiverIdentifier),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, x),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, y),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, z),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$Receiver__methods_[] = {
            DECLARE_METHOD(t_RinexClock$Receiver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, getDesignator, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getReceiverIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getX, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getY, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getZ, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$Receiver)[] = {
            { Py_tp_methods, t_RinexClock$Receiver__methods_ },
            { Py_tp_init, (void *) t_RinexClock$Receiver_init_ },
            { Py_tp_getset, t_RinexClock$Receiver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$Receiver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$Receiver, t_RinexClock$Receiver, RinexClock$Receiver);

          void t_RinexClock$Receiver::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$Receiver), &PY_TYPE_DEF(RinexClock$Receiver), module, "RinexClock$Receiver", 0);
          }

          void t_RinexClock$Receiver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "class_", make_descriptor(RinexClock$Receiver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "wrapfn_", make_descriptor(t_RinexClock$Receiver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$Receiver::initializeClass, 1)))
              return NULL;
            return t_RinexClock$Receiver::wrap_Object(RinexClock$Receiver(((t_RinexClock$Receiver *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$Receiver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            RinexClock$Receiver object((jobject) NULL);

            if (!parseArgs(args, "ssDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$Receiver(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDesignator());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDesignator());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverIdentifier());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *FieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *FieldManeuverTriggersResetter::mids$ = NULL;
          bool FieldManeuverTriggersResetter::live$ = false;

          jclass FieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_maneuverTriggered_e90aea08a7a0ab5e] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_resetState_59bc90ab93a43079] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FieldManeuverTriggersResetter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
          }

          void FieldManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_e90aea08a7a0ab5e], a0.this$, a1);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldManeuverTriggersResetter::resetState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_59bc90ab93a43079], a0.this$));
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
          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_FieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_FieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_FieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldManeuverTriggersResetter, t_FieldManeuverTriggersResetter, FieldManeuverTriggersResetter);
          PyObject *t_FieldManeuverTriggersResetter::wrap_Object(const FieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldManeuverTriggersResetter), &PY_TYPE_DEF(FieldManeuverTriggersResetter), module, "FieldManeuverTriggersResetter", 0);
          }

          void t_FieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "class_", make_descriptor(FieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_FieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_FieldManeuverTriggersResetter::wrap_Object(FieldManeuverTriggersResetter(((t_FieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args)
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

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;

            if (!parseArgs(args, "KZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data)
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
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/ParameterDrivenDateIntervalDetector.h"
#include "org/orekit/utils/DateDriver.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ParameterDrivenDateIntervalDetector::class$ = NULL;
        jmethodID *ParameterDrivenDateIntervalDetector::mids$ = NULL;
        bool ParameterDrivenDateIntervalDetector::live$ = false;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::DURATION_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::START_SUFFIX = NULL;
        ::java::lang::String *ParameterDrivenDateIntervalDetector::STOP_SUFFIX = NULL;

        jclass ParameterDrivenDateIntervalDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ParameterDrivenDateIntervalDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_59bf5a7aa18cf98f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_init$_738a36cb63fab284] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDurationDriver_7daccb22665e511b] = env->getMethodID(cls, "getDurationDriver", "()Lorg/orekit/utils/ParameterDriver;");
            mids$[mid_getMedianDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getMedianDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStartDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getStartDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_getStopDriver_b88c1aa4fa123324] = env->getMethodID(cls, "getStopDriver", "()Lorg/orekit/utils/DateDriver;");
            mids$[mid_create_b770eb996834b639] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ParameterDrivenDateIntervalDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DURATION_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DURATION_SUFFIX", "Ljava/lang/String;"));
            MEDIAN_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "MEDIAN_SUFFIX", "Ljava/lang/String;"));
            START_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "START_SUFFIX", "Ljava/lang/String;"));
            STOP_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "STOP_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_59bf5a7aa18cf98f, a0.this$, a1.this$, a2.this$)) {}

        ParameterDrivenDateIntervalDetector::ParameterDrivenDateIntervalDetector(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_738a36cb63fab284, a0.this$, a1.this$, a2)) {}

        jdouble ParameterDrivenDateIntervalDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::utils::ParameterDriver ParameterDrivenDateIntervalDetector::getDurationDriver() const
        {
          return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getDurationDriver_7daccb22665e511b]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getMedianDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getMedianDriver_b88c1aa4fa123324]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStartDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStartDriver_b88c1aa4fa123324]));
        }

        ::org::orekit::utils::DateDriver ParameterDrivenDateIntervalDetector::getStopDriver() const
        {
          return ::org::orekit::utils::DateDriver(env->callObjectMethod(this$, mids$[mid_getStopDriver_b88c1aa4fa123324]));
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
        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data);
        static PyGetSetDef t_ParameterDrivenDateIntervalDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, durationDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, medianDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, startDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, stopDriver),
          DECLARE_GET_FIELD(t_ParameterDrivenDateIntervalDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ParameterDrivenDateIntervalDetector__methods_[] = {
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getDurationDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getMedianDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStartDriver, METH_NOARGS),
          DECLARE_METHOD(t_ParameterDrivenDateIntervalDetector, getStopDriver, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ParameterDrivenDateIntervalDetector)[] = {
          { Py_tp_methods, t_ParameterDrivenDateIntervalDetector__methods_ },
          { Py_tp_init, (void *) t_ParameterDrivenDateIntervalDetector_init_ },
          { Py_tp_getset, t_ParameterDrivenDateIntervalDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ParameterDrivenDateIntervalDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ParameterDrivenDateIntervalDetector, t_ParameterDrivenDateIntervalDetector, ParameterDrivenDateIntervalDetector);
        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_Object(const ParameterDrivenDateIntervalDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ParameterDrivenDateIntervalDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ParameterDrivenDateIntervalDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ParameterDrivenDateIntervalDetector *self = (t_ParameterDrivenDateIntervalDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ParameterDrivenDateIntervalDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ParameterDrivenDateIntervalDetector), &PY_TYPE_DEF(ParameterDrivenDateIntervalDetector), module, "ParameterDrivenDateIntervalDetector", 0);
        }

        void t_ParameterDrivenDateIntervalDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "class_", make_descriptor(ParameterDrivenDateIntervalDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "wrapfn_", make_descriptor(t_ParameterDrivenDateIntervalDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(ParameterDrivenDateIntervalDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "DURATION_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::DURATION_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "MEDIAN_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::MEDIAN_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "START_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::START_SUFFIX)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDrivenDateIntervalDetector), "STOP_SUFFIX", make_descriptor(j2p(*ParameterDrivenDateIntervalDetector::STOP_SUFFIX)));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 1)))
            return NULL;
          return t_ParameterDrivenDateIntervalDetector::wrap_Object(ParameterDrivenDateIntervalDetector(((t_ParameterDrivenDateIntervalDetector *) arg)->object.this$));
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ParameterDrivenDateIntervalDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_of_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ParameterDrivenDateIntervalDetector_init_(t_ParameterDrivenDateIntervalDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              ParameterDrivenDateIntervalDetector object((jobject) NULL);

              if (!parseArgs(args, "skD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ParameterDrivenDateIntervalDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ParameterDrivenDateIntervalDetector);
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_g(t_ParameterDrivenDateIntervalDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ParameterDrivenDateIntervalDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getDurationDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::ParameterDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getMedianDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStartDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_getStopDriver(t_ParameterDrivenDateIntervalDetector *self)
        {
          ::org::orekit::utils::DateDriver result((jobject) NULL);
          OBJ_CALL(result = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(result);
        }
        static PyObject *t_ParameterDrivenDateIntervalDetector_get__parameters_(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__durationDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::ParameterDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getDurationDriver());
          return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__medianDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getMedianDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__startDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStartDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }

        static PyObject *t_ParameterDrivenDateIntervalDetector_get__stopDriver(t_ParameterDrivenDateIntervalDetector *self, void *data)
        {
          ::org::orekit::utils::DateDriver value((jobject) NULL);
          OBJ_CALL(value = self->object.getStopDriver());
          return ::org::orekit::utils::t_DateDriver::wrap_Object(value);
        }
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
              mids$[mid_getAcross_032312bdeb3f2f93] = env->getMethodID(cls, "getAcross", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcrossIndex_d6ab429752e7c267] = env->getMethodID(cls, "getAcrossIndex", "()I");
              mids$[mid_getAlong_032312bdeb3f2f93] = env->getMethodID(cls, "getAlong", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAlongIndex_d6ab429752e7c267] = env->getMethodID(cls, "getAlongIndex", "()I");
              mids$[mid_getS2P_e080ae8a5cf76560] = env->getMethodID(cls, "getS2P", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_getV_032312bdeb3f2f93] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isEnabled_eee3de00fe971136] = env->getMethodID(cls, "isEnabled", "()Z");
              mids$[mid_isInside_eee3de00fe971136] = env->getMethodID(cls, "isInside", "()Z");
              mids$[mid_move_4ce2ddaa3713e153] = env->getMethodID(cls, "move", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_setEnabled_ff7cb6c242604316] = env->getMethodID(cls, "setEnabled", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAcross() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcross_032312bdeb3f2f93]));
          }

          jint Mesh$Node::getAcrossIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAcrossIndex_d6ab429752e7c267]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getAlong() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAlong_032312bdeb3f2f93]));
          }

          jint Mesh$Node::getAlongIndex() const
          {
            return env->callIntMethod(this$, mids$[mid_getAlongIndex_d6ab429752e7c267]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::getS2P() const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_getS2P_e080ae8a5cf76560]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Mesh$Node::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_032312bdeb3f2f93]));
          }

          jboolean Mesh$Node::isEnabled() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEnabled_eee3de00fe971136]);
          }

          jboolean Mesh$Node::isInside() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInside_eee3de00fe971136]);
          }

          ::org::hipparchus::geometry::spherical::twod::S2Point Mesh$Node::move(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::geometry::spherical::twod::S2Point(env->callObjectMethod(this$, mids$[mid_move_4ce2ddaa3713e153], a0.this$));
          }

          void Mesh$Node::setEnabled() const
          {
            env->callVoidMethod(this$, mids$[mid_setEnabled_ff7cb6c242604316]);
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
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonEncodedMessage::class$ = NULL;
          jmethodID *PythonEncodedMessage::mids$ = NULL;
          bool PythonEncodedMessage::live$ = false;

          jclass PythonEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_3453f750066710ab] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEncodedMessage::PythonEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self);
          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args);
          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0);
          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEncodedMessage)[] = {
            { Py_tp_methods, t_PythonEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonEncodedMessage_init_ },
            { Py_tp_getset, t_PythonEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEncodedMessage, t_PythonEncodedMessage, PythonEncodedMessage);

          void t_PythonEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEncodedMessage), &PY_TYPE_DEF(PythonEncodedMessage), module, "PythonEncodedMessage", 1);
          }

          void t_PythonEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "class_", make_descriptor(PythonEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "wrapfn_", make_descriptor(t_PythonEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "extractBits", "(I)J", (void *) t_PythonEncodedMessage_extractBits0 },
              { "pythonDecRef", "()V", (void *) t_PythonEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonEncodedMessage::wrap_Object(PythonEncodedMessage(((t_PythonEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args)
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

          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jlong value;
            PyObject *result = PyObject_CallMethod(obj, "extractBits", "i", (int) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "J", &value))
            {
              throwTypeError("extractBits", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jlong) 0;
          }

          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data)
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
#include "org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/maneuvers/trigger/ManeuverTriggers.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *ConfigurableLowThrustManeuver::class$ = NULL;
        jmethodID *ConfigurableLowThrustManeuver::mids$ = NULL;
        bool ConfigurableLowThrustManeuver::live$ = false;

        jclass ConfigurableLowThrustManeuver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/ConfigurableLowThrustManeuver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_beab3b1a5cdb2adc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;Lorg/orekit/forces/maneuvers/trigger/ManeuverTriggers;DD)V");
            mids$[mid_getIsp_9981f74b2d109da6] = env->getMethodID(cls, "getIsp", "()D");
            mids$[mid_getIsp_209f08246d708042] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getThrustDirectionProvider_b1d56f6c555a81c4] = env->getMethodID(cls, "getThrustDirectionProvider", "()Lorg/orekit/forces/maneuvers/propulsion/ThrustDirectionAndAttitudeProvider;");
            mids$[mid_getThrustMagnitude_9981f74b2d109da6] = env->getMethodID(cls, "getThrustMagnitude", "()D");
            mids$[mid_getThrustMagnitude_209f08246d708042] = env->getMethodID(cls, "getThrustMagnitude", "(Lorg/orekit/time/AbsoluteDate;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfigurableLowThrustManeuver::ConfigurableLowThrustManeuver(const ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider & a0, const ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers & a1, jdouble a2, jdouble a3) : ::org::orekit::forces::maneuvers::Maneuver(env->newObject(initializeClass, &mids$, mid_init$_beab3b1a5cdb2adc, a0.this$, a1.this$, a2, a3)) {}

        jdouble ConfigurableLowThrustManeuver::getIsp() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_9981f74b2d109da6]);
        }

        jdouble ConfigurableLowThrustManeuver::getIsp(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIsp_209f08246d708042], a0.this$);
        }

        ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider ConfigurableLowThrustManeuver::getThrustDirectionProvider() const
        {
          return ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getThrustDirectionProvider_b1d56f6c555a81c4]));
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_9981f74b2d109da6]);
        }

        jdouble ConfigurableLowThrustManeuver::getThrustMagnitude(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitude_209f08246d708042], a0.this$);
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
        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self);
        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args);
        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data);
        static PyGetSetDef t_ConfigurableLowThrustManeuver__fields_[] = {
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, isp),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustDirectionProvider),
          DECLARE_GET_FIELD(t_ConfigurableLowThrustManeuver, thrustMagnitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfigurableLowThrustManeuver__methods_[] = {
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getIsp, METH_VARARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustDirectionProvider, METH_NOARGS),
          DECLARE_METHOD(t_ConfigurableLowThrustManeuver, getThrustMagnitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfigurableLowThrustManeuver)[] = {
          { Py_tp_methods, t_ConfigurableLowThrustManeuver__methods_ },
          { Py_tp_init, (void *) t_ConfigurableLowThrustManeuver_init_ },
          { Py_tp_getset, t_ConfigurableLowThrustManeuver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfigurableLowThrustManeuver)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::maneuvers::Maneuver),
          NULL
        };

        DEFINE_TYPE(ConfigurableLowThrustManeuver, t_ConfigurableLowThrustManeuver, ConfigurableLowThrustManeuver);

        void t_ConfigurableLowThrustManeuver::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfigurableLowThrustManeuver), &PY_TYPE_DEF(ConfigurableLowThrustManeuver), module, "ConfigurableLowThrustManeuver", 0);
        }

        void t_ConfigurableLowThrustManeuver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "class_", make_descriptor(ConfigurableLowThrustManeuver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "wrapfn_", make_descriptor(t_ConfigurableLowThrustManeuver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfigurableLowThrustManeuver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfigurableLowThrustManeuver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 1)))
            return NULL;
          return t_ConfigurableLowThrustManeuver::wrap_Object(ConfigurableLowThrustManeuver(((t_ConfigurableLowThrustManeuver *) arg)->object.this$));
        }
        static PyObject *t_ConfigurableLowThrustManeuver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfigurableLowThrustManeuver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfigurableLowThrustManeuver_init_(t_ConfigurableLowThrustManeuver *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider a0((jobject) NULL);
          ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          ConfigurableLowThrustManeuver object((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider::initializeClass, ::org::orekit::forces::maneuvers::trigger::ManeuverTriggers::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = ConfigurableLowThrustManeuver(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getIsp(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getIsp());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getIsp(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getIsp", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustDirectionProvider(t_ConfigurableLowThrustManeuver *self)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_getThrustMagnitude(t_ConfigurableLowThrustManeuver *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jdouble result;
              OBJ_CALL(result = self->object.getThrustMagnitude());
              return PyFloat_FromDouble((double) result);
            }
            break;
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getThrustMagnitude(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getThrustMagnitude", args);
          return NULL;
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__isp(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIsp());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustDirectionProvider(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          ::org::orekit::forces::maneuvers::propulsion::ThrustDirectionAndAttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getThrustDirectionProvider());
          return ::org::orekit::forces::maneuvers::propulsion::t_ThrustDirectionAndAttitudeProvider::wrap_Object(value);
        }

        static PyObject *t_ConfigurableLowThrustManeuver_get__thrustMagnitude(t_ConfigurableLowThrustManeuver *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThrustMagnitude());
          return PyFloat_FromDouble((double) value);
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
          mids$[mid_valueOf_d2482d41730c4f85] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");
          mids$[mid_values_f46ddacf6468d180] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/bodies/JPLEphemeridesLoader$EphemerisType;");

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
        return JPLEphemeridesLoader$EphemerisType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d2482d41730c4f85], a0.this$));
      }

      JArray< JPLEphemeridesLoader$EphemerisType > JPLEphemeridesLoader$EphemerisType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< JPLEphemeridesLoader$EphemerisType >(env->callStaticObjectMethod(cls, mids$[mid_values_f46ddacf6468d180]));
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
#include "org/hipparchus/distribution/RealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *RealDistribution::class$ = NULL;
      jmethodID *RealDistribution::mids$ = NULL;
      bool RealDistribution::live$ = false;

      jclass RealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/RealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
          mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
          mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
          mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
          mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
          mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");
          mids$[mid_probability_82f92590f4247da1] = env->getMethodID(cls, "probability", "(DD)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealDistribution::cumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
      }

      jdouble RealDistribution::density(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
      }

      jdouble RealDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
      }

      jdouble RealDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
      }

      jdouble RealDistribution::getSupportLowerBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
      }

      jdouble RealDistribution::getSupportUpperBound() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
      }

      jdouble RealDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
      }

      jboolean RealDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
      }

      jdouble RealDistribution::logDensity(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
      }

      jdouble RealDistribution::probability(jdouble a0, jdouble a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_82f92590f4247da1], a0, a1);
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
      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self);
      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self);
      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg);
      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args);
      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data);
      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data);
      static PyGetSetDef t_RealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_RealDistribution, numericalMean),
        DECLARE_GET_FIELD(t_RealDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_RealDistribution, supportConnected),
        DECLARE_GET_FIELD(t_RealDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_RealDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealDistribution__methods_[] = {
        DECLARE_METHOD(t_RealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, density, METH_O),
        DECLARE_METHOD(t_RealDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_RealDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_RealDistribution, logDensity, METH_O),
        DECLARE_METHOD(t_RealDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealDistribution)[] = {
        { Py_tp_methods, t_RealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealDistribution, t_RealDistribution, RealDistribution);

      void t_RealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(RealDistribution), &PY_TYPE_DEF(RealDistribution), module, "RealDistribution", 0);
      }

      void t_RealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "class_", make_descriptor(RealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "wrapfn_", make_descriptor(t_RealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealDistribution::initializeClass, 1)))
          return NULL;
        return t_RealDistribution::wrap_Object(RealDistribution(((t_RealDistribution *) arg)->object.this$));
      }
      static PyObject *t_RealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealDistribution_cumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_density(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_getNumericalMean(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getNumericalVariance(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportLowerBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_getSupportUpperBound(t_RealDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealDistribution_inverseCumulativeProbability(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_isSupportConnected(t_RealDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealDistribution_logDensity(t_RealDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.logDensity(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logDensity", arg);
        return NULL;
      }

      static PyObject *t_RealDistribution_probability(t_RealDistribution *self, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = self->object.probability(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_RealDistribution_get__numericalMean(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__numericalVariance(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportConnected(t_RealDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_RealDistribution_get__supportLowerBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_RealDistribution_get__supportUpperBound(t_RealDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatStepHandler::mids$ = NULL;
        bool PythonMultiSatStepHandler::live$ = false;

        jclass PythonMultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_aa335fea495d60e0] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_aa335fea495d60e0] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_0b0c18b32ea71a29] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatStepHandler::PythonMultiSatStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void PythonMultiSatStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
        }

        jlong PythonMultiSatStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
        }

        void PythonMultiSatStepHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self);
        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatStepHandler, t_PythonMultiSatStepHandler, PythonMultiSatStepHandler);

        void t_PythonMultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatStepHandler), &PY_TYPE_DEF(PythonMultiSatStepHandler), module, "PythonMultiSatStepHandler", 1);
        }

        void t_PythonMultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "class_", make_descriptor(PythonMultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonMultiSatStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatStepHandler::wrap_Object(PythonMultiSatStepHandler(((t_PythonMultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatStepHandler_init_(t_PythonMultiSatStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatStepHandler_finalize(t_PythonMultiSatStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatStepHandler_pythonExtension(t_PythonMultiSatStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_42c72b98e3c2e08a]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatStepHandler::mids$[PythonMultiSatStepHandler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatStepHandler_get__self(t_PythonMultiSatStepHandler *self, void *data)
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
#include "org/orekit/models/earth/tessellation/DivertedSingularityAiming.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *DivertedSingularityAiming::class$ = NULL;
          jmethodID *DivertedSingularityAiming::mids$ = NULL;
          bool DivertedSingularityAiming::live$ = false;

          jclass DivertedSingularityAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/DivertedSingularityAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_75a5b53fa8df102b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;)V");
              mids$[mid_alongTileDirection_73bb6a45361007eb] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_d751c1a57012b438] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DivertedSingularityAiming::DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75a5b53fa8df102b, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D DivertedSingularityAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_73bb6a45361007eb], a0.this$, a1.this$));
          }

          ::java::util::List DivertedSingularityAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_d751c1a57012b438]));
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
          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args);
          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self);
          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data);
          static PyGetSetDef t_DivertedSingularityAiming__fields_[] = {
            DECLARE_GET_FIELD(t_DivertedSingularityAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DivertedSingularityAiming__methods_[] = {
            DECLARE_METHOD(t_DivertedSingularityAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_DivertedSingularityAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DivertedSingularityAiming)[] = {
            { Py_tp_methods, t_DivertedSingularityAiming__methods_ },
            { Py_tp_init, (void *) t_DivertedSingularityAiming_init_ },
            { Py_tp_getset, t_DivertedSingularityAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DivertedSingularityAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DivertedSingularityAiming, t_DivertedSingularityAiming, DivertedSingularityAiming);

          void t_DivertedSingularityAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(DivertedSingularityAiming), &PY_TYPE_DEF(DivertedSingularityAiming), module, "DivertedSingularityAiming", 0);
          }

          void t_DivertedSingularityAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "class_", make_descriptor(DivertedSingularityAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "wrapfn_", make_descriptor(t_DivertedSingularityAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DivertedSingularityAiming::initializeClass, 1)))
              return NULL;
            return t_DivertedSingularityAiming::wrap_Object(DivertedSingularityAiming(((t_DivertedSingularityAiming *) arg)->object.this$));
          }
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DivertedSingularityAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            DivertedSingularityAiming object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_))
            {
              INT_CALL(object = DivertedSingularityAiming(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIA::class$ = NULL;
        jmethodID *GPSBlockIIA::mids$ = NULL;
        bool GPSBlockIIA::live$ = false;
        jdouble GPSBlockIIA::DEFAULT_YAW_BIAS = (jdouble) 0;

        jclass GPSBlockIIA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6747e305f69aea0f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_getDefaultYawRate_ce4c02d583456bc9] = env->getStaticMethodID(cls, "getDefaultYawRate", "(I)D");
            mids$[mid_correctedYaw_7e83c4f910737b79] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_3bb932fc0c863341] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIA::GPSBlockIIA(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_6747e305f69aea0f, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jdouble GPSBlockIIA::getDefaultYawRate(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDefaultYawRate_ce4c02d583456bc9], a0);
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
      namespace attitude {
        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_GPSBlockIIA__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, getDefaultYawRate, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIA)[] = {
          { Py_tp_methods, t_GPSBlockIIA__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIA_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIA)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIA, t_GPSBlockIIA, GPSBlockIIA);

        void t_GPSBlockIIA::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIA), &PY_TYPE_DEF(GPSBlockIIA), module, "GPSBlockIIA", 0);
        }

        void t_GPSBlockIIA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "class_", make_descriptor(GPSBlockIIA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "wrapfn_", make_descriptor(t_GPSBlockIIA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIA::DEFAULT_YAW_BIAS));
        }

        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIA::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIA::wrap_Object(GPSBlockIIA(((t_GPSBlockIIA *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIA object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIA(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::attitude::GPSBlockIIA::getDefaultYawRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDefaultYawRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Ulp.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Ulp::class$ = NULL;
        jmethodID *Ulp::mids$ = NULL;
        bool Ulp::live$ = false;

        jclass Ulp::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Ulp");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Ulp::Ulp() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Ulp::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
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
        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg);

        static PyMethodDef t_Ulp__methods_[] = {
          DECLARE_METHOD(t_Ulp, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Ulp, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Ulp)[] = {
          { Py_tp_methods, t_Ulp__methods_ },
          { Py_tp_init, (void *) t_Ulp_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Ulp)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Ulp, t_Ulp, Ulp);

        void t_Ulp::install(PyObject *module)
        {
          installType(&PY_TYPE(Ulp), &PY_TYPE_DEF(Ulp), module, "Ulp", 0);
        }

        void t_Ulp::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "class_", make_descriptor(Ulp::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "wrapfn_", make_descriptor(t_Ulp::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Ulp), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Ulp_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Ulp::initializeClass, 1)))
            return NULL;
          return t_Ulp::wrap_Object(Ulp(((t_Ulp *) arg)->object.this$));
        }
        static PyObject *t_Ulp_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Ulp::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Ulp_init_(t_Ulp *self, PyObject *args, PyObject *kwds)
        {
          Ulp object((jobject) NULL);

          INT_CALL(object = Ulp());
          self->object = object;

          return 0;
        }

        static PyObject *t_Ulp_value(t_Ulp *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/GeoMagneticElements.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticElements::class$ = NULL;
        jmethodID *GeoMagneticElements::mids$ = NULL;
        bool GeoMagneticElements::live$ = false;

        jclass GeoMagneticElements::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticElements");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_30f8886dfb88a63c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_getDeclination_9981f74b2d109da6] = env->getMethodID(cls, "getDeclination", "()D");
            mids$[mid_getFieldVector_032312bdeb3f2f93] = env->getMethodID(cls, "getFieldVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getHorizontalIntensity_9981f74b2d109da6] = env->getMethodID(cls, "getHorizontalIntensity", "()D");
            mids$[mid_getInclination_9981f74b2d109da6] = env->getMethodID(cls, "getInclination", "()D");
            mids$[mid_getTotalIntensity_9981f74b2d109da6] = env->getMethodID(cls, "getTotalIntensity", "()D");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticElements::GeoMagneticElements(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30f8886dfb88a63c, a0.this$)) {}

        jdouble GeoMagneticElements::getDeclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDeclination_9981f74b2d109da6]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D GeoMagneticElements::getFieldVector() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getFieldVector_032312bdeb3f2f93]));
        }

        jdouble GeoMagneticElements::getHorizontalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHorizontalIntensity_9981f74b2d109da6]);
        }

        jdouble GeoMagneticElements::getInclination() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getInclination_9981f74b2d109da6]);
        }

        jdouble GeoMagneticElements::getTotalIntensity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTotalIntensity_9981f74b2d109da6]);
        }

        ::java::lang::String GeoMagneticElements::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self);
        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args);
        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data);
        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data);
        static PyGetSetDef t_GeoMagneticElements__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticElements, declination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, fieldVector),
          DECLARE_GET_FIELD(t_GeoMagneticElements, horizontalIntensity),
          DECLARE_GET_FIELD(t_GeoMagneticElements, inclination),
          DECLARE_GET_FIELD(t_GeoMagneticElements, totalIntensity),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticElements__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticElements, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticElements, getDeclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getFieldVector, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getHorizontalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getInclination, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, getTotalIntensity, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticElements, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticElements)[] = {
          { Py_tp_methods, t_GeoMagneticElements__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticElements_init_ },
          { Py_tp_getset, t_GeoMagneticElements__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticElements)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticElements, t_GeoMagneticElements, GeoMagneticElements);

        void t_GeoMagneticElements::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticElements), &PY_TYPE_DEF(GeoMagneticElements), module, "GeoMagneticElements", 0);
        }

        void t_GeoMagneticElements::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "class_", make_descriptor(GeoMagneticElements::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "wrapfn_", make_descriptor(t_GeoMagneticElements::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticElements), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticElements_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticElements::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticElements::wrap_Object(GeoMagneticElements(((t_GeoMagneticElements *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticElements_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticElements::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticElements_init_(t_GeoMagneticElements *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          GeoMagneticElements object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            INT_CALL(object = GeoMagneticElements(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GeoMagneticElements_getDeclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDeclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getFieldVector(t_GeoMagneticElements *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_GeoMagneticElements_getHorizontalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getInclination(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getInclination());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_getTotalIntensity(t_GeoMagneticElements *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GeoMagneticElements_toString(t_GeoMagneticElements *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(GeoMagneticElements), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_GeoMagneticElements_get__declination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDeclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__fieldVector(t_GeoMagneticElements *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getFieldVector());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_GeoMagneticElements_get__horizontalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHorizontalIntensity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__inclination(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getInclination());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GeoMagneticElements_get__totalIntensity(t_GeoMagneticElements *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTotalIntensity());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *HighamHall54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54FieldIntegratorBuilder::mids$ = NULL;
        bool HighamHall54FieldIntegratorBuilder::live$ = false;

        jclass HighamHall54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegratorBuilder::HighamHall54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator HighamHall54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegratorBuilder, t_HighamHall54FieldIntegratorBuilder, HighamHall54FieldIntegratorBuilder);
        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_Object(const HighamHall54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegratorBuilder), &PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder), module, "HighamHall54FieldIntegratorBuilder", 0);
        }

        void t_HighamHall54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "class_", make_descriptor(HighamHall54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegratorBuilder::wrap_Object(HighamHall54FieldIntegratorBuilder(((t_HighamHall54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(HighamHall54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TabulatedProvider.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedProvider::class$ = NULL;
      jmethodID *TabulatedProvider::mids$ = NULL;
      bool TabulatedProvider::live$ = false;

      jclass TabulatedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f21769abc337991f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_506090b585892db8] = env->getMethodID(cls, "<init>", "(Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/attitudes/AttitudeBuilder;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedProvider::TabulatedProvider(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f21769abc337991f, a0.this$, a1.this$, a2, a3.this$)) {}

      TabulatedProvider::TabulatedProvider(const ::java::util::List & a0, jint a1, const ::org::orekit::utils::AngularDerivativesFilter & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::orekit::attitudes::AttitudeBuilder & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_506090b585892db8, a0.this$, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
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
      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args);
      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self);
      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data);
      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data);
      static PyGetSetDef t_TabulatedProvider__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedProvider, maxDate),
        DECLARE_GET_FIELD(t_TabulatedProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedProvider__methods_[] = {
        DECLARE_METHOD(t_TabulatedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedProvider)[] = {
        { Py_tp_methods, t_TabulatedProvider__methods_ },
        { Py_tp_init, (void *) t_TabulatedProvider_init_ },
        { Py_tp_getset, t_TabulatedProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedProvider, t_TabulatedProvider, TabulatedProvider);

      void t_TabulatedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedProvider), &PY_TYPE_DEF(TabulatedProvider), module, "TabulatedProvider", 0);
      }

      void t_TabulatedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "class_", make_descriptor(TabulatedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "wrapfn_", make_descriptor(t_TabulatedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedProvider::initializeClass, 1)))
          return NULL;
        return t_TabulatedProvider::wrap_Object(TabulatedProvider(((t_TabulatedProvider *) arg)->object.this$));
      }
      static PyObject *t_TabulatedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedProvider_init_(t_TabulatedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "kKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 6:
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::utils::AngularDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
            ::org::orekit::attitudes::AttitudeBuilder a5((jobject) NULL);
            TabulatedProvider object((jobject) NULL);

            if (!parseArgs(args, "KIKkkk", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::attitudes::AttitudeBuilder::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a3, &a4, &a5))
            {
              INT_CALL(object = TabulatedProvider(a0, a1, a2, a3, a4, a5));
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

      static PyObject *t_TabulatedProvider_getAttitude(t_TabulatedProvider *self, PyObject *args)
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

      static PyObject *t_TabulatedProvider_getMaxDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_getMinDate(t_TabulatedProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedProvider_get__maxDate(t_TabulatedProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedProvider_get__minDate(t_TabulatedProvider *self, void *data)
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
#include "org/orekit/propagation/conversion/LutherFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *LutherFieldIntegratorBuilder::class$ = NULL;
        jmethodID *LutherFieldIntegratorBuilder::mids$ = NULL;
        bool LutherFieldIntegratorBuilder::live$ = false;

        jclass LutherFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/LutherFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(jdouble a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

        LutherFieldIntegratorBuilder::LutherFieldIntegratorBuilder(const ::org::hipparchus::CalculusFieldElement & a0) : ::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator LutherFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_LutherFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_LutherFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_LutherFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractFixedStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegratorBuilder, t_LutherFieldIntegratorBuilder, LutherFieldIntegratorBuilder);
        PyObject *t_LutherFieldIntegratorBuilder::wrap_Object(const LutherFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegratorBuilder *self = (t_LutherFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegratorBuilder), &PY_TYPE_DEF(LutherFieldIntegratorBuilder), module, "LutherFieldIntegratorBuilder", 0);
        }

        void t_LutherFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "class_", make_descriptor(LutherFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_LutherFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegratorBuilder::wrap_Object(LutherFieldIntegratorBuilder(((t_LutherFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegratorBuilder_of_(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegratorBuilder_init_(t_LutherFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              LutherFieldIntegratorBuilder object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = LutherFieldIntegratorBuilder(a0));
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

        static PyObject *t_LutherFieldIntegratorBuilder_buildIntegrator(t_LutherFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(LutherFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_LutherFieldIntegratorBuilder_get__parameters_(t_LutherFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Rint.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Rint::class$ = NULL;
        jmethodID *Rint::mids$ = NULL;
        bool Rint::live$ = false;

        jclass Rint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Rint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_bf28ed64d6e8576b] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_ba85b555c6f0b809] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Rint::Rint() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble Rint::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_bf28ed64d6e8576b], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Rint::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Rint_value(t_Rint *self, PyObject *args);

        static PyMethodDef t_Rint__methods_[] = {
          DECLARE_METHOD(t_Rint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Rint, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Rint)[] = {
          { Py_tp_methods, t_Rint__methods_ },
          { Py_tp_init, (void *) t_Rint_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Rint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Rint, t_Rint, Rint);

        void t_Rint::install(PyObject *module)
        {
          installType(&PY_TYPE(Rint), &PY_TYPE_DEF(Rint), module, "Rint", 0);
        }

        void t_Rint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "class_", make_descriptor(Rint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "wrapfn_", make_descriptor(t_Rint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Rint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Rint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Rint::initializeClass, 1)))
            return NULL;
          return t_Rint::wrap_Object(Rint(((t_Rint *) arg)->object.this$));
        }
        static PyObject *t_Rint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Rint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Rint_init_(t_Rint *self, PyObject *args, PyObject *kwds)
        {
          Rint object((jobject) NULL);

          INT_CALL(object = Rint());
          self->object = object;

          return 0;
        }

        static PyObject *t_Rint_value(t_Rint *self, PyObject *args)
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
#include "java/util/Arrays.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/Comparator.h"
#include "java/util/Spliterator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/Spliterator$OfLong.h"
#include "java/util/Spliterator$OfInt.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Arrays::class$ = NULL;
    jmethodID *Arrays::mids$ = NULL;
    bool Arrays::live$ = false;

    jclass Arrays::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Arrays");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asList_5831821065411121] = env->getStaticMethodID(cls, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_binarySearch_1fba924c1216caf8] = env->getStaticMethodID(cls, "binarySearch", "([BB)I");
        mids$[mid_binarySearch_b80cf5143519da2a] = env->getStaticMethodID(cls, "binarySearch", "([CC)I");
        mids$[mid_binarySearch_499981c6368c693f] = env->getStaticMethodID(cls, "binarySearch", "([DD)I");
        mids$[mid_binarySearch_3c8415c42cc2c797] = env->getStaticMethodID(cls, "binarySearch", "([FF)I");
        mids$[mid_binarySearch_342822b7e46a4cdd] = env->getStaticMethodID(cls, "binarySearch", "([II)I");
        mids$[mid_binarySearch_9b28ea9170836f42] = env->getStaticMethodID(cls, "binarySearch", "([JJ)I");
        mids$[mid_binarySearch_71bdb3749e30f2a9] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_30ae421db184a7b2] = env->getStaticMethodID(cls, "binarySearch", "([SS)I");
        mids$[mid_binarySearch_44bd3164d0688c23] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_binarySearch_0aa577ed01bc0516] = env->getStaticMethodID(cls, "binarySearch", "([BIIB)I");
        mids$[mid_binarySearch_33b57dfff5d3056b] = env->getStaticMethodID(cls, "binarySearch", "([CIIC)I");
        mids$[mid_binarySearch_6272e3c15e78c9ba] = env->getStaticMethodID(cls, "binarySearch", "([DIID)I");
        mids$[mid_binarySearch_fb102a25573df658] = env->getStaticMethodID(cls, "binarySearch", "([FIIF)I");
        mids$[mid_binarySearch_21ac6bf425bbb698] = env->getStaticMethodID(cls, "binarySearch", "([IIII)I");
        mids$[mid_binarySearch_5718012a4f4b2631] = env->getStaticMethodID(cls, "binarySearch", "([JIIJ)I");
        mids$[mid_binarySearch_c1cf4f74dcee67c9] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
        mids$[mid_binarySearch_39fbffbad076f685] = env->getStaticMethodID(cls, "binarySearch", "([SIIS)I");
        mids$[mid_binarySearch_20b397c4f69acba0] = env->getStaticMethodID(cls, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_e2b43ba6885637ad] = env->getStaticMethodID(cls, "compare", "([B[B)I");
        mids$[mid_compare_bd249e779a40941c] = env->getStaticMethodID(cls, "compare", "([C[C)I");
        mids$[mid_compare_3bcc8d13f0d41c68] = env->getStaticMethodID(cls, "compare", "([D[D)I");
        mids$[mid_compare_22c935b20fc999bb] = env->getStaticMethodID(cls, "compare", "([F[F)I");
        mids$[mid_compare_b444938e9c64511a] = env->getStaticMethodID(cls, "compare", "([I[I)I");
        mids$[mid_compare_52cccf809ce95dd0] = env->getStaticMethodID(cls, "compare", "([J[J)I");
        mids$[mid_compare_b66029ebb1df0d4d] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I");
        mids$[mid_compare_2a13af95313e31fb] = env->getStaticMethodID(cls, "compare", "([S[S)I");
        mids$[mid_compare_441bf402e3163e36] = env->getStaticMethodID(cls, "compare", "([Z[Z)I");
        mids$[mid_compare_1c981d4d60034262] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_compare_040e80419b131206] = env->getStaticMethodID(cls, "compare", "([BII[BII)I");
        mids$[mid_compare_d2816b23bc3d7fb7] = env->getStaticMethodID(cls, "compare", "([CII[CII)I");
        mids$[mid_compare_b802a207b48c5b56] = env->getStaticMethodID(cls, "compare", "([DII[DII)I");
        mids$[mid_compare_3094b06c63a5265c] = env->getStaticMethodID(cls, "compare", "([FII[FII)I");
        mids$[mid_compare_431377fd2ff78c4a] = env->getStaticMethodID(cls, "compare", "([III[III)I");
        mids$[mid_compare_19b41a87a8ffac81] = env->getStaticMethodID(cls, "compare", "([JII[JII)I");
        mids$[mid_compare_8af2b583da505146] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I");
        mids$[mid_compare_53d8831c521a373f] = env->getStaticMethodID(cls, "compare", "([SII[SII)I");
        mids$[mid_compare_a6d97b700ddb8cb7] = env->getStaticMethodID(cls, "compare", "([ZII[ZII)I");
        mids$[mid_compare_485d4f399dfda3f3] = env->getStaticMethodID(cls, "compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_compareUnsigned_e2b43ba6885637ad] = env->getStaticMethodID(cls, "compareUnsigned", "([B[B)I");
        mids$[mid_compareUnsigned_b444938e9c64511a] = env->getStaticMethodID(cls, "compareUnsigned", "([I[I)I");
        mids$[mid_compareUnsigned_52cccf809ce95dd0] = env->getStaticMethodID(cls, "compareUnsigned", "([J[J)I");
        mids$[mid_compareUnsigned_2a13af95313e31fb] = env->getStaticMethodID(cls, "compareUnsigned", "([S[S)I");
        mids$[mid_compareUnsigned_040e80419b131206] = env->getStaticMethodID(cls, "compareUnsigned", "([BII[BII)I");
        mids$[mid_compareUnsigned_431377fd2ff78c4a] = env->getStaticMethodID(cls, "compareUnsigned", "([III[III)I");
        mids$[mid_compareUnsigned_19b41a87a8ffac81] = env->getStaticMethodID(cls, "compareUnsigned", "([JII[JII)I");
        mids$[mid_compareUnsigned_53d8831c521a373f] = env->getStaticMethodID(cls, "compareUnsigned", "([SII[SII)I");
        mids$[mid_copyOf_78d38a050501c17b] = env->getStaticMethodID(cls, "copyOf", "([BI)[B");
        mids$[mid_copyOf_118077fbb1b51e14] = env->getStaticMethodID(cls, "copyOf", "([CI)[C");
        mids$[mid_copyOf_25f286641019e8d7] = env->getStaticMethodID(cls, "copyOf", "([DI)[D");
        mids$[mid_copyOf_5c5585b2080db6bb] = env->getStaticMethodID(cls, "copyOf", "([FI)[F");
        mids$[mid_copyOf_52c3cc5dc5d9d7b0] = env->getStaticMethodID(cls, "copyOf", "([II)[I");
        mids$[mid_copyOf_a914e653d9d39f7a] = env->getStaticMethodID(cls, "copyOf", "([JI)[J");
        mids$[mid_copyOf_2d5fe1c1682f00b8] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
        mids$[mid_copyOf_d91ca074e7808ea0] = env->getStaticMethodID(cls, "copyOf", "([SI)[S");
        mids$[mid_copyOf_408bdc1eae61356d] = env->getStaticMethodID(cls, "copyOf", "([ZI)[Z");
        mids$[mid_copyOf_5964053b8067b2a2] = env->getStaticMethodID(cls, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_0f0e374d153ef6b1] = env->getStaticMethodID(cls, "copyOfRange", "([BII)[B");
        mids$[mid_copyOfRange_d97e26d937793687] = env->getStaticMethodID(cls, "copyOfRange", "([CII)[C");
        mids$[mid_copyOfRange_8f6ddc643efefb02] = env->getStaticMethodID(cls, "copyOfRange", "([DII)[D");
        mids$[mid_copyOfRange_dfb492ed53b4ebb6] = env->getStaticMethodID(cls, "copyOfRange", "([FII)[F");
        mids$[mid_copyOfRange_50e2b2f516ae3aee] = env->getStaticMethodID(cls, "copyOfRange", "([III)[I");
        mids$[mid_copyOfRange_b5a7d8d533dd134b] = env->getStaticMethodID(cls, "copyOfRange", "([JII)[J");
        mids$[mid_copyOfRange_c6e9b1846e385f51] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
        mids$[mid_copyOfRange_8390753cf45bdf7b] = env->getStaticMethodID(cls, "copyOfRange", "([SII)[S");
        mids$[mid_copyOfRange_89949fd8c309ef39] = env->getStaticMethodID(cls, "copyOfRange", "([ZII)[Z");
        mids$[mid_copyOfRange_710c73a094222c9a] = env->getStaticMethodID(cls, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
        mids$[mid_deepEquals_7942e72a75b53921] = env->getStaticMethodID(cls, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_deepHashCode_9704dcff2884b80b] = env->getStaticMethodID(cls, "deepHashCode", "([Ljava/lang/Object;)I");
        mids$[mid_deepToString_71cc527176eb14c4] = env->getStaticMethodID(cls, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_equals_7f0e96d531737149] = env->getStaticMethodID(cls, "equals", "([B[B)Z");
        mids$[mid_equals_d6cb7b4faa93511c] = env->getStaticMethodID(cls, "equals", "([C[C)Z");
        mids$[mid_equals_ae9ef40b81aa3737] = env->getStaticMethodID(cls, "equals", "([D[D)Z");
        mids$[mid_equals_a03930c526253e6a] = env->getStaticMethodID(cls, "equals", "([F[F)Z");
        mids$[mid_equals_f92b869f534c4ff0] = env->getStaticMethodID(cls, "equals", "([I[I)Z");
        mids$[mid_equals_f0a71ca3a8bba19c] = env->getStaticMethodID(cls, "equals", "([J[J)Z");
        mids$[mid_equals_7942e72a75b53921] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
        mids$[mid_equals_ae43abd99d1296a0] = env->getStaticMethodID(cls, "equals", "([S[S)Z");
        mids$[mid_equals_91de72cf16c23b35] = env->getStaticMethodID(cls, "equals", "([Z[Z)Z");
        mids$[mid_equals_9dca917f4ecf3dac] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z");
        mids$[mid_equals_478a0a9ca56d77d1] = env->getStaticMethodID(cls, "equals", "([BII[BII)Z");
        mids$[mid_equals_01ae3395de02023e] = env->getStaticMethodID(cls, "equals", "([CII[CII)Z");
        mids$[mid_equals_d6f5cb71f496d8bb] = env->getStaticMethodID(cls, "equals", "([DII[DII)Z");
        mids$[mid_equals_806bf53c13da87db] = env->getStaticMethodID(cls, "equals", "([FII[FII)Z");
        mids$[mid_equals_4086f425d97778c8] = env->getStaticMethodID(cls, "equals", "([III[III)Z");
        mids$[mid_equals_f8d7bcfb0e123252] = env->getStaticMethodID(cls, "equals", "([JII[JII)Z");
        mids$[mid_equals_858f3d5692852a1b] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z");
        mids$[mid_equals_1f1b504789a7311c] = env->getStaticMethodID(cls, "equals", "([SII[SII)Z");
        mids$[mid_equals_0a286de01e9aff56] = env->getStaticMethodID(cls, "equals", "([ZII[ZII)Z");
        mids$[mid_equals_5f6d33be87ba3e1f] = env->getStaticMethodID(cls, "equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z");
        mids$[mid_fill_a79539b72e2c3c9b] = env->getStaticMethodID(cls, "fill", "([ZZ)V");
        mids$[mid_fill_ac2321aff018c47f] = env->getStaticMethodID(cls, "fill", "([BB)V");
        mids$[mid_fill_7175625f4c54d6f6] = env->getStaticMethodID(cls, "fill", "([CC)V");
        mids$[mid_fill_19a01fdb4baa56b0] = env->getStaticMethodID(cls, "fill", "([DD)V");
        mids$[mid_fill_eb615a4b551f10d9] = env->getStaticMethodID(cls, "fill", "([FF)V");
        mids$[mid_fill_416314b5edbdc63c] = env->getStaticMethodID(cls, "fill", "([II)V");
        mids$[mid_fill_16b75c577a107ba8] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
        mids$[mid_fill_3e61b124a94ad6fc] = env->getStaticMethodID(cls, "fill", "([JJ)V");
        mids$[mid_fill_61884a4b3b6a91f5] = env->getStaticMethodID(cls, "fill", "([SS)V");
        mids$[mid_fill_6857340fc13492fb] = env->getStaticMethodID(cls, "fill", "([ZIIZ)V");
        mids$[mid_fill_ef9ab799e597fc7d] = env->getStaticMethodID(cls, "fill", "([BIIB)V");
        mids$[mid_fill_68b43331e8830fbe] = env->getStaticMethodID(cls, "fill", "([CIIC)V");
        mids$[mid_fill_dd3e2c084106d4a1] = env->getStaticMethodID(cls, "fill", "([DIID)V");
        mids$[mid_fill_628cca4b23c73077] = env->getStaticMethodID(cls, "fill", "([FIIF)V");
        mids$[mid_fill_b6bf6e6e61056d9c] = env->getStaticMethodID(cls, "fill", "([IIII)V");
        mids$[mid_fill_a2547a7b9031aa51] = env->getStaticMethodID(cls, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
        mids$[mid_fill_46ced5b5681b09c6] = env->getStaticMethodID(cls, "fill", "([JIIJ)V");
        mids$[mid_fill_3f6bccba271ced6e] = env->getStaticMethodID(cls, "fill", "([SIIS)V");
        mids$[mid_hashCode_89e14f411787412a] = env->getStaticMethodID(cls, "hashCode", "([B)I");
        mids$[mid_hashCode_8ff26d6b29141036] = env->getStaticMethodID(cls, "hashCode", "([C)I");
        mids$[mid_hashCode_0bbaa89e7f8976bd] = env->getStaticMethodID(cls, "hashCode", "([D)I");
        mids$[mid_hashCode_15385381e09b1d6b] = env->getStaticMethodID(cls, "hashCode", "([F)I");
        mids$[mid_hashCode_4c6a473f00540fd2] = env->getStaticMethodID(cls, "hashCode", "([I)I");
        mids$[mid_hashCode_095143a0bd47aeb1] = env->getStaticMethodID(cls, "hashCode", "([J)I");
        mids$[mid_hashCode_9704dcff2884b80b] = env->getStaticMethodID(cls, "hashCode", "([Ljava/lang/Object;)I");
        mids$[mid_hashCode_4f3642556613bb47] = env->getStaticMethodID(cls, "hashCode", "([S)I");
        mids$[mid_hashCode_1ef93d7549096ece] = env->getStaticMethodID(cls, "hashCode", "([Z)I");
        mids$[mid_mismatch_e2b43ba6885637ad] = env->getStaticMethodID(cls, "mismatch", "([B[B)I");
        mids$[mid_mismatch_bd249e779a40941c] = env->getStaticMethodID(cls, "mismatch", "([C[C)I");
        mids$[mid_mismatch_3bcc8d13f0d41c68] = env->getStaticMethodID(cls, "mismatch", "([D[D)I");
        mids$[mid_mismatch_22c935b20fc999bb] = env->getStaticMethodID(cls, "mismatch", "([F[F)I");
        mids$[mid_mismatch_b444938e9c64511a] = env->getStaticMethodID(cls, "mismatch", "([I[I)I");
        mids$[mid_mismatch_52cccf809ce95dd0] = env->getStaticMethodID(cls, "mismatch", "([J[J)I");
        mids$[mid_mismatch_aaaad1f834437431] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I");
        mids$[mid_mismatch_2a13af95313e31fb] = env->getStaticMethodID(cls, "mismatch", "([S[S)I");
        mids$[mid_mismatch_441bf402e3163e36] = env->getStaticMethodID(cls, "mismatch", "([Z[Z)I");
        mids$[mid_mismatch_1c981d4d60034262] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_mismatch_040e80419b131206] = env->getStaticMethodID(cls, "mismatch", "([BII[BII)I");
        mids$[mid_mismatch_d2816b23bc3d7fb7] = env->getStaticMethodID(cls, "mismatch", "([CII[CII)I");
        mids$[mid_mismatch_b802a207b48c5b56] = env->getStaticMethodID(cls, "mismatch", "([DII[DII)I");
        mids$[mid_mismatch_3094b06c63a5265c] = env->getStaticMethodID(cls, "mismatch", "([FII[FII)I");
        mids$[mid_mismatch_431377fd2ff78c4a] = env->getStaticMethodID(cls, "mismatch", "([III[III)I");
        mids$[mid_mismatch_19b41a87a8ffac81] = env->getStaticMethodID(cls, "mismatch", "([JII[JII)I");
        mids$[mid_mismatch_535036ae3305f17d] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I");
        mids$[mid_mismatch_53d8831c521a373f] = env->getStaticMethodID(cls, "mismatch", "([SII[SII)I");
        mids$[mid_mismatch_a6d97b700ddb8cb7] = env->getStaticMethodID(cls, "mismatch", "([ZII[ZII)I");
        mids$[mid_mismatch_485d4f399dfda3f3] = env->getStaticMethodID(cls, "mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I");
        mids$[mid_parallelSort_bba2a19638de22ff] = env->getStaticMethodID(cls, "parallelSort", "([B)V");
        mids$[mid_parallelSort_e22e96b35f4145e4] = env->getStaticMethodID(cls, "parallelSort", "([C)V");
        mids$[mid_parallelSort_a71c45509eaf92d1] = env->getStaticMethodID(cls, "parallelSort", "([D)V");
        mids$[mid_parallelSort_03eb90545fab7645] = env->getStaticMethodID(cls, "parallelSort", "([F)V");
        mids$[mid_parallelSort_d43202153dd284f7] = env->getStaticMethodID(cls, "parallelSort", "([I)V");
        mids$[mid_parallelSort_22b2c2bc86e56cb0] = env->getStaticMethodID(cls, "parallelSort", "([J)V");
        mids$[mid_parallelSort_3fafd6e61e36074b] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;)V");
        mids$[mid_parallelSort_f8328e41c109dcc9] = env->getStaticMethodID(cls, "parallelSort", "([S)V");
        mids$[mid_parallelSort_6b02e78ec9b47ffa] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_parallelSort_e4288ba5fbf20d28] = env->getStaticMethodID(cls, "parallelSort", "([BII)V");
        mids$[mid_parallelSort_6f10578448832e2a] = env->getStaticMethodID(cls, "parallelSort", "([CII)V");
        mids$[mid_parallelSort_40b495c766d36227] = env->getStaticMethodID(cls, "parallelSort", "([DII)V");
        mids$[mid_parallelSort_a75f0ad7db148908] = env->getStaticMethodID(cls, "parallelSort", "([FII)V");
        mids$[mid_parallelSort_9faac5a856899214] = env->getStaticMethodID(cls, "parallelSort", "([III)V");
        mids$[mid_parallelSort_5878dd4fd67d78f9] = env->getStaticMethodID(cls, "parallelSort", "([JII)V");
        mids$[mid_parallelSort_d3f3c19497a85287] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Comparable;II)V");
        mids$[mid_parallelSort_298bfd39fb463626] = env->getStaticMethodID(cls, "parallelSort", "([SII)V");
        mids$[mid_parallelSort_d7441a2de0bb4c1d] = env->getStaticMethodID(cls, "parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_sort_bba2a19638de22ff] = env->getStaticMethodID(cls, "sort", "([B)V");
        mids$[mid_sort_e22e96b35f4145e4] = env->getStaticMethodID(cls, "sort", "([C)V");
        mids$[mid_sort_a71c45509eaf92d1] = env->getStaticMethodID(cls, "sort", "([D)V");
        mids$[mid_sort_03eb90545fab7645] = env->getStaticMethodID(cls, "sort", "([F)V");
        mids$[mid_sort_d43202153dd284f7] = env->getStaticMethodID(cls, "sort", "([I)V");
        mids$[mid_sort_22b2c2bc86e56cb0] = env->getStaticMethodID(cls, "sort", "([J)V");
        mids$[mid_sort_fc48e5166ee82e6b] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;)V");
        mids$[mid_sort_f8328e41c109dcc9] = env->getStaticMethodID(cls, "sort", "([S)V");
        mids$[mid_sort_6b02e78ec9b47ffa] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
        mids$[mid_sort_e4288ba5fbf20d28] = env->getStaticMethodID(cls, "sort", "([BII)V");
        mids$[mid_sort_6f10578448832e2a] = env->getStaticMethodID(cls, "sort", "([CII)V");
        mids$[mid_sort_40b495c766d36227] = env->getStaticMethodID(cls, "sort", "([DII)V");
        mids$[mid_sort_a75f0ad7db148908] = env->getStaticMethodID(cls, "sort", "([FII)V");
        mids$[mid_sort_9faac5a856899214] = env->getStaticMethodID(cls, "sort", "([III)V");
        mids$[mid_sort_5878dd4fd67d78f9] = env->getStaticMethodID(cls, "sort", "([JII)V");
        mids$[mid_sort_0dbf9ee55f7adc62] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;II)V");
        mids$[mid_sort_298bfd39fb463626] = env->getStaticMethodID(cls, "sort", "([SII)V");
        mids$[mid_sort_d7441a2de0bb4c1d] = env->getStaticMethodID(cls, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
        mids$[mid_spliterator_91fff06cc2f92cef] = env->getStaticMethodID(cls, "spliterator", "([D)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_71eacbf339774afe] = env->getStaticMethodID(cls, "spliterator", "([I)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_535ff33f3b9123f3] = env->getStaticMethodID(cls, "spliterator", "([J)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_3f2b28c41cc65962] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;");
        mids$[mid_spliterator_1e0c49b0e7e81c72] = env->getStaticMethodID(cls, "spliterator", "([DII)Ljava/util/Spliterator$OfDouble;");
        mids$[mid_spliterator_2d7b874aef57ece6] = env->getStaticMethodID(cls, "spliterator", "([III)Ljava/util/Spliterator$OfInt;");
        mids$[mid_spliterator_818c76e75ad3b2bf] = env->getStaticMethodID(cls, "spliterator", "([JII)Ljava/util/Spliterator$OfLong;");
        mids$[mid_spliterator_f0719418bba1e334] = env->getStaticMethodID(cls, "spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;");
        mids$[mid_stream_6c41db567343fc7b] = env->getStaticMethodID(cls, "stream", "([D)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_ea5d6111543a5047] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;");
        mids$[mid_stream_d46fe892de2300c1] = env->getStaticMethodID(cls, "stream", "([DII)Ljava/util/stream/DoubleStream;");
        mids$[mid_stream_30f47f2d950674cc] = env->getStaticMethodID(cls, "stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;");
        mids$[mid_toString_70208d02e8800d4c] = env->getStaticMethodID(cls, "toString", "([B)Ljava/lang/String;");
        mids$[mid_toString_8b7706fe569efa7c] = env->getStaticMethodID(cls, "toString", "([C)Ljava/lang/String;");
        mids$[mid_toString_fab3d5881f09253b] = env->getStaticMethodID(cls, "toString", "([D)Ljava/lang/String;");
        mids$[mid_toString_90aa1c4027ec27ae] = env->getStaticMethodID(cls, "toString", "([F)Ljava/lang/String;");
        mids$[mid_toString_c9e8e005aec406fb] = env->getStaticMethodID(cls, "toString", "([I)Ljava/lang/String;");
        mids$[mid_toString_b74eead037cffbde] = env->getStaticMethodID(cls, "toString", "([J)Ljava/lang/String;");
        mids$[mid_toString_71cc527176eb14c4] = env->getStaticMethodID(cls, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
        mids$[mid_toString_4472ecfaa1e833eb] = env->getStaticMethodID(cls, "toString", "([S)Ljava/lang/String;");
        mids$[mid_toString_adf9409972df88b1] = env->getStaticMethodID(cls, "toString", "([Z)Ljava/lang/String;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::List Arrays::asList(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_asList_5831821065411121], a0.this$));
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_1fba924c1216caf8], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_b80cf5143519da2a], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_499981c6368c693f], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_3c8415c42cc2c797], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_342822b7e46a4cdd], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_9b28ea9170836f42], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_71bdb3749e30f2a9], a0.this$, a1.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_30ae421db184a7b2], a0.this$, a1);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_44bd3164d0688c23], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::binarySearch(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_0aa577ed01bc0516], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_33b57dfff5d3056b], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_6272e3c15e78c9ba], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_fb102a25573df658], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_21ac6bf425bbb698], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_5718012a4f4b2631], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_c1cf4f74dcee67c9], a0.this$, a1, a2, a3.this$);
    }

    jint Arrays::binarySearch(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_39fbffbad076f685], a0.this$, a1, a2, a3);
    }

    jint Arrays::binarySearch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3, const ::java::util::Comparator & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_20b397c4f69acba0], a0.this$, a1, a2, a3.this$, a4.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_e2b43ba6885637ad], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_bd249e779a40941c], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3bcc8d13f0d41c68], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_22c935b20fc999bb], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b444938e9c64511a], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_52cccf809ce95dd0], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, const JArray< ::java::lang::Comparable > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b66029ebb1df0d4d], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2a13af95313e31fb], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_441bf402e3163e36], a0.this$, a1.this$);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_1c981d4d60034262], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::compare(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_040e80419b131206], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_d2816b23bc3d7fb7], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_b802a207b48c5b56], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_3094b06c63a5265c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_431377fd2ff78c4a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_19b41a87a8ffac81], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2, const JArray< ::java::lang::Comparable > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_8af2b583da505146], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_53d8831c521a373f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_a6d97b700ddb8cb7], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compare(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_485d4f399dfda3f3], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_e2b43ba6885637ad], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_b444938e9c64511a], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_52cccf809ce95dd0], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_2a13af95313e31fb], a0.this$, a1.this$);
    }

    jint Arrays::compareUnsigned(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_040e80419b131206], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_431377fd2ff78c4a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_19b41a87a8ffac81], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::compareUnsigned(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_53d8831c521a373f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    JArray< jbyte > Arrays::copyOf(const JArray< jbyte > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_78d38a050501c17b], a0.this$, a1));
    }

    JArray< jchar > Arrays::copyOf(const JArray< jchar > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_118077fbb1b51e14], a0.this$, a1));
    }

    JArray< jdouble > Arrays::copyOf(const JArray< jdouble > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_25f286641019e8d7], a0.this$, a1));
    }

    JArray< jfloat > Arrays::copyOf(const JArray< jfloat > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_5c5585b2080db6bb], a0.this$, a1));
    }

    JArray< jint > Arrays::copyOf(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_52c3cc5dc5d9d7b0], a0.this$, a1));
    }

    JArray< jlong > Arrays::copyOf(const JArray< jlong > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_a914e653d9d39f7a], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_2d5fe1c1682f00b8], a0.this$, a1));
    }

    JArray< jshort > Arrays::copyOf(const JArray< jshort > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_d91ca074e7808ea0], a0.this$, a1));
    }

    JArray< jboolean > Arrays::copyOf(const JArray< jboolean > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_408bdc1eae61356d], a0.this$, a1));
    }

    JArray< ::java::lang::Object > Arrays::copyOf(const JArray< ::java::lang::Object > & a0, jint a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOf_5964053b8067b2a2], a0.this$, a1, a2.this$));
    }

    JArray< jbyte > Arrays::copyOfRange(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jbyte >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_0f0e374d153ef6b1], a0.this$, a1, a2));
    }

    JArray< jchar > Arrays::copyOfRange(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jchar >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_d97e26d937793687], a0.this$, a1, a2));
    }

    JArray< jdouble > Arrays::copyOfRange(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jdouble >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_8f6ddc643efefb02], a0.this$, a1, a2));
    }

    JArray< jfloat > Arrays::copyOfRange(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jfloat >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_dfb492ed53b4ebb6], a0.this$, a1, a2));
    }

    JArray< jint > Arrays::copyOfRange(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jint >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_50e2b2f516ae3aee], a0.this$, a1, a2));
    }

    JArray< jlong > Arrays::copyOfRange(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jlong >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_b5a7d8d533dd134b], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_c6e9b1846e385f51], a0.this$, a1, a2));
    }

    JArray< jshort > Arrays::copyOfRange(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jshort >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_8390753cf45bdf7b], a0.this$, a1, a2));
    }

    JArray< jboolean > Arrays::copyOfRange(const JArray< jboolean > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< jboolean >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_89949fd8c309ef39], a0.this$, a1, a2));
    }

    JArray< ::java::lang::Object > Arrays::copyOfRange(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Class & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::lang::Object >(env->callStaticObjectMethod(cls, mids$[mid_copyOfRange_710c73a094222c9a], a0.this$, a1, a2, a3.this$));
    }

    jboolean Arrays::deepEquals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_deepEquals_7942e72a75b53921], a0.this$, a1.this$);
    }

    jint Arrays::deepHashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_deepHashCode_9704dcff2884b80b], a0.this$);
    }

    ::java::lang::String Arrays::deepToString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_deepToString_71cc527176eb14c4], a0.this$));
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_7f0e96d531737149], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d6cb7b4faa93511c], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae9ef40b81aa3737], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_a03930c526253e6a], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f92b869f534c4ff0], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f0a71ca3a8bba19c], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_7942e72a75b53921], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_ae43abd99d1296a0], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_91de72cf16c23b35], a0.this$, a1.this$);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_9dca917f4ecf3dac], a0.this$, a1.this$, a2.this$);
    }

    jboolean Arrays::equals(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_478a0a9ca56d77d1], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_01ae3395de02023e], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_d6f5cb71f496d8bb], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_806bf53c13da87db], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_4086f425d97778c8], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_f8d7bcfb0e123252], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_858f3d5692852a1b], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_1f1b504789a7311c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_0a286de01e9aff56], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jboolean Arrays::equals(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_equals_5f6d33be87ba3e1f], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jboolean a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_a79539b72e2c3c9b], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jbyte a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ac2321aff018c47f], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jchar > & a0, jchar a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_7175625f4c54d6f6], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jdouble a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_19a01fdb4baa56b0], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_eb615a4b551f10d9], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_416314b5edbdc63c], a0.this$, a1);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_16b75c577a107ba8], a0.this$, a1.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_3e61b124a94ad6fc], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jshort > & a0, jshort a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_61884a4b3b6a91f5], a0.this$, a1);
    }

    void Arrays::fill(const JArray< jboolean > & a0, jint a1, jint a2, jboolean a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_6857340fc13492fb], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jbyte > & a0, jint a1, jint a2, jbyte a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_ef9ab799e597fc7d], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jchar > & a0, jint a1, jint a2, jchar a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_68b43331e8830fbe], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jdouble > & a0, jint a1, jint a2, jdouble a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_dd3e2c084106d4a1], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jfloat > & a0, jint a1, jint a2, jfloat a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_628cca4b23c73077], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jint > & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_b6bf6e6e61056d9c], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_a2547a7b9031aa51], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::fill(const JArray< jlong > & a0, jint a1, jint a2, jlong a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_46ced5b5681b09c6], a0.this$, a1, a2, a3);
    }

    void Arrays::fill(const JArray< jshort > & a0, jint a1, jint a2, jshort a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_3f6bccba271ced6e], a0.this$, a1, a2, a3);
    }

    jint Arrays::hashCode(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_89e14f411787412a], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_8ff26d6b29141036], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_0bbaa89e7f8976bd], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_15385381e09b1d6b], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_4c6a473f00540fd2], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_095143a0bd47aeb1], a0.this$);
    }

    jint Arrays::hashCode(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_9704dcff2884b80b], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_4f3642556613bb47], a0.this$);
    }

    jint Arrays::hashCode(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_1ef93d7549096ece], a0.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, const JArray< jbyte > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_e2b43ba6885637ad], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, const JArray< jchar > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_bd249e779a40941c], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, const JArray< jdouble > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_3bcc8d13f0d41c68], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, const JArray< jfloat > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_22c935b20fc999bb], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, const JArray< jint > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_b444938e9c64511a], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, const JArray< jlong > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_52cccf809ce95dd0], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_aaaad1f834437431], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, const JArray< jshort > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_2a13af95313e31fb], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, const JArray< jboolean > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_441bf402e3163e36], a0.this$, a1.this$);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, const JArray< ::java::lang::Object > & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_1c981d4d60034262], a0.this$, a1.this$, a2.this$);
    }

    jint Arrays::mismatch(const JArray< jbyte > & a0, jint a1, jint a2, const JArray< jbyte > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_040e80419b131206], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jchar > & a0, jint a1, jint a2, const JArray< jchar > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_d2816b23bc3d7fb7], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jdouble > & a0, jint a1, jint a2, const JArray< jdouble > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_b802a207b48c5b56], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jfloat > & a0, jint a1, jint a2, const JArray< jfloat > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_3094b06c63a5265c], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jint > & a0, jint a1, jint a2, const JArray< jint > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_431377fd2ff78c4a], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jlong > & a0, jint a1, jint a2, const JArray< jlong > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_19b41a87a8ffac81], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_535036ae3305f17d], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jshort > & a0, jint a1, jint a2, const JArray< jshort > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_53d8831c521a373f], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< jboolean > & a0, jint a1, jint a2, const JArray< jboolean > & a3, jint a4, jint a5)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_a6d97b700ddb8cb7], a0.this$, a1, a2, a3.this$, a4, a5);
    }

    jint Arrays::mismatch(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const JArray< ::java::lang::Object > & a3, jint a4, jint a5, const ::java::util::Comparator & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_mismatch_485d4f399dfda3f3], a0.this$, a1, a2, a3.this$, a4, a5, a6.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_bba2a19638de22ff], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_e22e96b35f4145e4], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_a71c45509eaf92d1], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_03eb90545fab7645], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d43202153dd284f7], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_22b2c2bc86e56cb0], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_3fafd6e61e36074b], a0.this$);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_f8328e41c109dcc9], a0.this$);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_6b02e78ec9b47ffa], a0.this$, a1.this$);
    }

    void Arrays::parallelSort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_6f10578448832e2a], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_40b495c766d36227], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_a75f0ad7db148908], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_9faac5a856899214], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_5878dd4fd67d78f9], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Comparable > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d3f3c19497a85287], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_298bfd39fb463626], a0.this$, a1, a2);
    }

    void Arrays::parallelSort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_parallelSort_d7441a2de0bb4c1d], a0.this$, a1, a2, a3.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_bba2a19638de22ff], a0.this$);
    }

    void Arrays::sort(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_e22e96b35f4145e4], a0.this$);
    }

    void Arrays::sort(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_a71c45509eaf92d1], a0.this$);
    }

    void Arrays::sort(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_03eb90545fab7645], a0.this$);
    }

    void Arrays::sort(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d43202153dd284f7], a0.this$);
    }

    void Arrays::sort(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_22b2c2bc86e56cb0], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_fc48e5166ee82e6b], a0.this$);
    }

    void Arrays::sort(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_f8328e41c109dcc9], a0.this$);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_6b02e78ec9b47ffa], a0.this$, a1.this$);
    }

    void Arrays::sort(const JArray< jbyte > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_e4288ba5fbf20d28], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jchar > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_6f10578448832e2a], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_40b495c766d36227], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jfloat > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_a75f0ad7db148908], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_9faac5a856899214], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_5878dd4fd67d78f9], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_0dbf9ee55f7adc62], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< jshort > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_298bfd39fb463626], a0.this$, a1, a2);
    }

    void Arrays::sort(const JArray< ::java::lang::Object > & a0, jint a1, jint a2, const ::java::util::Comparator & a3)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_d7441a2de0bb4c1d], a0.this$, a1, a2, a3.this$);
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_91fff06cc2f92cef], a0.this$));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_71eacbf339774afe], a0.this$));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_535ff33f3b9123f3], a0.this$));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_3f2b28c41cc65962], a0.this$));
    }

    ::java::util::Spliterator$OfDouble Arrays::spliterator(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfDouble(env->callStaticObjectMethod(cls, mids$[mid_spliterator_1e0c49b0e7e81c72], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfInt Arrays::spliterator(const JArray< jint > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfInt(env->callStaticObjectMethod(cls, mids$[mid_spliterator_2d7b874aef57ece6], a0.this$, a1, a2));
    }

    ::java::util::Spliterator$OfLong Arrays::spliterator(const JArray< jlong > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator$OfLong(env->callStaticObjectMethod(cls, mids$[mid_spliterator_818c76e75ad3b2bf], a0.this$, a1, a2));
    }

    ::java::util::Spliterator Arrays::spliterator(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Spliterator(env->callStaticObjectMethod(cls, mids$[mid_spliterator_f0719418bba1e334], a0.this$, a1, a2));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_6c41db567343fc7b], a0.this$));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_ea5d6111543a5047], a0.this$));
    }

    ::java::util::stream::DoubleStream Arrays::stream(const JArray< jdouble > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_stream_d46fe892de2300c1], a0.this$, a1, a2));
    }

    ::java::util::stream::Stream Arrays::stream(const JArray< ::java::lang::Object > & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::stream::Stream(env->callStaticObjectMethod(cls, mids$[mid_stream_30f47f2d950674cc], a0.this$, a1, a2));
    }

    ::java::lang::String Arrays::toString(const JArray< jbyte > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_70208d02e8800d4c], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jchar > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_8b7706fe569efa7c], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jdouble > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_fab3d5881f09253b], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jfloat > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_90aa1c4027ec27ae], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jint > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_c9e8e005aec406fb], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jlong > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_b74eead037cffbde], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_71cc527176eb14c4], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jshort > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_4472ecfaa1e833eb], a0.this$));
    }

    ::java::lang::String Arrays::toString(const JArray< jboolean > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_adf9409972df88b1], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args);
    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Arrays__methods_[] = {
      DECLARE_METHOD(t_Arrays, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, asList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOf, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, copyOfRange, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepEquals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepHashCode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, deepToString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Arrays, equals, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, hashCode, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, mismatch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, parallelSort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, spliterator, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, stream, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Arrays, toString, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Arrays)[] = {
      { Py_tp_methods, t_Arrays__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Arrays)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Arrays, t_Arrays, Arrays);

    void t_Arrays::install(PyObject *module)
    {
      installType(&PY_TYPE(Arrays), &PY_TYPE_DEF(Arrays), module, "Arrays", 0);
    }

    void t_Arrays::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "class_", make_descriptor(Arrays::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "wrapfn_", make_descriptor(t_Arrays::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Arrays), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Arrays_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Arrays::initializeClass, 1)))
        return NULL;
      return t_Arrays::wrap_Object(Arrays(((t_Arrays *) arg)->object.this$));
    }
    static PyObject *t_Arrays_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Arrays::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Arrays_asList(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::asList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asList", arg);
      return NULL;
    }

    static PyObject *t_Arrays_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;
          jint result;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;
          jint result;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;
          jint result;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;
          jint result;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint result;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;
          jint result;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;
          jint result;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[ooK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;
          jint result;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;
          jint result;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;
          jint result;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;
          jint result;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jint result;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;
          jint result;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;
          jint result;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 5:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);
          ::java::util::Comparator a4((jobject) NULL);
          PyTypeObject **p4;
          jint result;

          if (!parseArgs(args, "[oIIoK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::binarySearch(a0, a1, a2, a3, a4));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Arrays_compare(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::java::lang::Comparable > a1((jobject) NULL);
          PyTypeObject **p1;
          jint result;

          if (!parseArgs(args, "[K[K", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &p1, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::java::lang::Comparable > a3((jobject) NULL);
          PyTypeObject **p3;
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[KII[KII", ::java::lang::Comparable::initializeClass, ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2, &a3, &p3, ::java::lang::t_Comparable::parameters_, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::compare(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Arrays_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::compareUnsigned(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1));
            return result.wrap();
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          ::java::lang::Class a2((jobject) NULL);
          PyTypeObject **p2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &p2, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOf(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOf", args);
      return NULL;
    }

    static PyObject *t_Arrays_copyOfRange(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > result((jobject) NULL);

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > result((jobject) NULL);

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > result((jobject) NULL);

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > result((jobject) NULL);

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > result((jobject) NULL);

          if (!parseArgs(args, "[ZII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2));
            return result.wrap();
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Class a3((jobject) NULL);
          PyTypeObject **p3;
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[oIIK", ::java::lang::Class::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::lang::t_Class::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::copyOfRange(a0, a1, a2, a3));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      PyErr_SetArgsError(type, "copyOfRange", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepEquals(PyTypeObject *type, PyObject *args)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "[o[o", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepEquals(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "deepEquals", args);
      return NULL;
    }

    static PyObject *t_Arrays_deepHashCode(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepHashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "deepHashCode", arg);
      return NULL;
    }

    static PyObject *t_Arrays_deepToString(PyTypeObject *type, PyObject *arg)
    {
      JArray< ::java::lang::Object > a0((jobject) NULL);
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "[o", &a0))
      {
        OBJ_CALL(result = ::java::util::Arrays::deepToString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "deepToString", arg);
      return NULL;
    }

    static PyObject *t_Arrays_equals(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jboolean result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jboolean result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jboolean result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::equals(a0, a1, a2, a3, a4, a5, a6));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(type, "equals", args, 2);
    }

    static PyObject *t_Arrays_fill(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          jbyte a1;

          if (!parseArgs(args, "[BB", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jchar a1;

          if (!parseArgs(args, "[CC", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jfloat a1;

          if (!parseArgs(args, "[FF", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;

          if (!parseArgs(args, "[II", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jlong a1;

          if (!parseArgs(args, "[JJ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "[oo", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jshort a1;

          if (!parseArgs(args, "[SS", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jboolean a1;

          if (!parseArgs(args, "[ZZ", &a0, &a1))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jbyte a3;

          if (!parseArgs(args, "[BIIB", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          jchar a3;

          if (!parseArgs(args, "[CIIC", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "[DIID", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          jfloat a3;

          if (!parseArgs(args, "[FIIF", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;

          if (!parseArgs(args, "[IIII", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          jlong a3;

          if (!parseArgs(args, "[JIIJ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::lang::Object a3((jobject) NULL);

          if (!parseArgs(args, "[oIIo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          jshort a3;

          if (!parseArgs(args, "[SIIS", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          jboolean a3;

          if (!parseArgs(args, "[ZIIZ", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::java::util::Arrays::fill(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Arrays_hashCode(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::hashCode(a0));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(type, "hashCode", args, 2);
    }

    static PyObject *t_Arrays_mismatch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jbyte > a0((jobject) NULL);
          JArray< jbyte > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B[B", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          JArray< jchar > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[C[C", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          JArray< jfloat > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[F[F", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          JArray< jint > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[I[I", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[o[o", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          JArray< jshort > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[S[S", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          JArray< jboolean > a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[Z[Z", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "[o[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 6:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jbyte > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[BII[BII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jchar > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[CII[CII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jdouble > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[DII[DII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jfloat > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[FII[FII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jint > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[III[III", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jlong > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[JII[JII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[oII[oII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jshort > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[SII[SII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< jboolean > a3((jobject) NULL);
          jint a4;
          jint a5;
          jint result;

          if (!parseArgs(args, "[ZII[ZII", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 7:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          JArray< ::java::lang::Object > a3((jobject) NULL);
          jint a4;
          jint a5;
          ::java::util::Comparator a6((jobject) NULL);
          PyTypeObject **p6;
          jint result;

          if (!parseArgs(args, "[oII[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Arrays::mismatch(a0, a1, a2, a3, a4, a5, a6));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "mismatch", args);
      return NULL;
    }

    static PyObject *t_Arrays_parallelSort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "[K", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Comparable > a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;

          if (!parseArgs(args, "[KII", ::java::lang::Comparable::initializeClass, &a0, &p0, ::java::lang::t_Comparable::parameters_, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::parallelSort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "parallelSort", args);
      return NULL;
    }

    static PyObject *t_Arrays_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[oK", ::java::util::Comparator::initializeClass, &a0, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[CII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[FII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[SII", &a0, &a1, &a2))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
        break;
       case 4:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Comparator a3((jobject) NULL);
          PyTypeObject **p3;

          if (!parseArgs(args, "[oIIK", ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &p3, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Arrays::sort(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Arrays_spliterator(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfDouble result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfInt result((jobject) NULL);

          if (!parseArgs(args, "[III", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfInt::wrap_Object(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator$OfLong result((jobject) NULL);

          if (!parseArgs(args, "[JII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator$OfLong::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::Spliterator result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::spliterator(a0, a1, a2));
            return ::java::util::t_Spliterator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "spliterator", args);
      return NULL;
    }

    static PyObject *t_Arrays_stream(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          JArray< jdouble > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::DoubleStream result((jobject) NULL);

          if (!parseArgs(args, "[DII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_DoubleStream::wrap_Object(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          jint a1;
          jint a2;
          ::java::util::stream::Stream result((jobject) NULL);

          if (!parseArgs(args, "[oII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Arrays::stream(a0, a1, a2));
            return ::java::util::stream::t_Stream::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "stream", args);
      return NULL;
    }

    static PyObject *t_Arrays_toString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jchar > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[C", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jdouble > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jfloat > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[F", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jint > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[I", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jlong > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[J", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jshort > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[S", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
        {
          JArray< jboolean > a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "[Z", &a0))
          {
            OBJ_CALL(result = ::java::util::Arrays::toString(a0));
            return j2p(result);
          }
        }
      }

      return callSuper(type, "toString", args, 2);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/SignalCode.h"
#include "org/orekit/gnss/ObservationType.h"
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
          mids$[mid_getFrequency_4ed6e66577d34d61] = env->getMethodID(cls, "getFrequency", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/gnss/Frequency;");
          mids$[mid_getMeasurementType_0c31fda13b2c1960] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
          mids$[mid_getSignalCode_9c91ddd954949465] = env->getMethodID(cls, "getSignalCode", "()Lorg/orekit/gnss/SignalCode;");
          mids$[mid_valueOf_be5bc086d790ae47] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/ObservationType;");
          mids$[mid_values_821406dca9be187b] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/ObservationType;");

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
        return ::org::orekit::gnss::Frequency(env->callObjectMethod(this$, mids$[mid_getFrequency_4ed6e66577d34d61], a0.this$));
      }

      ::org::orekit::gnss::MeasurementType ObservationType::getMeasurementType() const
      {
        return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_0c31fda13b2c1960]));
      }

      ::org::orekit::gnss::SignalCode ObservationType::getSignalCode() const
      {
        return ::org::orekit::gnss::SignalCode(env->callObjectMethod(this$, mids$[mid_getSignalCode_9c91ddd954949465]));
      }

      ObservationType ObservationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ObservationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_be5bc086d790ae47], a0.this$));
      }

      JArray< ObservationType > ObservationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ObservationType >(env->callStaticObjectMethod(cls, mids$[mid_values_821406dca9be187b]));
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
#include "org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {
        namespace gauss {

          ::java::lang::Class *SymmetricFieldGaussIntegrator::class$ = NULL;
          jmethodID *SymmetricFieldGaussIntegrator::mids$ = NULL;
          bool SymmetricFieldGaussIntegrator::live$ = false;

          jclass SymmetricFieldGaussIntegrator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/gauss/SymmetricFieldGaussIntegrator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b0e5b4ae04bc40a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/util/Pair;)V");
              mids$[mid_init$_7709cb51638b2622] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_integrate_16aa2ca93d2ce662] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const ::org::hipparchus::util::Pair & a0) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_b0e5b4ae04bc40a1, a0.this$)) {}

          SymmetricFieldGaussIntegrator::SymmetricFieldGaussIntegrator(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) : ::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator(env->newObject(initializeClass, &mids$, mid_init$_7709cb51638b2622, a0.this$, a1.this$)) {}

          ::org::hipparchus::CalculusFieldElement SymmetricFieldGaussIntegrator::integrate(const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_16aa2ca93d2ce662], a0.this$));
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
    namespace analysis {
      namespace integration {
        namespace gauss {
          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args);
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data);
          static PyGetSetDef t_SymmetricFieldGaussIntegrator__fields_[] = {
            DECLARE_GET_FIELD(t_SymmetricFieldGaussIntegrator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SymmetricFieldGaussIntegrator__methods_[] = {
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, of_, METH_VARARGS),
            DECLARE_METHOD(t_SymmetricFieldGaussIntegrator, integrate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SymmetricFieldGaussIntegrator)[] = {
            { Py_tp_methods, t_SymmetricFieldGaussIntegrator__methods_ },
            { Py_tp_init, (void *) t_SymmetricFieldGaussIntegrator_init_ },
            { Py_tp_getset, t_SymmetricFieldGaussIntegrator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SymmetricFieldGaussIntegrator)[] = {
            &PY_TYPE_DEF(::org::hipparchus::analysis::integration::gauss::FieldGaussIntegrator),
            NULL
          };

          DEFINE_TYPE(SymmetricFieldGaussIntegrator, t_SymmetricFieldGaussIntegrator, SymmetricFieldGaussIntegrator);
          PyObject *t_SymmetricFieldGaussIntegrator::wrap_Object(const SymmetricFieldGaussIntegrator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SymmetricFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SymmetricFieldGaussIntegrator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SymmetricFieldGaussIntegrator *self = (t_SymmetricFieldGaussIntegrator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SymmetricFieldGaussIntegrator::install(PyObject *module)
          {
            installType(&PY_TYPE(SymmetricFieldGaussIntegrator), &PY_TYPE_DEF(SymmetricFieldGaussIntegrator), module, "SymmetricFieldGaussIntegrator", 0);
          }

          void t_SymmetricFieldGaussIntegrator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "class_", make_descriptor(SymmetricFieldGaussIntegrator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "wrapfn_", make_descriptor(t_SymmetricFieldGaussIntegrator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SymmetricFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 1)))
              return NULL;
            return t_SymmetricFieldGaussIntegrator::wrap_Object(SymmetricFieldGaussIntegrator(((t_SymmetricFieldGaussIntegrator *) arg)->object.this$));
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SymmetricFieldGaussIntegrator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SymmetricFieldGaussIntegrator_of_(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SymmetricFieldGaussIntegrator_init_(t_SymmetricFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::util::Pair a0((jobject) NULL);
                PyTypeObject **p0;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::util::Pair::initializeClass, &a0, &p0, ::org::hipparchus::util::t_Pair::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                SymmetricFieldGaussIntegrator object((jobject) NULL);

                if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  INT_CALL(object = SymmetricFieldGaussIntegrator(a0, a1));
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

          static PyObject *t_SymmetricFieldGaussIntegrator_integrate(t_SymmetricFieldGaussIntegrator *self, PyObject *args)
          {
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, &a0, &p0, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SymmetricFieldGaussIntegrator), (PyObject *) self, "integrate", args, 2);
          }
          static PyObject *t_SymmetricFieldGaussIntegrator_get__parameters_(t_SymmetricFieldGaussIntegrator *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *RandomPercentile::class$ = NULL;
          jmethodID *RandomPercentile::mids$ = NULL;
          bool RandomPercentile::live$ = false;
          jdouble RandomPercentile::DEFAULT_EPSILON = (jdouble) 0;

          jclass RandomPercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/RandomPercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_e24b125c6ff6cc8c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_init$_b5a4975c915c365a] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_aggregate_78833ceb074ae402] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_8a647207efee9b27] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;");
              mids$[mid_evaluate_4f42c7a8793320e4] = env->getMethodID(cls, "evaluate", "(D[D)D");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_cc1eeb8fd17c9a9b] = env->getMethodID(cls, "evaluate", "(D[DII)D");
              mids$[mid_getAggregateN_ce4bc28a12afbddc] = env->getMethodID(cls, "getAggregateN", "(Ljava/util/Collection;)D");
              mids$[mid_getAggregateQuantileRank_d4294c336668ec62] = env->getMethodID(cls, "getAggregateQuantileRank", "(DLjava/util/Collection;)D");
              mids$[mid_getAggregateRank_d4294c336668ec62] = env->getMethodID(cls, "getAggregateRank", "(DLjava/util/Collection;)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantileRank_bf28ed64d6e8576b] = env->getMethodID(cls, "getQuantileRank", "(D)D");
              mids$[mid_getRank_bf28ed64d6e8576b] = env->getMethodID(cls, "getRank", "(D)D");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_getResult_bf28ed64d6e8576b] = env->getMethodID(cls, "getResult", "(D)D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_maxValuesRetained_6883df933d8a0182] = env->getStaticMethodID(cls, "maxValuesRetained", "(D)J");
              mids$[mid_reduce_d4294c336668ec62] = env->getMethodID(cls, "reduce", "(DLjava/util/Collection;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RandomPercentile::RandomPercentile() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          RandomPercentile::RandomPercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          RandomPercentile::RandomPercentile(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_e24b125c6ff6cc8c, a0.this$)) {}

          RandomPercentile::RandomPercentile(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_b5a4975c915c365a, a0, a1.this$)) {}

          void RandomPercentile::aggregate(const RandomPercentile & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_78833ceb074ae402], a0.this$);
          }

          void RandomPercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          RandomPercentile RandomPercentile::copy() const
          {
            return RandomPercentile(env->callObjectMethod(this$, mids$[mid_copy_8a647207efee9b27]));
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_4f42c7a8793320e4], a0, a1.this$);
          }

          jdouble RandomPercentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_cc1eeb8fd17c9a9b], a0, a1.this$, a2, a3);
          }

          jdouble RandomPercentile::getAggregateN(const ::java::util::Collection & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateN_ce4bc28a12afbddc], a0.this$);
          }

          jdouble RandomPercentile::getAggregateQuantileRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateQuantileRank_d4294c336668ec62], a0, a1.this$);
          }

          jdouble RandomPercentile::getAggregateRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateRank_d4294c336668ec62], a0, a1.this$);
          }

          jlong RandomPercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble RandomPercentile::getQuantileRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantileRank_bf28ed64d6e8576b], a0);
          }

          jdouble RandomPercentile::getRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRank_bf28ed64d6e8576b], a0);
          }

          jdouble RandomPercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          jdouble RandomPercentile::getResult(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_bf28ed64d6e8576b], a0);
          }

          void RandomPercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
          }

          jlong RandomPercentile::maxValuesRetained(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticLongMethod(cls, mids$[mid_maxValuesRetained_6883df933d8a0182], a0);
          }

          jdouble RandomPercentile::reduce(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_reduce_d4294c336668ec62], a0, a1.this$);
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
    namespace stat {
      namespace descriptive {
        namespace rank {
          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data);
          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data);
          static PyGetSetDef t_RandomPercentile__fields_[] = {
            DECLARE_GET_FIELD(t_RandomPercentile, n),
            DECLARE_GET_FIELD(t_RandomPercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RandomPercentile__methods_[] = {
            DECLARE_METHOD(t_RandomPercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, aggregate, METH_O),
            DECLARE_METHOD(t_RandomPercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateN, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getAggregateQuantileRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getQuantileRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, maxValuesRetained, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, reduce, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RandomPercentile)[] = {
            { Py_tp_methods, t_RandomPercentile__methods_ },
            { Py_tp_init, (void *) t_RandomPercentile_init_ },
            { Py_tp_getset, t_RandomPercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RandomPercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(RandomPercentile, t_RandomPercentile, RandomPercentile);

          void t_RandomPercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(RandomPercentile), &PY_TYPE_DEF(RandomPercentile), module, "RandomPercentile", 0);
          }

          void t_RandomPercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "class_", make_descriptor(RandomPercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "wrapfn_", make_descriptor(t_RandomPercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "boxfn_", make_descriptor(boxObject));
            env->getClass(RandomPercentile::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "DEFAULT_EPSILON", make_descriptor(RandomPercentile::DEFAULT_EPSILON));
          }

          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RandomPercentile::initializeClass, 1)))
              return NULL;
            return t_RandomPercentile::wrap_Object(RandomPercentile(((t_RandomPercentile *) arg)->object.this$));
          }
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RandomPercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RandomPercentile object((jobject) NULL);

                INT_CALL(object = RandomPercentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RandomPercentile(a0, a1));
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

          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg)
          {
            RandomPercentile a0((jobject) NULL);

            if (!parseArg(arg, "k", RandomPercentile::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args)
          {
            RandomPercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_RandomPercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "D[D", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                JArray< jdouble > a0((jobject) NULL);
                jint a1;
                jint a2;
                jdouble result;

                if (!parseArgs(args, "[DII", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 4:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateN(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateN", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateQuantileRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateQuantileRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getQuantileRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getQuantileRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getResult());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getResult(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            jlong result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::RandomPercentile::maxValuesRetained(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError(type, "maxValuesRetained", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.reduce(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "reduce", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *HessenbergTransformer::class$ = NULL;
      jmethodID *HessenbergTransformer::mids$ = NULL;
      bool HessenbergTransformer::live$ = false;

      jclass HessenbergTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/HessenbergTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getH_b2eebabce70526d8] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_b2eebabce70526d8] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_b2eebabce70526d8] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HessenbergTransformer::HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_b2eebabce70526d8]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_b2eebabce70526d8]));
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
      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data);
      static PyGetSetDef t_HessenbergTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_HessenbergTransformer, h),
        DECLARE_GET_FIELD(t_HessenbergTransformer, p),
        DECLARE_GET_FIELD(t_HessenbergTransformer, pT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HessenbergTransformer__methods_[] = {
        DECLARE_METHOD(t_HessenbergTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, getH, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getPT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HessenbergTransformer)[] = {
        { Py_tp_methods, t_HessenbergTransformer__methods_ },
        { Py_tp_init, (void *) t_HessenbergTransformer_init_ },
        { Py_tp_getset, t_HessenbergTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HessenbergTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HessenbergTransformer, t_HessenbergTransformer, HessenbergTransformer);

      void t_HessenbergTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(HessenbergTransformer), &PY_TYPE_DEF(HessenbergTransformer), module, "HessenbergTransformer", 0);
      }

      void t_HessenbergTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "class_", make_descriptor(HessenbergTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "wrapfn_", make_descriptor(t_HessenbergTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HessenbergTransformer::initializeClass, 1)))
          return NULL;
        return t_HessenbergTransformer::wrap_Object(HessenbergTransformer(((t_HessenbergTransformer *) arg)->object.this$));
      }
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HessenbergTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        HessenbergTransformer object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = HessenbergTransformer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/MultistepIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *MultistepIntegrator::class$ = NULL;
      jmethodID *MultistepIntegrator::mids$ = NULL;
      bool MultistepIntegrator::live$ = false;

      jclass MultistepIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/MultistepIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxGrowth_9981f74b2d109da6] = env->getMethodID(cls, "getMaxGrowth", "()D");
          mids$[mid_getMinReduction_9981f74b2d109da6] = env->getMethodID(cls, "getMinReduction", "()D");
          mids$[mid_getNSteps_d6ab429752e7c267] = env->getMethodID(cls, "getNSteps", "()I");
          mids$[mid_getSafety_9981f74b2d109da6] = env->getMethodID(cls, "getSafety", "()D");
          mids$[mid_getStarterIntegrator_5f35958883823593] = env->getMethodID(cls, "getStarterIntegrator", "()Lorg/hipparchus/ode/ODEIntegrator;");
          mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxGrowth", "(D)V");
          mids$[mid_setMinReduction_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinReduction", "(D)V");
          mids$[mid_setSafety_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSafety", "(D)V");
          mids$[mid_setStarterIntegrator_c17d99cd56eae8b6] = env->getMethodID(cls, "setStarterIntegrator", "(Lorg/hipparchus/ode/ODEIntegrator;)V");
          mids$[mid_initializeHighOrderDerivatives_7145db39e893543c] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_computeStepGrowShrinkFactor_bf28ed64d6e8576b] = env->getMethodID(cls, "computeStepGrowShrinkFactor", "(D)D");
          mids$[mid_rescale_1ad26e8c8c0cd65b] = env->getMethodID(cls, "rescale", "(D)V");
          mids$[mid_start_237738985099ffb3] = env->getMethodID(cls, "start", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultistepIntegrator::getMaxGrowth() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxGrowth_9981f74b2d109da6]);
      }

      jdouble MultistepIntegrator::getMinReduction() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinReduction_9981f74b2d109da6]);
      }

      jint MultistepIntegrator::getNSteps() const
      {
        return env->callIntMethod(this$, mids$[mid_getNSteps_d6ab429752e7c267]);
      }

      jdouble MultistepIntegrator::getSafety() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getSafety_9981f74b2d109da6]);
      }

      ::org::hipparchus::ode::ODEIntegrator MultistepIntegrator::getStarterIntegrator() const
      {
        return ::org::hipparchus::ode::ODEIntegrator(env->callObjectMethod(this$, mids$[mid_getStarterIntegrator_5f35958883823593]));
      }

      void MultistepIntegrator::setMaxGrowth(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxGrowth_1ad26e8c8c0cd65b], a0);
      }

      void MultistepIntegrator::setMinReduction(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinReduction_1ad26e8c8c0cd65b], a0);
      }

      void MultistepIntegrator::setSafety(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSafety_1ad26e8c8c0cd65b], a0);
      }

      void MultistepIntegrator::setStarterIntegrator(const ::org::hipparchus::ode::ODEIntegrator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setStarterIntegrator_c17d99cd56eae8b6], a0.this$);
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
      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self);
      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg);
      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data);
      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data);
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data);
      static PyGetSetDef t_MultistepIntegrator__fields_[] = {
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, maxGrowth),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, minReduction),
        DECLARE_GET_FIELD(t_MultistepIntegrator, nSteps),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, safety),
        DECLARE_GETSET_FIELD(t_MultistepIntegrator, starterIntegrator),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultistepIntegrator__methods_[] = {
        DECLARE_METHOD(t_MultistepIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultistepIntegrator, getMaxGrowth, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getMinReduction, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getNSteps, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getSafety, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, getStarterIntegrator, METH_NOARGS),
        DECLARE_METHOD(t_MultistepIntegrator, setMaxGrowth, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setMinReduction, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setSafety, METH_O),
        DECLARE_METHOD(t_MultistepIntegrator, setStarterIntegrator, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultistepIntegrator)[] = {
        { Py_tp_methods, t_MultistepIntegrator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultistepIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultistepIntegrator)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeIntegrator),
        NULL
      };

      DEFINE_TYPE(MultistepIntegrator, t_MultistepIntegrator, MultistepIntegrator);

      void t_MultistepIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(MultistepIntegrator), &PY_TYPE_DEF(MultistepIntegrator), module, "MultistepIntegrator", 0);
      }

      void t_MultistepIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "class_", make_descriptor(MultistepIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "wrapfn_", make_descriptor(t_MultistepIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultistepIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultistepIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultistepIntegrator::initializeClass, 1)))
          return NULL;
        return t_MultistepIntegrator::wrap_Object(MultistepIntegrator(((t_MultistepIntegrator *) arg)->object.this$));
      }
      static PyObject *t_MultistepIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultistepIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultistepIntegrator_getMaxGrowth(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getMinReduction(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinReduction());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getNSteps(t_MultistepIntegrator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNSteps());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultistepIntegrator_getSafety(t_MultistepIntegrator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getSafety());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_MultistepIntegrator_getStarterIntegrator(t_MultistepIntegrator *self)
      {
        ::org::hipparchus::ode::ODEIntegrator result((jobject) NULL);
        OBJ_CALL(result = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(result);
      }

      static PyObject *t_MultistepIntegrator_setMaxGrowth(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setMinReduction(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setSafety(t_MultistepIntegrator *self, PyObject *arg)
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

      static PyObject *t_MultistepIntegrator_setStarterIntegrator(t_MultistepIntegrator *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEIntegrator a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setStarterIntegrator(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setStarterIntegrator", arg);
        return NULL;
      }

      static PyObject *t_MultistepIntegrator_get__maxGrowth(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxGrowth());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__maxGrowth(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__minReduction(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinReduction());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__minReduction(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__nSteps(t_MultistepIntegrator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNSteps());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_MultistepIntegrator_get__safety(t_MultistepIntegrator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getSafety());
        return PyFloat_FromDouble((double) value);
      }
      static int t_MultistepIntegrator_set__safety(t_MultistepIntegrator *self, PyObject *arg, void *data)
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

      static PyObject *t_MultistepIntegrator_get__starterIntegrator(t_MultistepIntegrator *self, void *data)
      {
        ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
        OBJ_CALL(value = self->object.getStarterIntegrator());
        return ::org::hipparchus::ode::t_ODEIntegrator::wrap_Object(value);
      }
      static int t_MultistepIntegrator_set__starterIntegrator(t_MultistepIntegrator *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEIntegrator value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEIntegrator::initializeClass, &value))
          {
            INT_CALL(self->object.setStarterIntegrator(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "starterIntegrator", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *ExtendedEllipsoid::class$ = NULL;
        jmethodID *ExtendedEllipsoid::mids$ = NULL;
        bool ExtendedEllipsoid::live$ = false;

        jclass ExtendedEllipsoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/ExtendedEllipsoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ba4696e0d7f6f24b] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
            mids$[mid_convertLos_ff0107f3aab86815] = env->getMethodID(cls, "convertLos", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_convertLos_57f9586225dba278] = env->getMethodID(cls, "convertLos", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtAltitude_ccc9d16c585df973] = env->getMethodID(cls, "pointAtAltitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLatitude_bf8a82e242a36557] = env->getMethodID(cls, "pointAtLatitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointAtLongitude_ccc9d16c585df973] = env->getMethodID(cls, "pointAtLongitude", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pointOnGround_1f1579012f15cefb] = env->getMethodID(cls, "pointOnGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_transform_0bfc32b1890053a9] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transform_52f3336802c12846] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
            mids$[mid_transform_a573c8f647ddca05] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtendedEllipsoid::ExtendedEllipsoid(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::org::orekit::bodies::OneAxisEllipsoid(env->newObject(initializeClass, &mids$, mid_init$_ba4696e0d7f6f24b, a0, a1, a2.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_ff0107f3aab86815], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::convertLos(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_convertLos_57f9586225dba278], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtAltitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtAltitude_ccc9d16c585df973], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLatitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLatitude_bf8a82e242a36557], a0.this$, a1.this$, a2, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::pointAtLongitude(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAtLongitude_ccc9d16c585df973], a0.this$, a1.this$, a2));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::pointOnGround(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_pointOnGround_1f1579012f15cefb], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D ExtendedEllipsoid::transform(const ::org::orekit::bodies::GeodeticPoint & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transform_0bfc32b1890053a9], a0.this$));
        }

        ::org::orekit::bodies::GeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2) const
        {
          return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_52f3336802c12846], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint ExtendedEllipsoid::transform(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_transform_a573c8f647ddca05], a0.this$, a1.this$, a2.this$, a3));
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
        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args);
        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args);

        static PyMethodDef t_ExtendedEllipsoid__methods_[] = {
          DECLARE_METHOD(t_ExtendedEllipsoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtendedEllipsoid, convertLos, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtAltitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLatitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointAtLongitude, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, pointOnGround, METH_VARARGS),
          DECLARE_METHOD(t_ExtendedEllipsoid, transform, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtendedEllipsoid)[] = {
          { Py_tp_methods, t_ExtendedEllipsoid__methods_ },
          { Py_tp_init, (void *) t_ExtendedEllipsoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtendedEllipsoid)[] = {
          &PY_TYPE_DEF(::org::orekit::bodies::OneAxisEllipsoid),
          NULL
        };

        DEFINE_TYPE(ExtendedEllipsoid, t_ExtendedEllipsoid, ExtendedEllipsoid);

        void t_ExtendedEllipsoid::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtendedEllipsoid), &PY_TYPE_DEF(ExtendedEllipsoid), module, "ExtendedEllipsoid", 0);
        }

        void t_ExtendedEllipsoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "class_", make_descriptor(ExtendedEllipsoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "wrapfn_", make_descriptor(t_ExtendedEllipsoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedEllipsoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtendedEllipsoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtendedEllipsoid::initializeClass, 1)))
            return NULL;
          return t_ExtendedEllipsoid::wrap_Object(ExtendedEllipsoid(((t_ExtendedEllipsoid *) arg)->object.this$));
        }
        static PyObject *t_ExtendedEllipsoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtendedEllipsoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ExtendedEllipsoid_init_(t_ExtendedEllipsoid *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          ExtendedEllipsoid object((jobject) NULL);

          if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = ExtendedEllipsoid(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtendedEllipsoid_convertLos(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.convertLos(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "convertLos", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtAltitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtAltitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtAltitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLatitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.pointAtLatitude(a0, a1, a2, a3));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLatitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointAtLongitude(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointAtLongitude(a0, a1, a2));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointAtLongitude", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_pointOnGround(t_ExtendedEllipsoid *self, PyObject *args)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.pointOnGround(a0, a1, a2));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "pointOnGround", args);
          return NULL;
        }

        static PyObject *t_ExtendedEllipsoid_transform(t_ExtendedEllipsoid *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
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
            break;
           case 4:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble a3;
              ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.transform(a0, a1, a2, a3));
                return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(ExtendedEllipsoid), (PyObject *) self, "transform", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractMessageParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "org/orekit/files/ccsds/utils/parsing/ProcessingState.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *AbstractMessageParser::class$ = NULL;
            jmethodID *AbstractMessageParser::mids$ = NULL;
            bool AbstractMessageParser::live$ = false;

            jclass AbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/AbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_anticipateNext_df22f5836a72eed0] = env->getMethodID(cls, "anticipateNext", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_getCurrent_47fa4026cdb6bd6b] = env->getMethodID(cls, "getCurrent", "()Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;");
                mids$[mid_getFileFormat_49975b0867f6c97c] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getFormatVersionKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getFormatVersionKey", "()Ljava/lang/String;");
                mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                mids$[mid_parseMessage_7927c1c0838e396d] = env->getMethodID(cls, "parseMessage", "(Lorg/orekit/data/DataSource;)Ljava/lang/Object;");
                mids$[mid_process_db9439a3eec594be] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;)V");
                mids$[mid_setEndTagSeen_b35db77cae58639e] = env->getMethodID(cls, "setEndTagSeen", "(Z)V");
                mids$[mid_setFallback_df22f5836a72eed0] = env->getMethodID(cls, "setFallback", "(Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");
                mids$[mid_wasEndTagSeen_eee3de00fe971136] = env->getMethodID(cls, "wasEndTagSeen", "()Z");
                mids$[mid_reset_32b4342bd69ebf7d] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;Lorg/orekit/files/ccsds/utils/parsing/ProcessingState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void AbstractMessageParser::anticipateNext(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_anticipateNext_df22f5836a72eed0], a0.this$);
            }

            ::org::orekit::files::ccsds::utils::parsing::ProcessingState AbstractMessageParser::getCurrent() const
            {
              return ::org::orekit::files::ccsds::utils::parsing::ProcessingState(env->callObjectMethod(this$, mids$[mid_getCurrent_47fa4026cdb6bd6b]));
            }

            ::org::orekit::files::ccsds::utils::FileFormat AbstractMessageParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_49975b0867f6c97c]));
            }

            ::java::lang::String AbstractMessageParser::getFormatVersionKey() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFormatVersionKey_d2c8eb4129821f0e]));
            }

            ::java::util::Map AbstractMessageParser::getSpecialXmlElementsBuilders() const
            {
              return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_dbcb8bbac6b35e0d]));
            }

            ::java::lang::Object AbstractMessageParser::parseMessage(const ::org::orekit::data::DataSource & a0) const
            {
              return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_parseMessage_7927c1c0838e396d], a0.this$));
            }

            void AbstractMessageParser::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_process_db9439a3eec594be], a0.this$);
            }

            void AbstractMessageParser::setEndTagSeen(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEndTagSeen_b35db77cae58639e], a0);
            }

            void AbstractMessageParser::setFallback(const ::org::orekit::files::ccsds::utils::parsing::ProcessingState & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFallback_df22f5836a72eed0], a0.this$);
            }

            jboolean AbstractMessageParser::wasEndTagSeen() const
            {
              return env->callBooleanMethod(this$, mids$[mid_wasEndTagSeen_eee3de00fe971136]);
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
          namespace parsing {
            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args);
            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg);
            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self);
            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data);
            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data);
            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data);
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data);
            static PyGetSetDef t_AbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractMessageParser, current),
              DECLARE_SET_FIELD(t_AbstractMessageParser, endTagSeen),
              DECLARE_SET_FIELD(t_AbstractMessageParser, fallback),
              DECLARE_GET_FIELD(t_AbstractMessageParser, fileFormat),
              DECLARE_GET_FIELD(t_AbstractMessageParser, formatVersionKey),
              DECLARE_GET_FIELD(t_AbstractMessageParser, specialXmlElementsBuilders),
              DECLARE_GET_FIELD(t_AbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_AbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_AbstractMessageParser, anticipateNext, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, getCurrent, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFileFormat, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getFormatVersionKey, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, getSpecialXmlElementsBuilders, METH_NOARGS),
              DECLARE_METHOD(t_AbstractMessageParser, parseMessage, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, process, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setEndTagSeen, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, setFallback, METH_O),
              DECLARE_METHOD(t_AbstractMessageParser, wasEndTagSeen, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractMessageParser)[] = {
              { Py_tp_methods, t_AbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractMessageParser)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractMessageParser, t_AbstractMessageParser, AbstractMessageParser);
            PyObject *t_AbstractMessageParser::wrap_Object(const AbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AbstractMessageParser *self = (t_AbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractMessageParser), &PY_TYPE_DEF(AbstractMessageParser), module, "AbstractMessageParser", 0);
            }

            void t_AbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "class_", make_descriptor(AbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "wrapfn_", make_descriptor(t_AbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMessageParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_AbstractMessageParser::wrap_Object(AbstractMessageParser(((t_AbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_AbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractMessageParser_of_(t_AbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AbstractMessageParser_anticipateNext(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.anticipateNext(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "anticipateNext", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_getCurrent(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState result((jobject) NULL);
              OBJ_CALL(result = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFileFormat(t_AbstractMessageParser *self)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);
              OBJ_CALL(result = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
            }

            static PyObject *t_AbstractMessageParser_getFormatVersionKey(t_AbstractMessageParser *self)
            {
              ::java::lang::String result((jobject) NULL);
              OBJ_CALL(result = self->object.getFormatVersionKey());
              return j2p(result);
            }

            static PyObject *t_AbstractMessageParser_getSpecialXmlElementsBuilders(t_AbstractMessageParser *self)
            {
              ::java::util::Map result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            static PyObject *t_AbstractMessageParser_parseMessage(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::data::DataSource a0((jobject) NULL);
              ::java::lang::Object result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parseMessage(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parseMessage", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_process(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, &a0))
              {
                OBJ_CALL(self->object.process(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "process", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setEndTagSeen(t_AbstractMessageParser *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setEndTagSeen(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEndTagSeen", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_setFallback(t_AbstractMessageParser *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFallback(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFallback", arg);
              return NULL;
            }

            static PyObject *t_AbstractMessageParser_wasEndTagSeen(t_AbstractMessageParser *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.wasEndTagSeen());
              Py_RETURN_BOOL(result);
            }
            static PyObject *t_AbstractMessageParser_get__parameters_(t_AbstractMessageParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_AbstractMessageParser_get__current(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
              OBJ_CALL(value = self->object.getCurrent());
              return ::org::orekit::files::ccsds::utils::parsing::t_ProcessingState::wrap_Object(value);
            }

            static int t_AbstractMessageParser_set__endTagSeen(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setEndTagSeen(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "endTagSeen", arg);
              return -1;
            }

            static int t_AbstractMessageParser_set__fallback(t_AbstractMessageParser *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::utils::parsing::ProcessingState value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::utils::parsing::ProcessingState::initializeClass, &value))
                {
                  INT_CALL(self->object.setFallback(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fallback", arg);
              return -1;
            }

            static PyObject *t_AbstractMessageParser_get__fileFormat(t_AbstractMessageParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static PyObject *t_AbstractMessageParser_get__formatVersionKey(t_AbstractMessageParser *self, void *data)
            {
              ::java::lang::String value((jobject) NULL);
              OBJ_CALL(value = self->object.getFormatVersionKey());
              return j2p(value);
            }

            static PyObject *t_AbstractMessageParser_get__specialXmlElementsBuilders(t_AbstractMessageParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldJacobiTheta::class$ = NULL;
          jmethodID *FieldJacobiTheta::mids$ = NULL;
          bool FieldJacobiTheta::live$ = false;

          jclass FieldJacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldJacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f63ca9e3185c722e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_getQ_08d37e3f77b7239d] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_values_59b61282cec9fb96] = env->getMethodID(cls, "values", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldTheta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldJacobiTheta::FieldJacobiTheta(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f63ca9e3185c722e, a0.this$)) {}

          ::org::hipparchus::CalculusFieldElement FieldJacobiTheta::getQ() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getQ_08d37e3f77b7239d]));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldTheta FieldJacobiTheta::values(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::FieldTheta(env->callObjectMethod(this$, mids$[mid_values_59b61282cec9fb96], a0.this$));
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
          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args);
          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self);
          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg);
          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data);
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data);
          static PyGetSetDef t_FieldJacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldJacobiTheta, q),
            DECLARE_GET_FIELD(t_FieldJacobiTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldJacobiTheta__methods_[] = {
            DECLARE_METHOD(t_FieldJacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldJacobiTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_FieldJacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldJacobiTheta)[] = {
            { Py_tp_methods, t_FieldJacobiTheta__methods_ },
            { Py_tp_init, (void *) t_FieldJacobiTheta_init_ },
            { Py_tp_getset, t_FieldJacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldJacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldJacobiTheta, t_FieldJacobiTheta, FieldJacobiTheta);
          PyObject *t_FieldJacobiTheta::wrap_Object(const FieldJacobiTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldJacobiTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldJacobiTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldJacobiTheta *self = (t_FieldJacobiTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldJacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldJacobiTheta), &PY_TYPE_DEF(FieldJacobiTheta), module, "FieldJacobiTheta", 0);
          }

          void t_FieldJacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "class_", make_descriptor(FieldJacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "wrapfn_", make_descriptor(t_FieldJacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldJacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldJacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldJacobiTheta::initializeClass, 1)))
              return NULL;
            return t_FieldJacobiTheta::wrap_Object(FieldJacobiTheta(((t_FieldJacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldJacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldJacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldJacobiTheta_of_(t_FieldJacobiTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldJacobiTheta_init_(t_FieldJacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldJacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldJacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldJacobiTheta_getQ(t_FieldJacobiTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.getQ());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldJacobiTheta_values(t_FieldJacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::special::elliptic::jacobi::FieldTheta result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_FieldTheta::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }
          static PyObject *t_FieldJacobiTheta_get__parameters_(t_FieldJacobiTheta *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldJacobiTheta_get__q(t_FieldJacobiTheta *self, void *data)
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            OBJ_CALL(value = self->object.getQ());
            return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *GroundOptimizationProblemBuilder::class$ = NULL;
        jmethodID *GroundOptimizationProblemBuilder::mids$ = NULL;
        bool GroundOptimizationProblemBuilder::live$ = false;

        jclass GroundOptimizationProblemBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/GroundOptimizationProblemBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_68f8199f5a6d5879] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Lorg/orekit/rugged/adjustment/measurements/Observables;Lorg/orekit/rugged/api/Rugged;)V");
            mids$[mid_build_fabe1e3047de884e] = env->getMethodID(cls, "build", "(ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
            mids$[mid_createTargetAndWeight_ff7cb6c242604316] = env->getMethodID(cls, "createTargetAndWeight", "()V");
            mids$[mid_initMapping_ff7cb6c242604316] = env->getMethodID(cls, "initMapping", "()V");
            mids$[mid_createFunction_b9638c47db64ddc7] = env->getMethodID(cls, "createFunction", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundOptimizationProblemBuilder::GroundOptimizationProblemBuilder(const ::java::util::List & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1, const ::org::orekit::rugged::api::Rugged & a2) : ::org::orekit::rugged::adjustment::OptimizationProblemBuilder(env->newObject(initializeClass, &mids$, mid_init$_68f8199f5a6d5879, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem GroundOptimizationProblemBuilder::build(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_fabe1e3047de884e], a0, a1));
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
        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args);

        static PyMethodDef t_GroundOptimizationProblemBuilder__methods_[] = {
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundOptimizationProblemBuilder, build, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundOptimizationProblemBuilder)[] = {
          { Py_tp_methods, t_GroundOptimizationProblemBuilder__methods_ },
          { Py_tp_init, (void *) t_GroundOptimizationProblemBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundOptimizationProblemBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::adjustment::OptimizationProblemBuilder),
          NULL
        };

        DEFINE_TYPE(GroundOptimizationProblemBuilder, t_GroundOptimizationProblemBuilder, GroundOptimizationProblemBuilder);

        void t_GroundOptimizationProblemBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundOptimizationProblemBuilder), &PY_TYPE_DEF(GroundOptimizationProblemBuilder), module, "GroundOptimizationProblemBuilder", 0);
        }

        void t_GroundOptimizationProblemBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "class_", make_descriptor(GroundOptimizationProblemBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "wrapfn_", make_descriptor(t_GroundOptimizationProblemBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundOptimizationProblemBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GroundOptimizationProblemBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 1)))
            return NULL;
          return t_GroundOptimizationProblemBuilder::wrap_Object(GroundOptimizationProblemBuilder(((t_GroundOptimizationProblemBuilder *) arg)->object.this$));
        }
        static PyObject *t_GroundOptimizationProblemBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundOptimizationProblemBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GroundOptimizationProblemBuilder_init_(t_GroundOptimizationProblemBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          ::org::orekit::rugged::api::Rugged a2((jobject) NULL);
          GroundOptimizationProblemBuilder object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::java::util::List::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, ::org::orekit::rugged::api::Rugged::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
          {
            INT_CALL(object = GroundOptimizationProblemBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundOptimizationProblemBuilder_build(t_GroundOptimizationProblemBuilder *self, PyObject *args)
        {
          jint a0;
          jdouble a1;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = self->object.build(a0, a1));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
          }

          return callSuper(PY_TYPE(GroundOptimizationProblemBuilder), (PyObject *) self, "build", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/UniformIntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *UniformIntegerDistribution::class$ = NULL;
        jmethodID *UniformIntegerDistribution::mids$ = NULL;
        bool UniformIntegerDistribution::live$ = false;

        jclass UniformIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/UniformIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b5d23e6c0858e8ed] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_cumulativeProbability_ce4c02d583456bc9] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_d6ab429752e7c267] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_ce4c02d583456bc9] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UniformIntegerDistribution::UniformIntegerDistribution(jint a0, jint a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_b5d23e6c0858e8ed, a0, a1)) {}

        jdouble UniformIntegerDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_ce4c02d583456bc9], a0);
        }

        jdouble UniformIntegerDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble UniformIntegerDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jint UniformIntegerDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_d6ab429752e7c267]);
        }

        jint UniformIntegerDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_d6ab429752e7c267]);
        }

        jboolean UniformIntegerDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble UniformIntegerDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_ce4c02d583456bc9], a0);
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
        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args);
        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data);
        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data);
        static PyGetSetDef t_UniformIntegerDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalMean),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportConnected),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_UniformIntegerDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UniformIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_UniformIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UniformIntegerDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_UniformIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UniformIntegerDistribution)[] = {
          { Py_tp_methods, t_UniformIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_UniformIntegerDistribution_init_ },
          { Py_tp_getset, t_UniformIntegerDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UniformIntegerDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(UniformIntegerDistribution, t_UniformIntegerDistribution, UniformIntegerDistribution);

        void t_UniformIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(UniformIntegerDistribution), &PY_TYPE_DEF(UniformIntegerDistribution), module, "UniformIntegerDistribution", 0);
        }

        void t_UniformIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "class_", make_descriptor(UniformIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "wrapfn_", make_descriptor(t_UniformIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UniformIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UniformIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UniformIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_UniformIntegerDistribution::wrap_Object(UniformIntegerDistribution(((t_UniformIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_UniformIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UniformIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UniformIntegerDistribution_init_(t_UniformIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          UniformIntegerDistribution object((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            INT_CALL(object = UniformIntegerDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_UniformIntegerDistribution_cumulativeProbability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalMean(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getNumericalVariance(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportLowerBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_getSupportUpperBound(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_isSupportConnected(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_probability(t_UniformIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(UniformIntegerDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalMean(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__numericalVariance(t_UniformIntegerDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportConnected(t_UniformIntegerDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportLowerBound(t_UniformIntegerDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_UniformIntegerDistribution_get__supportUpperBound(t_UniformIntegerDistribution *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dcbb005903c9a2a8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_closestPoint_99a30a324f9c6beb] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_contains_decdc24b3aebe77a] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_3897d5a2b6732a0d] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)D");
              mids$[mid_distance_78c2296af19efe37] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_fromDirection_e3d528c31be14ab0] = env->getStaticMethodID(cls, "fromDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getAbscissa_78c2296af19efe37] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDirection_032312bdeb3f2f93] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOrigin_032312bdeb3f2f93] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_99a30a324f9c6beb] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_750b97eefc752f09] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Z");
              mids$[mid_pointAt_98a3eeef43dce47a] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_reset_c8e9682f0daaca68] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revert_9d5e1fb92f24d9b0] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_toSpace_7b74ee30f4dffb8d] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_8e71f2ea9c6b3602] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_8868fe0c3fe0aa37] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_0184a754d67728b4] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_wholeLine_e40b4add07b3fcc3] = env->getMethodID(cls, "wholeLine", "()Lorg/hipparchus/geometry/euclidean/threed/SubLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcbb005903c9a2a8, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::closestPoint(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_99a30a324f9c6beb], a0.this$));
          }

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_decdc24b3aebe77a], a0.this$);
          }

          jdouble Line::distance(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_3897d5a2b6732a0d], a0.this$);
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_78c2296af19efe37], a0.this$);
          }

          Line Line::fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return Line(env->callStaticObjectMethod(cls, mids$[mid_fromDirection_e3d528c31be14ab0], a0.this$, a1.this$, a2));
          }

          jdouble Line::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAbscissa_78c2296af19efe37], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_032312bdeb3f2f93]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_032312bdeb3f2f93]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_9981f74b2d109da6]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_99a30a324f9c6beb], a0.this$));
          }

          jboolean Line::isSimilarTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_750b97eefc752f09], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_98a3eeef43dce47a], a0));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_c8e9682f0daaca68], a0.this$, a1.this$);
          }

          Line Line::revert() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_revert_9d5e1fb92f24d9b0]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_7b74ee30f4dffb8d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_8e71f2ea9c6b3602], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_8868fe0c3fe0aa37], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_0184a754d67728b4], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubLine Line::wholeLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubLine(env->callObjectMethod(this$, mids$[mid_wholeLine_e40b4add07b3fcc3]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_distance(t_Line *self, PyObject *args);
          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg);
          static PyObject *t_Line_getDirection(t_Line *self);
          static PyObject *t_Line_getOrigin(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revert(t_Line *self);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_wholeLine(t_Line *self);
          static PyObject *t_Line_get__direction(t_Line *self, void *data);
          static PyObject *t_Line_get__origin(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GET_FIELD(t_Line, direction),
            DECLARE_GET_FIELD(t_Line, origin),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, closestPoint, METH_O),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, distance, METH_VARARGS),
            DECLARE_METHOD(t_Line, fromDirection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, getAbscissa, METH_O),
            DECLARE_METHOD(t_Line, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Line, pointAt, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revert, METH_NOARGS),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, wholeLine, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Line)[] = {
            { Py_tp_methods, t_Line__methods_ },
            { Py_tp_init, (void *) t_Line_init_ },
            { Py_tp_getset, t_Line__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Line)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Line, t_Line, Line);

          void t_Line::install(PyObject *module)
          {
            installType(&PY_TYPE(Line), &PY_TYPE_DEF(Line), module, "Line", 0);
          }

          void t_Line::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "class_", make_descriptor(Line::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "wrapfn_", make_descriptor(t_Line::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Line), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Line::initializeClass, 1)))
              return NULL;
            return t_Line::wrap_Object(Line(((t_Line *) arg)->object.this$));
          }
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Line::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Line(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Line::fromDirection(a0, a1, a2));
              return t_Line::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "fromDirection", args);
            return NULL;
          }

          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAbscissa(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", arg);
            return NULL;
          }

          static PyObject *t_Line_getDirection(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getOrigin(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.pointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revert(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Line_wholeLine(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_get__direction(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__origin(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__tolerance(t_Line *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *GradientMultivariateOptimizer::class$ = NULL;
          jmethodID *GradientMultivariateOptimizer::mids$ = NULL;
          bool GradientMultivariateOptimizer::live$ = false;

          jclass GradientMultivariateOptimizer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/GradientMultivariateOptimizer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
              mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
              mids$[mid_computeObjectiveGradient_51f624c89851da7e] = env->getMethodID(cls, "computeObjectiveGradient", "([D)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::optim::PointValuePair GradientMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
          {
            return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
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
          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args);
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data);
          static PyGetSetDef t_GradientMultivariateOptimizer__fields_[] = {
            DECLARE_GET_FIELD(t_GradientMultivariateOptimizer, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GradientMultivariateOptimizer__methods_[] = {
            DECLARE_METHOD(t_GradientMultivariateOptimizer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, of_, METH_VARARGS),
            DECLARE_METHOD(t_GradientMultivariateOptimizer, optimize, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GradientMultivariateOptimizer)[] = {
            { Py_tp_methods, t_GradientMultivariateOptimizer__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_GradientMultivariateOptimizer__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GradientMultivariateOptimizer)[] = {
            &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
            NULL
          };

          DEFINE_TYPE(GradientMultivariateOptimizer, t_GradientMultivariateOptimizer, GradientMultivariateOptimizer);
          PyObject *t_GradientMultivariateOptimizer::wrap_Object(const GradientMultivariateOptimizer& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_GradientMultivariateOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_GradientMultivariateOptimizer::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_GradientMultivariateOptimizer *self = (t_GradientMultivariateOptimizer *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_GradientMultivariateOptimizer::install(PyObject *module)
          {
            installType(&PY_TYPE(GradientMultivariateOptimizer), &PY_TYPE_DEF(GradientMultivariateOptimizer), module, "GradientMultivariateOptimizer", 0);
          }

          void t_GradientMultivariateOptimizer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "class_", make_descriptor(GradientMultivariateOptimizer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "wrapfn_", make_descriptor(t_GradientMultivariateOptimizer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GradientMultivariateOptimizer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GradientMultivariateOptimizer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GradientMultivariateOptimizer::initializeClass, 1)))
              return NULL;
            return t_GradientMultivariateOptimizer::wrap_Object(GradientMultivariateOptimizer(((t_GradientMultivariateOptimizer *) arg)->object.this$));
          }
          static PyObject *t_GradientMultivariateOptimizer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GradientMultivariateOptimizer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GradientMultivariateOptimizer_of_(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_GradientMultivariateOptimizer_optimize(t_GradientMultivariateOptimizer *self, PyObject *args)
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
            }

            return callSuper(PY_TYPE(GradientMultivariateOptimizer), (PyObject *) self, "optimize", args, 2);
          }
          static PyObject *t_GradientMultivariateOptimizer_get__parameters_(t_GradientMultivariateOptimizer *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/Observation.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *Observation::class$ = NULL;
            jmethodID *Observation::mids$ = NULL;
            bool Observation::live$ = false;

            jclass Observation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/Observation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4de65b6441f7309e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;Lorg/orekit/time/AbsoluteDate;D)V");
                mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getMeasurement_9981f74b2d109da6] = env->getMethodID(cls, "getMeasurement", "()D");
                mids$[mid_getType_c4e3574689aecbbb] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/ndm/tdm/ObservationType;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Observation::Observation(const ::org::orekit::files::ccsds::ndm::tdm::ObservationType & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4de65b6441f7309e, a0.this$, a1.this$, a2)) {}

            ::org::orekit::time::AbsoluteDate Observation::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
            }

            jdouble Observation::getMeasurement() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeasurement_9981f74b2d109da6]);
            }

            ::org::orekit::files::ccsds::ndm::tdm::ObservationType Observation::getType() const
            {
              return ::org::orekit::files::ccsds::ndm::tdm::ObservationType(env->callObjectMethod(this$, mids$[mid_getType_c4e3574689aecbbb]));
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
          namespace tdm {
            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg);
            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Observation_getEpoch(t_Observation *self);
            static PyObject *t_Observation_getMeasurement(t_Observation *self);
            static PyObject *t_Observation_getType(t_Observation *self);
            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data);
            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data);
            static PyObject *t_Observation_get__type(t_Observation *self, void *data);
            static PyGetSetDef t_Observation__fields_[] = {
              DECLARE_GET_FIELD(t_Observation, epoch),
              DECLARE_GET_FIELD(t_Observation, measurement),
              DECLARE_GET_FIELD(t_Observation, type),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Observation__methods_[] = {
              DECLARE_METHOD(t_Observation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Observation, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getMeasurement, METH_NOARGS),
              DECLARE_METHOD(t_Observation, getType, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Observation)[] = {
              { Py_tp_methods, t_Observation__methods_ },
              { Py_tp_init, (void *) t_Observation_init_ },
              { Py_tp_getset, t_Observation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Observation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Observation, t_Observation, Observation);

            void t_Observation::install(PyObject *module)
            {
              installType(&PY_TYPE(Observation), &PY_TYPE_DEF(Observation), module, "Observation", 0);
            }

            void t_Observation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "class_", make_descriptor(Observation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "wrapfn_", make_descriptor(t_Observation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Observation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Observation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Observation::initializeClass, 1)))
                return NULL;
              return t_Observation::wrap_Object(Observation(((t_Observation *) arg)->object.this$));
            }
            static PyObject *t_Observation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Observation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_Observation_init_(t_Observation *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              jdouble a2;
              Observation object((jobject) NULL);

              if (!parseArgs(args, "KkD", ::org::orekit::files::ccsds::ndm::tdm::ObservationType::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::parameters_, &a1, &a2))
              {
                INT_CALL(object = Observation(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Observation_getEpoch(t_Observation *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_Observation_getMeasurement(t_Observation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeasurement());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_Observation_getType(t_Observation *self)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType result((jobject) NULL);
              OBJ_CALL(result = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(result);
            }

            static PyObject *t_Observation_get__epoch(t_Observation *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_Observation_get__measurement(t_Observation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeasurement());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_Observation_get__type(t_Observation *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::tdm::ObservationType value((jobject) NULL);
              OBJ_CALL(value = self->object.getType());
              return ::org::orekit::files::ccsds::ndm::tdm::t_ObservationType::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
