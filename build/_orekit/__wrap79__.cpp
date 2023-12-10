#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedInternalError.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
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
            mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
            mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedInternalError::RuggedInternalError(const ::java::lang::Throwable & a0) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

        ::java::lang::String RuggedInternalError::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
        }

        ::java::lang::String RuggedInternalError::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
        }

        ::java::lang::String RuggedInternalError::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedInternalError::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
        }

        ::org::hipparchus::exception::Localizable RuggedInternalError::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase$Status.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *EstimatedMeasurementBase::class$ = NULL;
        jmethodID *EstimatedMeasurementBase::mids$ = NULL;
        bool EstimatedMeasurementBase::live$ = false;

        jclass EstimatedMeasurementBase::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/EstimatedMeasurementBase");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d1c2fb63ea99e1e6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;II[Lorg/orekit/propagation/SpacecraftState;[Lorg/orekit/utils/TimeStampedPVCoordinates;)V");
            mids$[mid_getCount_570ce0828f81a2c1] = env->getMethodID(cls, "getCount", "()I");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEstimatedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getEstimatedValue", "()[D");
            mids$[mid_getIteration_570ce0828f81a2c1] = env->getMethodID(cls, "getIteration", "()I");
            mids$[mid_getObservedMeasurement_744f33e0abf11bf9] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getObservedValue_60c7040667a7dc5c] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParticipants_2c08433c0c18552f] = env->getMethodID(cls, "getParticipants", "()[Lorg/orekit/utils/TimeStampedPVCoordinates;");
            mids$[mid_getStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getStatus_7c948ae3415a4366] = env->getMethodID(cls, "getStatus", "()Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;");
            mids$[mid_getTimeOffset_dff5885c2c873297] = env->getMethodID(cls, "getTimeOffset", "()D");
            mids$[mid_setEstimatedValue_fa9d415d19f69361] = env->getMethodID(cls, "setEstimatedValue", "([D)V");
            mids$[mid_setStatus_6b1c7f370d471bab] = env->getMethodID(cls, "setStatus", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase$Status;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EstimatedMeasurementBase::EstimatedMeasurementBase(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, jint a1, jint a2, const JArray< ::org::orekit::propagation::SpacecraftState > & a3, const JArray< ::org::orekit::utils::TimeStampedPVCoordinates > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1c2fb63ea99e1e6, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        jint EstimatedMeasurementBase::getCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getCount_570ce0828f81a2c1]);
        }

        ::org::orekit::time::AbsoluteDate EstimatedMeasurementBase::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getEstimatedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEstimatedValue_60c7040667a7dc5c]));
        }

        jint EstimatedMeasurementBase::getIteration() const
        {
          return env->callIntMethod(this$, mids$[mid_getIteration_570ce0828f81a2c1]);
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement EstimatedMeasurementBase::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_744f33e0abf11bf9]));
        }

        JArray< jdouble > EstimatedMeasurementBase::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_60c7040667a7dc5c]));
        }

        JArray< ::org::orekit::utils::TimeStampedPVCoordinates > EstimatedMeasurementBase::getParticipants() const
        {
          return JArray< ::org::orekit::utils::TimeStampedPVCoordinates >(env->callObjectMethod(this$, mids$[mid_getParticipants_2c08433c0c18552f]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > EstimatedMeasurementBase::getStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status EstimatedMeasurementBase::getStatus() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status(env->callObjectMethod(this$, mids$[mid_getStatus_7c948ae3415a4366]));
        }

        jdouble EstimatedMeasurementBase::getTimeOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTimeOffset_dff5885c2c873297]);
        }

        void EstimatedMeasurementBase::setEstimatedValue(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEstimatedValue_fa9d415d19f69361], a0.this$);
        }

        void EstimatedMeasurementBase::setStatus(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStatus_6b1c7f370d471bab], a0.this$);
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
        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args);
        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self);
        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg);
        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data);
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data);
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data);
        static PyGetSetDef t_EstimatedMeasurementBase__fields_[] = {
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, count),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, date),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, estimatedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, iteration),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedMeasurement),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, observedValue),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, participants),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, states),
          DECLARE_GETSET_FIELD(t_EstimatedMeasurementBase, status),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, timeOffset),
          DECLARE_GET_FIELD(t_EstimatedMeasurementBase, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EstimatedMeasurementBase__methods_[] = {
          DECLARE_METHOD(t_EstimatedMeasurementBase, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, of_, METH_VARARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getCount, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getDate, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getEstimatedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getIteration, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getParticipants, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStates, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getStatus, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, getTimeOffset, METH_NOARGS),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setEstimatedValue, METH_O),
          DECLARE_METHOD(t_EstimatedMeasurementBase, setStatus, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EstimatedMeasurementBase)[] = {
          { Py_tp_methods, t_EstimatedMeasurementBase__methods_ },
          { Py_tp_init, (void *) t_EstimatedMeasurementBase_init_ },
          { Py_tp_getset, t_EstimatedMeasurementBase__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EstimatedMeasurementBase)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EstimatedMeasurementBase, t_EstimatedMeasurementBase, EstimatedMeasurementBase);
        PyObject *t_EstimatedMeasurementBase::wrap_Object(const EstimatedMeasurementBase& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EstimatedMeasurementBase::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EstimatedMeasurementBase::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EstimatedMeasurementBase *self = (t_EstimatedMeasurementBase *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EstimatedMeasurementBase::install(PyObject *module)
        {
          installType(&PY_TYPE(EstimatedMeasurementBase), &PY_TYPE_DEF(EstimatedMeasurementBase), module, "EstimatedMeasurementBase", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "Status", make_descriptor(&PY_TYPE_DEF(EstimatedMeasurementBase$Status)));
        }

        void t_EstimatedMeasurementBase::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "class_", make_descriptor(EstimatedMeasurementBase::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "wrapfn_", make_descriptor(t_EstimatedMeasurementBase::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EstimatedMeasurementBase), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EstimatedMeasurementBase_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EstimatedMeasurementBase::initializeClass, 1)))
            return NULL;
          return t_EstimatedMeasurementBase::wrap_Object(EstimatedMeasurementBase(((t_EstimatedMeasurementBase *) arg)->object.this$));
        }
        static PyObject *t_EstimatedMeasurementBase_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EstimatedMeasurementBase::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EstimatedMeasurementBase_of_(t_EstimatedMeasurementBase *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EstimatedMeasurementBase_init_(t_EstimatedMeasurementBase *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          JArray< ::org::orekit::propagation::SpacecraftState > a3((jobject) NULL);
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > a4((jobject) NULL);
          EstimatedMeasurementBase object((jobject) NULL);

          if (!parseArgs(args, "KII[k[k", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = EstimatedMeasurementBase(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EstimatedMeasurementBase_getCount(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getDate(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getEstimatedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getIteration(t_EstimatedMeasurementBase *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIteration());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedMeasurement(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getObservedValue(t_EstimatedMeasurementBase *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_getParticipants(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParticipants());
          return JArray<jobject>(result.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStates(t_EstimatedMeasurementBase *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_getStatus(t_EstimatedMeasurementBase *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status result((jobject) NULL);
          OBJ_CALL(result = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(result);
        }

        static PyObject *t_EstimatedMeasurementBase_getTimeOffset(t_EstimatedMeasurementBase *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EstimatedMeasurementBase_setEstimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(self->object.setEstimatedValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEstimatedValue", arg);
          return NULL;
        }

        static PyObject *t_EstimatedMeasurementBase_setStatus(t_EstimatedMeasurementBase *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::parameters_))
          {
            OBJ_CALL(self->object.setStatus(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStatus", arg);
          return NULL;
        }
        static PyObject *t_EstimatedMeasurementBase_get__parameters_(t_EstimatedMeasurementBase *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EstimatedMeasurementBase_get__count(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__date(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__estimatedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedValue());
          return value.wrap();
        }
        static int t_EstimatedMeasurementBase_set__estimatedValue(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            JArray< jdouble > value((jobject) NULL);
            if (!parseArg(arg, "[D", &value))
            {
              INT_CALL(self->object.setEstimatedValue(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "estimatedValue", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__iteration(t_EstimatedMeasurementBase *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIteration());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedMeasurement(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_EstimatedMeasurementBase_get__observedValue(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_EstimatedMeasurementBase_get__participants(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::utils::TimeStampedPVCoordinates > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParticipants());
          return JArray<jobject>(value.this$).wrap(::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__states(t_EstimatedMeasurementBase *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_EstimatedMeasurementBase_get__status(t_EstimatedMeasurementBase *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
          OBJ_CALL(value = self->object.getStatus());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase$Status::wrap_Object(value);
        }
        static int t_EstimatedMeasurementBase_set__status(t_EstimatedMeasurementBase *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::measurements::EstimatedMeasurementBase$Status::initializeClass, &value))
            {
              INT_CALL(self->object.setStatus(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "status", arg);
          return -1;
        }

        static PyObject *t_EstimatedMeasurementBase_get__timeOffset(t_EstimatedMeasurementBase *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTimeOffset());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/GaussianRandomGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *GaussianRandomGenerator::class$ = NULL;
      jmethodID *GaussianRandomGenerator::mids$ = NULL;
      bool GaussianRandomGenerator::live$ = false;

      jclass GaussianRandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/GaussianRandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextNormalizedDouble_dff5885c2c873297] = env->getMethodID(cls, "nextNormalizedDouble", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GaussianRandomGenerator::GaussianRandomGenerator(const ::org::hipparchus::random::RandomGenerator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

      jdouble GaussianRandomGenerator::nextNormalizedDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextNormalizedDouble_dff5885c2c873297]);
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
      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self);

      static PyMethodDef t_GaussianRandomGenerator__methods_[] = {
        DECLARE_METHOD(t_GaussianRandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GaussianRandomGenerator, nextNormalizedDouble, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GaussianRandomGenerator)[] = {
        { Py_tp_methods, t_GaussianRandomGenerator__methods_ },
        { Py_tp_init, (void *) t_GaussianRandomGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GaussianRandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GaussianRandomGenerator, t_GaussianRandomGenerator, GaussianRandomGenerator);

      void t_GaussianRandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(GaussianRandomGenerator), &PY_TYPE_DEF(GaussianRandomGenerator), module, "GaussianRandomGenerator", 0);
      }

      void t_GaussianRandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "class_", make_descriptor(GaussianRandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "wrapfn_", make_descriptor(t_GaussianRandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GaussianRandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GaussianRandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GaussianRandomGenerator::initializeClass, 1)))
          return NULL;
        return t_GaussianRandomGenerator::wrap_Object(GaussianRandomGenerator(((t_GaussianRandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_GaussianRandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GaussianRandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GaussianRandomGenerator_init_(t_GaussianRandomGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
        GaussianRandomGenerator object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
        {
          INT_CALL(object = GaussianRandomGenerator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_GaussianRandomGenerator_nextNormalizedDouble(t_GaussianRandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextNormalizedDouble());
        return PyFloat_FromDouble((double) result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/RuntimeException.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *RuntimeException::class$ = NULL;
    jmethodID *RuntimeException::mids$ = NULL;
    bool RuntimeException::live$ = false;

    jclass RuntimeException::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/RuntimeException");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_98504698e8b85a67] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;)V");
        mids$[mid_init$_884e3b5778514e73] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    RuntimeException::RuntimeException() : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::Throwable & a0) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_98504698e8b85a67, a0.this$)) {}

    RuntimeException::RuntimeException(const ::java::lang::String & a0, const ::java::lang::Throwable & a1) : ::java::lang::Exception(env->newObject(initializeClass, &mids$, mid_init$_884e3b5778514e73, a0.this$, a1.this$)) {}
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg);
    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds);

    static PyMethodDef t_RuntimeException__methods_[] = {
      DECLARE_METHOD(t_RuntimeException, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_RuntimeException, instance_, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(RuntimeException)[] = {
      { Py_tp_methods, t_RuntimeException__methods_ },
      { Py_tp_init, (void *) t_RuntimeException_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(RuntimeException)[] = {
      &PY_TYPE_DEF(::java::lang::Exception),
      NULL
    };

    DEFINE_TYPE(RuntimeException, t_RuntimeException, RuntimeException);

    void t_RuntimeException::install(PyObject *module)
    {
      installType(&PY_TYPE(RuntimeException), &PY_TYPE_DEF(RuntimeException), module, "RuntimeException", 0);
    }

    void t_RuntimeException::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "class_", make_descriptor(RuntimeException::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "wrapfn_", make_descriptor(t_RuntimeException::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(RuntimeException), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_RuntimeException_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, RuntimeException::initializeClass, 1)))
        return NULL;
      return t_RuntimeException::wrap_Object(RuntimeException(((t_RuntimeException *) arg)->object.this$));
    }
    static PyObject *t_RuntimeException_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, RuntimeException::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_RuntimeException_init_(t_RuntimeException *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          RuntimeException object((jobject) NULL);

          INT_CALL(object = RuntimeException());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::Throwable a0((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::lang::Throwable::initializeClass, &a0))
          {
            INT_CALL(object = RuntimeException(a0));
            self->object = object;
            break;
          }
        }
        goto err;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::Throwable a1((jobject) NULL);
          RuntimeException object((jobject) NULL);

          if (!parseArgs(args, "sk", ::java::lang::Throwable::initializeClass, &a0, &a1))
          {
            INT_CALL(object = RuntimeException(a0, a1));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdapterDetector::class$ = NULL;
        jmethodID *AdapterDetector::mids$ = NULL;
        bool AdapterDetector::live$ = false;

        jclass AdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_efb7003d866d4523] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_d73bb985ffde4156] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getHandler_551c102e543538fd] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_35e5947e4e8f061c] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_dff5885c2c873297] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterDetector::AdapterDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_efb7003d866d4523, a0.this$)) {}

        jdouble AdapterDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector AdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d73bb985ffde4156]));
        }

        ::org::orekit::propagation::events::handlers::EventHandler AdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_551c102e543538fd]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_35e5947e4e8f061c]));
        }

        jint AdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        jdouble AdapterDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_dff5885c2c873297]);
        }

        void AdapterDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg);
        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args);
        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data);
        static PyGetSetDef t_AdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterDetector, detector),
          DECLARE_GET_FIELD(t_AdapterDetector, handler),
          DECLARE_GET_FIELD(t_AdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AdapterDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterDetector__methods_[] = {
          DECLARE_METHOD(t_AdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, g, METH_O),
          DECLARE_METHOD(t_AdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterDetector)[] = {
          { Py_tp_methods, t_AdapterDetector__methods_ },
          { Py_tp_init, (void *) t_AdapterDetector_init_ },
          { Py_tp_getset, t_AdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterDetector, t_AdapterDetector, AdapterDetector);

        void t_AdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterDetector), &PY_TYPE_DEF(AdapterDetector), module, "AdapterDetector", 0);
        }

        void t_AdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "class_", make_descriptor(AdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "wrapfn_", make_descriptor(t_AdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterDetector::initializeClass, 1)))
            return NULL;
          return t_AdapterDetector::wrap_Object(AdapterDetector(((t_AdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          AdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = AdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args)
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

        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/ProperBigFractionFormat.h"
#include "org/hipparchus/fraction/BigFraction.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *ProperBigFractionFormat::class$ = NULL;
      jmethodID *ProperBigFractionFormat::mids$ = NULL;
      bool ProperBigFractionFormat::live$ = false;

      jclass ProperBigFractionFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/ProperBigFractionFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_256f36a22c0d0f55] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
          mids$[mid_init$_2af517d7a6ef01c6] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;Ljava/text/NumberFormat;Ljava/text/NumberFormat;)V");
          mids$[mid_format_848518009c5606f2] = env->getMethodID(cls, "format", "(Lorg/hipparchus/fraction/BigFraction;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getWholeFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getWholeFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_parse_7ca853134336de7b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/fraction/BigFraction;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ProperBigFractionFormat::ProperBigFractionFormat() : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_256f36a22c0d0f55, a0.this$)) {}

      ProperBigFractionFormat::ProperBigFractionFormat(const ::java::text::NumberFormat & a0, const ::java::text::NumberFormat & a1, const ::java::text::NumberFormat & a2) : ::org::hipparchus::fraction::BigFractionFormat(env->newObject(initializeClass, &mids$, mid_init$_2af517d7a6ef01c6, a0.this$, a1.this$, a2.this$)) {}

      ::java::lang::StringBuffer ProperBigFractionFormat::format(const ::org::hipparchus::fraction::BigFraction & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_848518009c5606f2], a0.this$, a1.this$, a2.this$));
      }

      ::java::text::NumberFormat ProperBigFractionFormat::getWholeFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getWholeFormat_24f83dea4a8657b1]));
      }

      ::org::hipparchus::fraction::BigFraction ProperBigFractionFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::fraction::BigFraction(env->callObjectMethod(this$, mids$[mid_parse_7ca853134336de7b], a0.this$, a1.this$));
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
      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self);
      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args);
      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data);
      static PyGetSetDef t_ProperBigFractionFormat__fields_[] = {
        DECLARE_GET_FIELD(t_ProperBigFractionFormat, wholeFormat),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ProperBigFractionFormat__methods_[] = {
        DECLARE_METHOD(t_ProperBigFractionFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ProperBigFractionFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, getWholeFormat, METH_NOARGS),
        DECLARE_METHOD(t_ProperBigFractionFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ProperBigFractionFormat)[] = {
        { Py_tp_methods, t_ProperBigFractionFormat__methods_ },
        { Py_tp_init, (void *) t_ProperBigFractionFormat_init_ },
        { Py_tp_getset, t_ProperBigFractionFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ProperBigFractionFormat)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fraction::BigFractionFormat),
        NULL
      };

      DEFINE_TYPE(ProperBigFractionFormat, t_ProperBigFractionFormat, ProperBigFractionFormat);

      void t_ProperBigFractionFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(ProperBigFractionFormat), &PY_TYPE_DEF(ProperBigFractionFormat), module, "ProperBigFractionFormat", 0);
      }

      void t_ProperBigFractionFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "class_", make_descriptor(ProperBigFractionFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "wrapfn_", make_descriptor(t_ProperBigFractionFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ProperBigFractionFormat), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ProperBigFractionFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ProperBigFractionFormat::initializeClass, 1)))
          return NULL;
        return t_ProperBigFractionFormat::wrap_Object(ProperBigFractionFormat(((t_ProperBigFractionFormat *) arg)->object.this$));
      }
      static PyObject *t_ProperBigFractionFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ProperBigFractionFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ProperBigFractionFormat_init_(t_ProperBigFractionFormat *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ProperBigFractionFormat object((jobject) NULL);

            INT_CALL(object = ProperBigFractionFormat());
            self->object = object;
            break;
          }
         case 1:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
            {
              INT_CALL(object = ProperBigFractionFormat(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::text::NumberFormat a0((jobject) NULL);
            ::java::text::NumberFormat a1((jobject) NULL);
            ::java::text::NumberFormat a2((jobject) NULL);
            ProperBigFractionFormat object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ProperBigFractionFormat(a0, a1, a2));
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

      static PyObject *t_ProperBigFractionFormat_format(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::org::hipparchus::fraction::BigFraction a0((jobject) NULL);
        ::java::lang::StringBuffer a1((jobject) NULL);
        ::java::text::FieldPosition a2((jobject) NULL);
        ::java::lang::StringBuffer result((jobject) NULL);

        if (!parseArgs(args, "kkk", ::org::hipparchus::fraction::BigFraction::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.format(a0, a1, a2));
          return ::java::lang::t_StringBuffer::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "format", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_getWholeFormat(t_ProperBigFractionFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_ProperBigFractionFormat_parse(t_ProperBigFractionFormat *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::text::ParsePosition a1((jobject) NULL);
        ::org::hipparchus::fraction::BigFraction result((jobject) NULL);

        if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.parse(a0, a1));
          return ::org::hipparchus::fraction::t_BigFraction::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ProperBigFractionFormat), (PyObject *) self, "parse", args, 2);
      }

      static PyObject *t_ProperBigFractionFormat_get__wholeFormat(t_ProperBigFractionFormat *self, void *data)
      {
        ::java::text::NumberFormat value((jobject) NULL);
        OBJ_CALL(value = self->object.getWholeFormat());
        return ::java::text::t_NumberFormat::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Inverse.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Inverse::class$ = NULL;
        jmethodID *Inverse::mids$ = NULL;
        bool Inverse::live$ = false;

        jclass Inverse::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Inverse");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Inverse::Inverse() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Inverse::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Inverse::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args);

        static PyMethodDef t_Inverse__methods_[] = {
          DECLARE_METHOD(t_Inverse, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Inverse, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Inverse)[] = {
          { Py_tp_methods, t_Inverse__methods_ },
          { Py_tp_init, (void *) t_Inverse_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Inverse)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Inverse, t_Inverse, Inverse);

        void t_Inverse::install(PyObject *module)
        {
          installType(&PY_TYPE(Inverse), &PY_TYPE_DEF(Inverse), module, "Inverse", 0);
        }

        void t_Inverse::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "class_", make_descriptor(Inverse::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "wrapfn_", make_descriptor(t_Inverse::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Inverse), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Inverse_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Inverse::initializeClass, 1)))
            return NULL;
          return t_Inverse::wrap_Object(Inverse(((t_Inverse *) arg)->object.this$));
        }
        static PyObject *t_Inverse_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Inverse::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Inverse_init_(t_Inverse *self, PyObject *args, PyObject *kwds)
        {
          Inverse object((jobject) NULL);

          INT_CALL(object = Inverse());
          self->object = object;

          return 0;
        }

        static PyObject *t_Inverse_value(t_Inverse *self, PyObject *args)
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
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/MetadataKey.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Metadata.h"
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
              mids$[mid_process_977ce2a5a234aadc] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/section/Metadata;)Z");
              mids$[mid_valueOf_c79d9fc14cd33f38] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/MetadataKey;");
              mids$[mid_values_7d74578751d51cc3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/MetadataKey;");

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
            return env->callBooleanMethod(this$, mids$[mid_process_977ce2a5a234aadc], a0.this$, a1.this$, a2.this$);
          }

          MetadataKey MetadataKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return MetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c79d9fc14cd33f38], a0.this$));
          }

          JArray< MetadataKey > MetadataKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< MetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_7d74578751d51cc3]));
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey.h"
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
                  mids$[mid_process_e45b7772c57b1475] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadata;)Z");
                  mids$[mid_valueOf_972aea4ca03feedd] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");
                  mids$[mid_values_c45928d853152cdf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmMetadataKey;");

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
                return env->callBooleanMethod(this$, mids$[mid_process_e45b7772c57b1475], a0.this$, a1.this$, a2.this$);
              }

              AcmMetadataKey AcmMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_972aea4ca03feedd], a0.this$));
              }

              JArray< AcmMetadataKey > AcmMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_c45928d853152cdf]));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemParser.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemParser::class$ = NULL;
              jmethodID *OemParser::mids$ = NULL;
              bool OemParser::live$ = false;

              jclass OemParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_41dbf5f5dbc535bb] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_3423aca890fca0cd] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_6aaadb6771c9dc74] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/odm/oem/Oem;");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_build_41dbf5f5dbc535bb]));
              }

              jboolean OemParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean OemParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean OemParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::OdmHeader OemParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::OdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3423aca890fca0cd]));
              }

              jboolean OemParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean OemParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean OemParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::odm::oem::Oem OemParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::odm::oem::Oem(env->callObjectMethod(this$, mids$[mid_parse_6aaadb6771c9dc74], a0.this$));
              }

              jboolean OemParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean OemParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean OemParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void OemParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
            namespace oem {
              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg);
              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args);
              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data);
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data);
              static PyGetSetDef t_OemParser__fields_[] = {
                DECLARE_GET_FIELD(t_OemParser, header),
                DECLARE_GET_FIELD(t_OemParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemParser__methods_[] = {
                DECLARE_METHOD(t_OemParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, build, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, parse, METH_O),
                DECLARE_METHOD(t_OemParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_OemParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemParser)[] = {
                { Py_tp_methods, t_OemParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OemParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
                NULL
              };

              DEFINE_TYPE(OemParser, t_OemParser, OemParser);
              PyObject *t_OemParser::wrap_Object(const OemParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_OemParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_OemParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemParser *self = (t_OemParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_OemParser::install(PyObject *module)
              {
                installType(&PY_TYPE(OemParser), &PY_TYPE_DEF(OemParser), module, "OemParser", 0);
              }

              void t_OemParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "class_", make_descriptor(OemParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "wrapfn_", make_descriptor(t_OemParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OemParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemParser::initializeClass, 1)))
                  return NULL;
                return t_OemParser::wrap_Object(OemParser(((t_OemParser *) arg)->object.this$));
              }
              static PyObject *t_OemParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemParser_of_(t_OemParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OemParser_build(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_OemParser_finalizeData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_OemParser_finalizeHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_OemParser_finalizeMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_OemParser_getHeader(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_OemParser_inData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_OemParser_inHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_OemParser_inMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_OemParser_parse(t_OemParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::oem::Oem result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::odm::oem::t_Oem::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_OemParser_prepareData(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_OemParser_prepareHeader(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_OemParser_prepareMetadata(t_OemParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_OemParser_reset(t_OemParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(OemParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_OemParser_get__parameters_(t_OemParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_OemParser_get__header(t_OemParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::odm::t_OdmHeader::wrap_Object(value);
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
#include "org/hipparchus/stat/interval/ConfidenceInterval.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace interval {

        ::java::lang::Class *ConfidenceInterval::class$ = NULL;
        jmethodID *ConfidenceInterval::mids$ = NULL;
        bool ConfidenceInterval::live$ = false;

        jclass ConfidenceInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/interval/ConfidenceInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_getConfidenceLevel_dff5885c2c873297] = env->getMethodID(cls, "getConfidenceLevel", "()D");
            mids$[mid_getLowerBound_dff5885c2c873297] = env->getMethodID(cls, "getLowerBound", "()D");
            mids$[mid_getUpperBound_dff5885c2c873297] = env->getMethodID(cls, "getUpperBound", "()D");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ConfidenceInterval::ConfidenceInterval(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        jdouble ConfidenceInterval::getConfidenceLevel() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConfidenceLevel_dff5885c2c873297]);
        }

        jdouble ConfidenceInterval::getLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLowerBound_dff5885c2c873297]);
        }

        jdouble ConfidenceInterval::getUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getUpperBound_dff5885c2c873297]);
        }

        ::java::lang::String ConfidenceInterval::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      namespace interval {
        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self);
        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args);
        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data);
        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data);
        static PyGetSetDef t_ConfidenceInterval__fields_[] = {
          DECLARE_GET_FIELD(t_ConfidenceInterval, confidenceLevel),
          DECLARE_GET_FIELD(t_ConfidenceInterval, lowerBound),
          DECLARE_GET_FIELD(t_ConfidenceInterval, upperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConfidenceInterval__methods_[] = {
          DECLARE_METHOD(t_ConfidenceInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConfidenceInterval, getConfidenceLevel, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getLowerBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, getUpperBound, METH_NOARGS),
          DECLARE_METHOD(t_ConfidenceInterval, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConfidenceInterval)[] = {
          { Py_tp_methods, t_ConfidenceInterval__methods_ },
          { Py_tp_init, (void *) t_ConfidenceInterval_init_ },
          { Py_tp_getset, t_ConfidenceInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConfidenceInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConfidenceInterval, t_ConfidenceInterval, ConfidenceInterval);

        void t_ConfidenceInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(ConfidenceInterval), &PY_TYPE_DEF(ConfidenceInterval), module, "ConfidenceInterval", 0);
        }

        void t_ConfidenceInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "class_", make_descriptor(ConfidenceInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "wrapfn_", make_descriptor(t_ConfidenceInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConfidenceInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConfidenceInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConfidenceInterval::initializeClass, 1)))
            return NULL;
          return t_ConfidenceInterval::wrap_Object(ConfidenceInterval(((t_ConfidenceInterval *) arg)->object.this$));
        }
        static PyObject *t_ConfidenceInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConfidenceInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ConfidenceInterval_init_(t_ConfidenceInterval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          ConfidenceInterval object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = ConfidenceInterval(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ConfidenceInterval_getConfidenceLevel(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getLowerBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLowerBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_getUpperBound(t_ConfidenceInterval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getUpperBound());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ConfidenceInterval_toString(t_ConfidenceInterval *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(ConfidenceInterval), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_ConfidenceInterval_get__confidenceLevel(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConfidenceLevel());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__lowerBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ConfidenceInterval_get__upperBound(t_ConfidenceInterval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposition.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposition::class$ = NULL;
      jmethodID *FieldQRDecomposition::mids$ = NULL;
      bool FieldQRDecomposition::live$ = false;

      jclass FieldQRDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c6edf548344b9f0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_init$_259fc70ca4230674] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getH_c992983685c753c5] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQ_c992983685c753c5] = env->getMethodID(cls, "getQ", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getQT_c992983685c753c5] = env->getMethodID(cls, "getQT", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getR_c992983685c753c5] = env->getMethodID(cls, "getR", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getSolver_6147c09efa4fa494] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_decompose_4f34067490db6cc7] = env->getMethodID(cls, "decompose", "([[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_performHouseholderReflection_e79767523e4cac0d] = env->getMethodID(cls, "performHouseholderReflection", "(I[[Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c6edf548344b9f0, a0.this$)) {}

      FieldQRDecomposition::FieldQRDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_259fc70ca4230674, a0.this$, a1.this$)) {}

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getH() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getH_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQ() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQ_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getQT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getQT_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldQRDecomposition::getR() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getR_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6147c09efa4fa494]));
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
      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args);
      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self);
      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data);
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data);
      static PyGetSetDef t_FieldQRDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposition, h),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, q),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, qT),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, r),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldQRDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getH, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQ, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getQT, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getR, METH_NOARGS),
        DECLARE_METHOD(t_FieldQRDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposition)[] = {
        { Py_tp_methods, t_FieldQRDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposition_init_ },
        { Py_tp_getset, t_FieldQRDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposition, t_FieldQRDecomposition, FieldQRDecomposition);
      PyObject *t_FieldQRDecomposition::wrap_Object(const FieldQRDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposition *self = (t_FieldQRDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposition), &PY_TYPE_DEF(FieldQRDecomposition), module, "FieldQRDecomposition", 0);
      }

      void t_FieldQRDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "class_", make_descriptor(FieldQRDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "wrapfn_", make_descriptor(t_FieldQRDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposition::wrap_Object(FieldQRDecomposition(((t_FieldQRDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposition_of_(t_FieldQRDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposition_init_(t_FieldQRDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldQRDecomposition object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldQRDecomposition(a0, a1));
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

      static PyObject *t_FieldQRDecomposition_getH(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQ(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getQT(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getR(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldQRDecomposition_getSolver(t_FieldQRDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldQRDecomposition_get__parameters_(t_FieldQRDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldQRDecomposition_get__h(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__q(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQ());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__qT(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getQT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__r(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getR());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldQRDecomposition_get__solver(t_FieldQRDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesRangeModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesRangeModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f7d2a24ef2ff591] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesRangeModifier::OnBoardAntennaInterSatellitesRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f7d2a24ef2ff591, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OnBoardAntennaInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesRangeModifier, t_OnBoardAntennaInterSatellitesRangeModifier, OnBoardAntennaInterSatellitesRangeModifier);

          void t_OnBoardAntennaInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesRangeModifier), module, "OnBoardAntennaInterSatellitesRangeModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesRangeModifier::wrap_Object(OnBoardAntennaInterSatellitesRangeModifier(((t_OnBoardAntennaInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesRangeModifier_init_(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesRangeModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesRangeModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesRangeModifier *self, void *data)
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
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion$Converter::class$ = NULL;
      jmethodID *ITRFVersion$Converter::mids$ = NULL;
      bool ITRFVersion$Converter::live$ = false;

      jclass ITRFVersion$Converter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion$Converter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getDestination_8a73c81b6e5084ce] = env->getMethodID(cls, "getDestination", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getOrigin_8a73c81b6e5084ce] = env->getMethodID(cls, "getOrigin", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getStaticTransform_edee248bbd22a723] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getStaticTransform_eae0db96fe973887] = env->getMethodID(cls, "getStaticTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getTransform_687985c59478d29c] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/frames/Transform;");
          mids$[mid_getTransform_f7bf3269025b86c3] = env->getMethodID(cls, "getTransform", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getDestination() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getDestination_8a73c81b6e5084ce]));
      }

      ::org::orekit::frames::ITRFVersion ITRFVersion$Converter::getOrigin() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getOrigin_8a73c81b6e5084ce]));
      }

      ::org::orekit::frames::StaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::StaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_edee248bbd22a723], a0.this$));
      }

      ::org::orekit::frames::FieldStaticTransform ITRFVersion$Converter::getStaticTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getStaticTransform_eae0db96fe973887], a0.this$));
      }

      ::org::orekit::frames::Transform ITRFVersion$Converter::getTransform(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::frames::Transform(env->callObjectMethod(this$, mids$[mid_getTransform_687985c59478d29c], a0.this$));
      }

      ::org::orekit::frames::FieldTransform ITRFVersion$Converter::getTransform(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_getTransform_f7bf3269025b86c3], a0.this$));
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
      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self);
      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args);
      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data);
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data);
      static PyGetSetDef t_ITRFVersion$Converter__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, destination),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, origin),
        DECLARE_GET_FIELD(t_ITRFVersion$Converter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion$Converter__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion$Converter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion$Converter, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getDestination, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getOrigin, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getStaticTransform, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion$Converter, getTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion$Converter)[] = {
        { Py_tp_methods, t_ITRFVersion$Converter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion$Converter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion$Converter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ITRFVersion$Converter, t_ITRFVersion$Converter, ITRFVersion$Converter);
      PyObject *t_ITRFVersion$Converter::wrap_Object(const ITRFVersion$Converter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion$Converter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion$Converter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion$Converter *self = (t_ITRFVersion$Converter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion$Converter::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion$Converter), &PY_TYPE_DEF(ITRFVersion$Converter), module, "ITRFVersion$Converter", 0);
      }

      void t_ITRFVersion$Converter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "class_", make_descriptor(ITRFVersion$Converter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "wrapfn_", make_descriptor(t_ITRFVersion$Converter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion$Converter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ITRFVersion$Converter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion$Converter::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion$Converter::wrap_Object(ITRFVersion$Converter(((t_ITRFVersion$Converter *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion$Converter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion$Converter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion$Converter_of_(t_ITRFVersion$Converter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion$Converter_getDestination(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getOrigin(t_ITRFVersion$Converter *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion$Converter_getStaticTransform(t_ITRFVersion$Converter *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_StaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.getStaticTransform(a0));
              return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getStaticTransform", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion$Converter_getTransform(t_ITRFVersion$Converter *self, PyObject *args)
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
      static PyObject *t_ITRFVersion$Converter_get__parameters_(t_ITRFVersion$Converter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion$Converter_get__destination(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getDestination());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion$Converter_get__origin(t_ITRFVersion$Converter *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrigin());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$UnitListConsumer::class$ = NULL;
            jmethodID *ParseToken$UnitListConsumer::mids$ = NULL;
            bool ParseToken$UnitListConsumer::live$ = false;

            jclass ParseToken$UnitListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$UnitListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_de3e021e7266b71e] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$UnitListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_de3e021e7266b71e], a0.this$);
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
            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$UnitListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$UnitListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$UnitListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$UnitListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$UnitListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$UnitListConsumer, t_ParseToken$UnitListConsumer, ParseToken$UnitListConsumer);

            void t_ParseToken$UnitListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$UnitListConsumer), &PY_TYPE_DEF(ParseToken$UnitListConsumer), module, "ParseToken$UnitListConsumer", 0);
            }

            void t_ParseToken$UnitListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "class_", make_descriptor(ParseToken$UnitListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "wrapfn_", make_descriptor(t_ParseToken$UnitListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$UnitListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$UnitListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$UnitListConsumer::wrap_Object(ParseToken$UnitListConsumer(((t_ParseToken$UnitListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$UnitListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$UnitListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$UnitListConsumer_accept(t_ParseToken$UnitListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
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
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "org/orekit/files/ccsds/ndm/tdm/DataQuality.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *DataQuality::class$ = NULL;
            jmethodID *DataQuality::mids$ = NULL;
            bool DataQuality::live$ = false;
            DataQuality *DataQuality::DEGRADED = NULL;
            DataQuality *DataQuality::RAW = NULL;
            DataQuality *DataQuality::VALIDATED = NULL;

            jclass DataQuality::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/DataQuality");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_dd253ef20b2e73bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");
                mids$[mid_values_401fb777498c930f] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                DEGRADED = new DataQuality(env->getStaticObjectField(cls, "DEGRADED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                RAW = new DataQuality(env->getStaticObjectField(cls, "RAW", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                VALIDATED = new DataQuality(env->getStaticObjectField(cls, "VALIDATED", "Lorg/orekit/files/ccsds/ndm/tdm/DataQuality;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DataQuality DataQuality::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return DataQuality(env->callStaticObjectMethod(cls, mids$[mid_valueOf_dd253ef20b2e73bc], a0.this$));
            }

            JArray< DataQuality > DataQuality::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< DataQuality >(env->callStaticObjectMethod(cls, mids$[mid_values_401fb777498c930f]));
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
            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args);
            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_DataQuality_values(PyTypeObject *type);
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data);
            static PyGetSetDef t_DataQuality__fields_[] = {
              DECLARE_GET_FIELD(t_DataQuality, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DataQuality__methods_[] = {
              DECLARE_METHOD(t_DataQuality, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, of_, METH_VARARGS),
              DECLARE_METHOD(t_DataQuality, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_DataQuality, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DataQuality)[] = {
              { Py_tp_methods, t_DataQuality__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_DataQuality__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DataQuality)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(DataQuality, t_DataQuality, DataQuality);
            PyObject *t_DataQuality::wrap_Object(const DataQuality& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_DataQuality::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_DataQuality::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_DataQuality *self = (t_DataQuality *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_DataQuality::install(PyObject *module)
            {
              installType(&PY_TYPE(DataQuality), &PY_TYPE_DEF(DataQuality), module, "DataQuality", 0);
            }

            void t_DataQuality::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "class_", make_descriptor(DataQuality::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "wrapfn_", make_descriptor(t_DataQuality::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "boxfn_", make_descriptor(boxObject));
              env->getClass(DataQuality::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "DEGRADED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::DEGRADED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "RAW", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::RAW)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DataQuality), "VALIDATED", make_descriptor(t_DataQuality::wrap_Object(*DataQuality::VALIDATED)));
            }

            static PyObject *t_DataQuality_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DataQuality::initializeClass, 1)))
                return NULL;
              return t_DataQuality::wrap_Object(DataQuality(((t_DataQuality *) arg)->object.this$));
            }
            static PyObject *t_DataQuality_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DataQuality::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_DataQuality_of_(t_DataQuality *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_DataQuality_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              DataQuality result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::valueOf(a0));
                return t_DataQuality::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_DataQuality_values(PyTypeObject *type)
            {
              JArray< DataQuality > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::DataQuality::values());
              return JArray<jobject>(result.this$).wrap(t_DataQuality::wrap_jobject);
            }
            static PyObject *t_DataQuality_get__parameters_(t_DataQuality *self, void *data)
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
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerOrMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerOrMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerOrMultiplexer::live$ = false;

      jclass ConvergenceCheckerOrMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerOrMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_7c442e0e70a8e8da] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerOrMultiplexer::ConvergenceCheckerOrMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

      jboolean ConvergenceCheckerOrMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_7c442e0e70a8e8da], a0, a1.this$, a2.this$);
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
      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerOrMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerOrMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerOrMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerOrMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerOrMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerOrMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerOrMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerOrMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerOrMultiplexer, t_ConvergenceCheckerOrMultiplexer, ConvergenceCheckerOrMultiplexer);
      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_Object(const ConvergenceCheckerOrMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerOrMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerOrMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer), module, "ConvergenceCheckerOrMultiplexer", 0);
      }

      void t_ConvergenceCheckerOrMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "class_", make_descriptor(ConvergenceCheckerOrMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerOrMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerOrMultiplexer::wrap_Object(ConvergenceCheckerOrMultiplexer(((t_ConvergenceCheckerOrMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerOrMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerOrMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProviderAdapter.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_10178aa1957fcbf4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Ljava/lang/String;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ExtendedPVCoordinatesProviderAdapter::ExtendedPVCoordinatesProviderAdapter(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a1, const ::java::lang::String & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_10178aa1957fcbf4, a0.this$, a1.this$, a2.this$)) {}
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
#include "org/orekit/propagation/numerical/FieldNumericalPropagator.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/ode/FieldODEIntegrator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldNumericalPropagator::class$ = NULL;
        jmethodID *FieldNumericalPropagator::mids$ = NULL;
        bool FieldNumericalPropagator::live$ = false;

        jclass FieldNumericalPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldNumericalPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb6ed468e0500083] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;)V");
            mids$[mid_init$_b659cdfea9340f48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/ode/FieldODEIntegrator;Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_690f9b27ef4d22fe] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_getAllForceModels_2afa36052df4765d] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_removeForceModels_0fa09c18fee449d5] = env->getMethodID(cls, "removeForceModels", "()V");
            mids$[mid_resetInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIgnoreCentralAttraction", "(Z)V");
            mids$[mid_setInitialState_1463d3d0d52f94dd] = env->getMethodID(cls, "setInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_setMu_072c8635f2164db9] = env->getMethodID(cls, "setMu", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setOrbitType_48a062bf972c4ab5] = env->getMethodID(cls, "setOrbitType", "(Lorg/orekit/orbits/OrbitType;)V");
            mids$[mid_setPositionAngleType_4ca1644ed7c72fe3] = env->getMethodID(cls, "setPositionAngleType", "(Lorg/orekit/orbits/PositionAngleType;)V");
            mids$[mid_tolerances_538ee42154b42493] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_tolerances_3d9429449a451b38] = env->getStaticMethodID(cls, "tolerances", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;)[[D");
            mids$[mid_createMapper_16c8184497a1d794] = env->getMethodID(cls, "createMapper", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/integration/FieldStateMapper;");
            mids$[mid_getMainStateEquations_75bae68924620d17] = env->getMethodID(cls, "getMainStateEquations", "(Lorg/hipparchus/ode/FieldODEIntegrator;)Lorg/orekit/propagation/integration/FieldAbstractIntegratedPropagator$MainStateEquations;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_bb6ed468e0500083, a0.this$, a1.this$)) {}

        FieldNumericalPropagator::FieldNumericalPropagator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::ode::FieldODEIntegrator & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator(env->newObject(initializeClass, &mids$, mid_init$_b659cdfea9340f48, a0.this$, a1.this$, a2.this$)) {}

        void FieldNumericalPropagator::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_690f9b27ef4d22fe], a0.this$);
        }

        ::java::util::List FieldNumericalPropagator::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_2afa36052df4765d]));
        }

        ::org::orekit::orbits::OrbitType FieldNumericalPropagator::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldNumericalPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
        {
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
        }

        ::org::orekit::orbits::PositionAngleType FieldNumericalPropagator::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        void FieldNumericalPropagator::removeForceModels() const
        {
          env->callVoidMethod(this$, mids$[mid_removeForceModels_0fa09c18fee449d5]);
        }

        void FieldNumericalPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_1463d3d0d52f94dd], a0.this$);
        }

        void FieldNumericalPropagator::setIgnoreCentralAttraction(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIgnoreCentralAttraction_bd04c9335fb9e4cf], a0);
        }

        void FieldNumericalPropagator::setInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialState_1463d3d0d52f94dd], a0.this$);
        }

        void FieldNumericalPropagator::setMu(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMu_072c8635f2164db9], a0.this$);
        }

        void FieldNumericalPropagator::setOrbitType(const ::org::orekit::orbits::OrbitType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitType_48a062bf972c4ab5], a0.this$);
        }

        void FieldNumericalPropagator::setPositionAngleType(const ::org::orekit::orbits::PositionAngleType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPositionAngleType_4ca1644ed7c72fe3], a0.this$);
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::orekit::orbits::OrbitType & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_538ee42154b42493], a0.this$, a1.this$, a2.this$));
        }

        JArray< JArray< jdouble > > FieldNumericalPropagator::tolerances(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::orbits::OrbitType & a3)
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_tolerances_3d9429449a451b38], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args);
        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self);
        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg);
        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data);
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data);
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data);
        static PyGetSetDef t_FieldNumericalPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, allForceModels),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, ignoreCentralAttraction),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, initialState),
          DECLARE_SET_FIELD(t_FieldNumericalPropagator, mu),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, orbitType),
          DECLARE_GETSET_FIELD(t_FieldNumericalPropagator, positionAngleType),
          DECLARE_GET_FIELD(t_FieldNumericalPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNumericalPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldNumericalPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNumericalPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, addForceModel, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPVCoordinates, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, removeForceModels, METH_NOARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, resetInitialState, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setIgnoreCentralAttraction, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setInitialState, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setMu, METH_VARARGS),
          DECLARE_METHOD(t_FieldNumericalPropagator, setOrbitType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, setPositionAngleType, METH_O),
          DECLARE_METHOD(t_FieldNumericalPropagator, tolerances, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNumericalPropagator)[] = {
          { Py_tp_methods, t_FieldNumericalPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldNumericalPropagator_init_ },
          { Py_tp_getset, t_FieldNumericalPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNumericalPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::FieldAbstractIntegratedPropagator),
          NULL
        };

        DEFINE_TYPE(FieldNumericalPropagator, t_FieldNumericalPropagator, FieldNumericalPropagator);
        PyObject *t_FieldNumericalPropagator::wrap_Object(const FieldNumericalPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNumericalPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNumericalPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNumericalPropagator *self = (t_FieldNumericalPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNumericalPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNumericalPropagator), &PY_TYPE_DEF(FieldNumericalPropagator), module, "FieldNumericalPropagator", 0);
        }

        void t_FieldNumericalPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "class_", make_descriptor(FieldNumericalPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "wrapfn_", make_descriptor(t_FieldNumericalPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNumericalPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNumericalPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNumericalPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldNumericalPropagator::wrap_Object(FieldNumericalPropagator(((t_FieldNumericalPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldNumericalPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNumericalPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNumericalPropagator_of_(t_FieldNumericalPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNumericalPropagator_init_(t_FieldNumericalPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::ode::FieldODEIntegrator a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
              FieldNumericalPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::ode::FieldODEIntegrator::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEIntegrator::parameters_, &a2))
              {
                INT_CALL(object = FieldNumericalPropagator(a0, a1, a2));
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

        static PyObject *t_FieldNumericalPropagator_addForceModel(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_getAllForceModels(t_FieldNumericalPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_FieldNumericalPropagator_getOrbitType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_getPVCoordinates(t_FieldNumericalPropagator *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_getPositionAngleType(t_FieldNumericalPropagator *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_FieldNumericalPropagator_removeForceModels(t_FieldNumericalPropagator *self)
        {
          OBJ_CALL(self->object.removeForceModels());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldNumericalPropagator_resetInitialState(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setIgnoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIgnoreCentralAttraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIgnoreCentralAttraction", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setInitialState(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.setInitialState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialState", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setMu(t_FieldNumericalPropagator *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMu(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(FieldNumericalPropagator), (PyObject *) self, "setMu", args, 2);
        }

        static PyObject *t_FieldNumericalPropagator_setOrbitType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::OrbitType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(self->object.setOrbitType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_setPositionAngleType(t_FieldNumericalPropagator *self, PyObject *arg)
        {
          ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
          {
            OBJ_CALL(self->object.setPositionAngleType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPositionAngleType", arg);
          return NULL;
        }

        static PyObject *t_FieldNumericalPropagator_tolerances(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::OrbitType a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
            break;
           case 4:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::orbits::OrbitType a3((jobject) NULL);
              PyTypeObject **p3;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::propagation::numerical::FieldNumericalPropagator::tolerances(a0, a1, a2, a3));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError(type, "tolerances", args);
          return NULL;
        }
        static PyObject *t_FieldNumericalPropagator_get__parameters_(t_FieldNumericalPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNumericalPropagator_get__allForceModels(t_FieldNumericalPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static int t_FieldNumericalPropagator_set__ignoreCentralAttraction(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setIgnoreCentralAttraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ignoreCentralAttraction", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__initialState(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::FieldSpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialState", arg);
          return -1;
        }

        static int t_FieldNumericalPropagator_set__mu(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMu(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mu", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__orbitType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__orbitType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
            {
              INT_CALL(self->object.setOrbitType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitType", arg);
          return -1;
        }

        static PyObject *t_FieldNumericalPropagator_get__positionAngleType(t_FieldNumericalPropagator *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }
        static int t_FieldNumericalPropagator_set__positionAngleType(t_FieldNumericalPropagator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
            {
              INT_CALL(self->object.setPositionAngleType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "positionAngleType", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/frames/encounter/EncounterLOFType.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/String.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *EncounterLOFType::class$ = NULL;
        jmethodID *EncounterLOFType::mids$ = NULL;
        bool EncounterLOFType::live$ = false;
        EncounterLOFType *EncounterLOFType::DEFAULT = NULL;
        EncounterLOFType *EncounterLOFType::VALSECCHI = NULL;

        jclass EncounterLOFType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/EncounterLOFType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFrame_d653fceb0a140239] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/FieldPVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_getFrame_70c43c61f0822061] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/PVCoordinates;)Lorg/orekit/frames/encounter/EncounterLOF;");
            mids$[mid_valueOf_76718350b15f316d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/encounter/EncounterLOFType;");
            mids$[mid_values_675ec39c89e99c32] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/encounter/EncounterLOFType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT = new EncounterLOFType(env->getStaticObjectField(cls, "DEFAULT", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            VALSECCHI = new EncounterLOFType(env->getStaticObjectField(cls, "VALSECCHI", "Lorg/orekit/frames/encounter/EncounterLOFType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::FieldPVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_d653fceb0a140239], a0.this$));
        }

        ::org::orekit::frames::encounter::EncounterLOF EncounterLOFType::getFrame(const ::org::orekit::utils::PVCoordinates & a0) const
        {
          return ::org::orekit::frames::encounter::EncounterLOF(env->callObjectMethod(this$, mids$[mid_getFrame_70c43c61f0822061], a0.this$));
        }

        EncounterLOFType EncounterLOFType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EncounterLOFType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_76718350b15f316d], a0.this$));
        }

        JArray< EncounterLOFType > EncounterLOFType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EncounterLOFType >(env->callStaticObjectMethod(cls, mids$[mid_values_675ec39c89e99c32]));
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
        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args);
        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EncounterLOFType_values(PyTypeObject *type);
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data);
        static PyGetSetDef t_EncounterLOFType__fields_[] = {
          DECLARE_GET_FIELD(t_EncounterLOFType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EncounterLOFType__methods_[] = {
          DECLARE_METHOD(t_EncounterLOFType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, of_, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, getFrame, METH_VARARGS),
          DECLARE_METHOD(t_EncounterLOFType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EncounterLOFType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EncounterLOFType)[] = {
          { Py_tp_methods, t_EncounterLOFType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EncounterLOFType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EncounterLOFType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EncounterLOFType, t_EncounterLOFType, EncounterLOFType);
        PyObject *t_EncounterLOFType::wrap_Object(const EncounterLOFType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EncounterLOFType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EncounterLOFType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EncounterLOFType *self = (t_EncounterLOFType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EncounterLOFType::install(PyObject *module)
        {
          installType(&PY_TYPE(EncounterLOFType), &PY_TYPE_DEF(EncounterLOFType), module, "EncounterLOFType", 0);
        }

        void t_EncounterLOFType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "class_", make_descriptor(EncounterLOFType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "wrapfn_", make_descriptor(t_EncounterLOFType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "boxfn_", make_descriptor(boxObject));
          env->getClass(EncounterLOFType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "DEFAULT", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::DEFAULT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EncounterLOFType), "VALSECCHI", make_descriptor(t_EncounterLOFType::wrap_Object(*EncounterLOFType::VALSECCHI)));
        }

        static PyObject *t_EncounterLOFType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EncounterLOFType::initializeClass, 1)))
            return NULL;
          return t_EncounterLOFType::wrap_Object(EncounterLOFType(((t_EncounterLOFType *) arg)->object.this$));
        }
        static PyObject *t_EncounterLOFType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EncounterLOFType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EncounterLOFType_of_(t_EncounterLOFType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EncounterLOFType_getFrame(t_EncounterLOFType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::frames::encounter::EncounterLOF result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getFrame(a0));
                return ::org::orekit::frames::encounter::t_EncounterLOF::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getFrame", args);
          return NULL;
        }

        static PyObject *t_EncounterLOFType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EncounterLOFType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::valueOf(a0));
            return t_EncounterLOFType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EncounterLOFType_values(PyTypeObject *type)
        {
          JArray< EncounterLOFType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::frames::encounter::EncounterLOFType::values());
          return JArray<jobject>(result.this$).wrap(t_EncounterLOFType::wrap_jobject);
        }
        static PyObject *t_EncounterLOFType_get__parameters_(t_EncounterLOFType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/OceanTides.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/gravity/potential/GravityFields.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/forces/ForceModel.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *OceanTides::class$ = NULL;
        jmethodID *OceanTides::mids$ = NULL;
        bool OceanTides::live$ = false;
        jint OceanTides::DEFAULT_POINTS = (jint) 0;
        jdouble OceanTides::DEFAULT_STEP = (jdouble) 0;

        jclass OceanTides::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/OceanTides");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78c4483a058b3c31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_be0c289fb279b5c9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;)V");
            mids$[mid_init$_f041363185b10634] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;DDZDIIILorg/orekit/utils/IERSConventions;Lorg/orekit/time/UT1Scale;Lorg/orekit/forces/gravity/potential/GravityFields;)V");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
            mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_POINTS = env->getStaticIntField(cls, "DEFAULT_POINTS");
            DEFAULT_STEP = env->getStaticDoubleField(cls, "DEFAULT_STEP");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jint a3, jint a4, const ::org::orekit::utils::IERSConventions & a5, const ::org::orekit::time::UT1Scale & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_78c4483a058b3c31, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be0c289fb279b5c9, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$)) {}

        OceanTides::OceanTides(const ::org::orekit::frames::Frame & a0, jdouble a1, jdouble a2, jboolean a3, jdouble a4, jint a5, jint a6, jint a7, const ::org::orekit::utils::IERSConventions & a8, const ::org::orekit::time::UT1Scale & a9, const ::org::orekit::forces::gravity::potential::GravityFields & a10) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f041363185b10634, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8.this$, a9.this$, a10.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D OceanTides::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D OceanTides::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        jboolean OceanTides::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::stream::Stream OceanTides::getEventDetectors() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
        }

        ::java::util::stream::Stream OceanTides::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
        }

        ::java::util::List OceanTides::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args);
        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self);
        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self);
        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg);
        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self);
        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data);
        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data);
        static PyGetSetDef t_OceanTides__fields_[] = {
          DECLARE_GET_FIELD(t_OceanTides, eventDetectors),
          DECLARE_GET_FIELD(t_OceanTides, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OceanTides__methods_[] = {
          DECLARE_METHOD(t_OceanTides, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OceanTides, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_OceanTides, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getEventDetectors, METH_NOARGS),
          DECLARE_METHOD(t_OceanTides, getFieldEventDetectors, METH_O),
          DECLARE_METHOD(t_OceanTides, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OceanTides)[] = {
          { Py_tp_methods, t_OceanTides__methods_ },
          { Py_tp_init, (void *) t_OceanTides_init_ },
          { Py_tp_getset, t_OceanTides__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OceanTides)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OceanTides, t_OceanTides, OceanTides);

        void t_OceanTides::install(PyObject *module)
        {
          installType(&PY_TYPE(OceanTides), &PY_TYPE_DEF(OceanTides), module, "OceanTides", 0);
        }

        void t_OceanTides::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "class_", make_descriptor(OceanTides::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "wrapfn_", make_descriptor(t_OceanTides::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "boxfn_", make_descriptor(boxObject));
          env->getClass(OceanTides::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_POINTS", make_descriptor(OceanTides::DEFAULT_POINTS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OceanTides), "DEFAULT_STEP", make_descriptor(OceanTides::DEFAULT_STEP));
        }

        static PyObject *t_OceanTides_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OceanTides::initializeClass, 1)))
            return NULL;
          return t_OceanTides::wrap_Object(OceanTides(((t_OceanTides *) arg)->object.this$));
        }
        static PyObject *t_OceanTides_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OceanTides::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OceanTides_init_(t_OceanTides *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jint a3;
              jint a4;
              ::org::orekit::utils::IERSConventions a5((jobject) NULL);
              PyTypeObject **p5;
              ::org::orekit::time::UT1Scale a6((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &p5, ::org::orekit::utils::t_IERSConventions::parameters_, &a6))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jboolean a3;
              jdouble a4;
              jint a5;
              jint a6;
              jint a7;
              ::org::orekit::utils::IERSConventions a8((jobject) NULL);
              PyTypeObject **p8;
              ::org::orekit::time::UT1Scale a9((jobject) NULL);
              ::org::orekit::forces::gravity::potential::GravityFields a10((jobject) NULL);
              OceanTides object((jobject) NULL);

              if (!parseArgs(args, "kDDZDIIIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::UT1Scale::initializeClass, ::org::orekit::forces::gravity::potential::GravityFields::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &p8, ::org::orekit::utils::t_IERSConventions::parameters_, &a9, &a10))
              {
                INT_CALL(object = OceanTides(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
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

        static PyObject *t_OceanTides_acceleration(t_OceanTides *self, PyObject *args)
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

        static PyObject *t_OceanTides_dependsOnPositionOnly(t_OceanTides *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_OceanTides_getEventDetectors(t_OceanTides *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
        }

        static PyObject *t_OceanTides_getFieldEventDetectors(t_OceanTides *self, PyObject *arg)
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

        static PyObject *t_OceanTides_getParametersDrivers(t_OceanTides *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_OceanTides_get__eventDetectors(t_OceanTides *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetectors());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }

        static PyObject *t_OceanTides_get__parametersDrivers(t_OceanTides *self, void *data)
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
#include "org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *GeneratedMeasurementSubscriber::class$ = NULL;
          jmethodID *GeneratedMeasurementSubscriber::mids$ = NULL;
          bool GeneratedMeasurementSubscriber::live$ = false;

          jclass GeneratedMeasurementSubscriber::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/GeneratedMeasurementSubscriber");

              mids$ = new jmethodID[max_mid];
              mids$[mid_handleGeneratedMeasurement_558d7f8249b8a2bc] = env->getMethodID(cls, "handleGeneratedMeasurement", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)V");
              mids$[mid_init_a9e71d848b81c8f8] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void GeneratedMeasurementSubscriber::handleGeneratedMeasurement(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_handleGeneratedMeasurement_558d7f8249b8a2bc], a0.this$);
          }

          void GeneratedMeasurementSubscriber::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_a9e71d848b81c8f8], a0.this$, a1.this$);
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
          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg);
          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args);

          static PyMethodDef t_GeneratedMeasurementSubscriber__methods_[] = {
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, handleGeneratedMeasurement, METH_O),
            DECLARE_METHOD(t_GeneratedMeasurementSubscriber, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GeneratedMeasurementSubscriber)[] = {
            { Py_tp_methods, t_GeneratedMeasurementSubscriber__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GeneratedMeasurementSubscriber)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GeneratedMeasurementSubscriber, t_GeneratedMeasurementSubscriber, GeneratedMeasurementSubscriber);

          void t_GeneratedMeasurementSubscriber::install(PyObject *module)
          {
            installType(&PY_TYPE(GeneratedMeasurementSubscriber), &PY_TYPE_DEF(GeneratedMeasurementSubscriber), module, "GeneratedMeasurementSubscriber", 0);
          }

          void t_GeneratedMeasurementSubscriber::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "class_", make_descriptor(GeneratedMeasurementSubscriber::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "wrapfn_", make_descriptor(t_GeneratedMeasurementSubscriber::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GeneratedMeasurementSubscriber), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GeneratedMeasurementSubscriber_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 1)))
              return NULL;
            return t_GeneratedMeasurementSubscriber::wrap_Object(GeneratedMeasurementSubscriber(((t_GeneratedMeasurementSubscriber *) arg)->object.this$));
          }
          static PyObject *t_GeneratedMeasurementSubscriber_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GeneratedMeasurementSubscriber::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_handleGeneratedMeasurement(t_GeneratedMeasurementSubscriber *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.handleGeneratedMeasurement(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "handleGeneratedMeasurement", arg);
            return NULL;
          }

          static PyObject *t_GeneratedMeasurementSubscriber_init(t_GeneratedMeasurementSubscriber *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *RandomGenerator::class$ = NULL;
      jmethodID *RandomGenerator::mids$ = NULL;
      bool RandomGenerator::live$ = false;

      jclass RandomGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/RandomGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_nextBoolean_b108b35ef48e27bd] = env->getMethodID(cls, "nextBoolean", "()Z");
          mids$[mid_nextBytes_20012b3010a39c05] = env->getMethodID(cls, "nextBytes", "([B)V");
          mids$[mid_nextBytes_d7af9aedcdd3845b] = env->getMethodID(cls, "nextBytes", "([BII)V");
          mids$[mid_nextDouble_dff5885c2c873297] = env->getMethodID(cls, "nextDouble", "()D");
          mids$[mid_nextFloat_5adccb493ada08e8] = env->getMethodID(cls, "nextFloat", "()F");
          mids$[mid_nextGaussian_dff5885c2c873297] = env->getMethodID(cls, "nextGaussian", "()D");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");
          mids$[mid_nextInt_2235cd056f5a882b] = env->getMethodID(cls, "nextInt", "(I)I");
          mids$[mid_nextLong_492808a339bfa35f] = env->getMethodID(cls, "nextLong", "()J");
          mids$[mid_nextLong_02b241598e254a3f] = env->getMethodID(cls, "nextLong", "(J)J");
          mids$[mid_setSeed_d147d7ce001e2d45] = env->getMethodID(cls, "setSeed", "([I)V");
          mids$[mid_setSeed_99803b0791f320ff] = env->getMethodID(cls, "setSeed", "(I)V");
          mids$[mid_setSeed_3a8e7649f31fdb20] = env->getMethodID(cls, "setSeed", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean RandomGenerator::nextBoolean() const
      {
        return env->callBooleanMethod(this$, mids$[mid_nextBoolean_b108b35ef48e27bd]);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_20012b3010a39c05], a0.this$);
      }

      void RandomGenerator::nextBytes(const JArray< jbyte > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_nextBytes_d7af9aedcdd3845b], a0.this$, a1, a2);
      }

      jdouble RandomGenerator::nextDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextDouble_dff5885c2c873297]);
      }

      jfloat RandomGenerator::nextFloat() const
      {
        return env->callFloatMethod(this$, mids$[mid_nextFloat_5adccb493ada08e8]);
      }

      jdouble RandomGenerator::nextGaussian() const
      {
        return env->callDoubleMethod(this$, mids$[mid_nextGaussian_dff5885c2c873297]);
      }

      jint RandomGenerator::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
      }

      jint RandomGenerator::nextInt(jint a0) const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_2235cd056f5a882b], a0);
      }

      jlong RandomGenerator::nextLong() const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_492808a339bfa35f]);
      }

      jlong RandomGenerator::nextLong(jlong a0) const
      {
        return env->callLongMethod(this$, mids$[mid_nextLong_02b241598e254a3f], a0);
      }

      void RandomGenerator::setSeed(const JArray< jint > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_d147d7ce001e2d45], a0.this$);
      }

      void RandomGenerator::setSeed(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_99803b0791f320ff], a0);
      }

      void RandomGenerator::setSeed(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSeed_3a8e7649f31fdb20], a0);
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
      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self);
      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args);
      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args);
      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data);
      static PyGetSetDef t_RandomGenerator__fields_[] = {
        DECLARE_SET_FIELD(t_RandomGenerator, seed),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RandomGenerator__methods_[] = {
        DECLARE_METHOD(t_RandomGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RandomGenerator, nextBoolean, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextBytes, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextDouble, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextFloat, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextGaussian, METH_NOARGS),
        DECLARE_METHOD(t_RandomGenerator, nextInt, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, nextLong, METH_VARARGS),
        DECLARE_METHOD(t_RandomGenerator, setSeed, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RandomGenerator)[] = {
        { Py_tp_methods, t_RandomGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RandomGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RandomGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RandomGenerator, t_RandomGenerator, RandomGenerator);

      void t_RandomGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(RandomGenerator), &PY_TYPE_DEF(RandomGenerator), module, "RandomGenerator", 0);
      }

      void t_RandomGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "class_", make_descriptor(RandomGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "wrapfn_", make_descriptor(t_RandomGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RandomGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RandomGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RandomGenerator::initializeClass, 1)))
          return NULL;
        return t_RandomGenerator::wrap_Object(RandomGenerator(((t_RandomGenerator *) arg)->object.this$));
      }
      static PyObject *t_RandomGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RandomGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RandomGenerator_nextBoolean(t_RandomGenerator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.nextBoolean());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RandomGenerator_nextBytes(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jbyte > a0((jobject) NULL);

            if (!parseArgs(args, "[B", &a0))
            {
              OBJ_CALL(self->object.nextBytes(a0));
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
              OBJ_CALL(self->object.nextBytes(a0, a1, a2));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextBytes", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextDouble(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextFloat(t_RandomGenerator *self)
      {
        jfloat result;
        OBJ_CALL(result = self->object.nextFloat());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextGaussian(t_RandomGenerator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.nextGaussian());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RandomGenerator_nextInt(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jint result;
            OBJ_CALL(result = self->object.nextInt());
            return PyLong_FromLong((long) result);
          }
          break;
         case 1:
          {
            jint a0;
            jint result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.nextInt(a0));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextInt", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_nextLong(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.nextLong());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;
            jlong result;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.nextLong(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "nextLong", args);
        return NULL;
      }

      static PyObject *t_RandomGenerator_setSeed(t_RandomGenerator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jint > a0((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.setSeed(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setSeed", args);
        return NULL;
      }

      static int t_RandomGenerator_set__seed(t_RandomGenerator *self, PyObject *arg, void *data)
      {
        {
          JArray< jint > value((jobject) NULL);
          if (!parseArg(arg, "[I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        {
          jlong value;
          if (!parseArg(arg, "J", &value))
          {
            INT_CALL(self->object.setSeed(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "seed", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Acos.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Acos::Acos() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Acos::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Acos::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
#include "org/orekit/time/TAIScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TAIScale::class$ = NULL;
      jmethodID *TAIScale::mids$ = NULL;
      bool TAIScale::live$ = false;

      jclass TAIScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TAIScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_bf1d7732f1acb697] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_2a5f05be83ff251d] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_56358b00ba005b52] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String TAIScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
      }

      jdouble TAIScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_bf1d7732f1acb697], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement TAIScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_2a5f05be83ff251d], a0.this$));
      }

      jdouble TAIScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_56358b00ba005b52], a0.this$, a1.this$);
      }

      ::java::lang::String TAIScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TAIScale_getName(t_TAIScale *self);
      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args);
      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data);
      static PyGetSetDef t_TAIScale__fields_[] = {
        DECLARE_GET_FIELD(t_TAIScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TAIScale__methods_[] = {
        DECLARE_METHOD(t_TAIScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TAIScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_TAIScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_TAIScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TAIScale)[] = {
        { Py_tp_methods, t_TAIScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TAIScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TAIScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TAIScale, t_TAIScale, TAIScale);

      void t_TAIScale::install(PyObject *module)
      {
        installType(&PY_TYPE(TAIScale), &PY_TYPE_DEF(TAIScale), module, "TAIScale", 0);
      }

      void t_TAIScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "class_", make_descriptor(TAIScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "wrapfn_", make_descriptor(t_TAIScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TAIScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TAIScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TAIScale::initializeClass, 1)))
          return NULL;
        return t_TAIScale::wrap_Object(TAIScale(((t_TAIScale *) arg)->object.this$));
      }
      static PyObject *t_TAIScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TAIScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TAIScale_getName(t_TAIScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_TAIScale_offsetFromTAI(t_TAIScale *self, PyObject *args)
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

      static PyObject *t_TAIScale_offsetToTAI(t_TAIScale *self, PyObject *args)
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

      static PyObject *t_TAIScale_toString(t_TAIScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(TAIScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TAIScale_get__name(t_TAIScale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "org/hipparchus/util/ResizableDoubleArray$ExpansionMode.h"
#include "org/hipparchus/util/ResizableDoubleArray.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/MathArrays$Function.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *ResizableDoubleArray::class$ = NULL;
      jmethodID *ResizableDoubleArray::mids$ = NULL;
      bool ResizableDoubleArray::live$ = false;

      jclass ResizableDoubleArray::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/ResizableDoubleArray");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_init$_07bf81310115068c] = env->getMethodID(cls, "<init>", "(IDD)V");
          mids$[mid_init$_bdfcc5b1188867de] = env->getMethodID(cls, "<init>", "(IDDLorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;[D)V");
          mids$[mid_addElement_17db3a65980d3441] = env->getMethodID(cls, "addElement", "(D)V");
          mids$[mid_addElementRolling_dcbc7ce2902fa136] = env->getMethodID(cls, "addElementRolling", "(D)D");
          mids$[mid_addElements_fa9d415d19f69361] = env->getMethodID(cls, "addElements", "([D)V");
          mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_compute_03e2c9f605520832] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/util/MathArrays$Function;)D");
          mids$[mid_contract_0fa09c18fee449d5] = env->getMethodID(cls, "contract", "()V");
          mids$[mid_copy_7dd44dd9c212bf1f] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/util/ResizableDoubleArray;");
          mids$[mid_discardFrontElements_99803b0791f320ff] = env->getMethodID(cls, "discardFrontElements", "(I)V");
          mids$[mid_discardMostRecentElements_99803b0791f320ff] = env->getMethodID(cls, "discardMostRecentElements", "(I)V");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getCapacity_570ce0828f81a2c1] = env->getMethodID(cls, "getCapacity", "()I");
          mids$[mid_getContractionCriterion_dff5885c2c873297] = env->getMethodID(cls, "getContractionCriterion", "()D");
          mids$[mid_getElement_46f85b53d9aedd96] = env->getMethodID(cls, "getElement", "(I)D");
          mids$[mid_getElements_60c7040667a7dc5c] = env->getMethodID(cls, "getElements", "()[D");
          mids$[mid_getExpansionFactor_dff5885c2c873297] = env->getMethodID(cls, "getExpansionFactor", "()D");
          mids$[mid_getExpansionMode_afafe47c1fd96b76] = env->getMethodID(cls, "getExpansionMode", "()Lorg/hipparchus/util/ResizableDoubleArray$ExpansionMode;");
          mids$[mid_getNumElements_570ce0828f81a2c1] = env->getMethodID(cls, "getNumElements", "()I");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_setElement_bb79ca80d85d0a66] = env->getMethodID(cls, "setElement", "(ID)V");
          mids$[mid_setNumElements_99803b0791f320ff] = env->getMethodID(cls, "setNumElements", "(I)V");
          mids$[mid_substituteMostRecentElement_dcbc7ce2902fa136] = env->getMethodID(cls, "substituteMostRecentElement", "(D)D");
          mids$[mid_checkContractExpand_8f2e782d5278b131] = env->getMethodID(cls, "checkContractExpand", "(DD)V");
          mids$[mid_getArrayRef_60c7040667a7dc5c] = env->getMethodID(cls, "getArrayRef", "()[D");
          mids$[mid_getStartIndex_570ce0828f81a2c1] = env->getMethodID(cls, "getStartIndex", "()I");
          mids$[mid_expand_0fa09c18fee449d5] = env->getMethodID(cls, "expand", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ResizableDoubleArray::ResizableDoubleArray() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      ResizableDoubleArray::ResizableDoubleArray(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_07bf81310115068c, a0, a1, a2)) {}

      ResizableDoubleArray::ResizableDoubleArray(jint a0, jdouble a1, jdouble a2, const ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode & a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdfcc5b1188867de, a0, a1, a2, a3.this$, a4.this$)) {}

      void ResizableDoubleArray::addElement(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElement_17db3a65980d3441], a0);
      }

      jdouble ResizableDoubleArray::addElementRolling(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_addElementRolling_dcbc7ce2902fa136], a0);
      }

      void ResizableDoubleArray::addElements(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addElements_fa9d415d19f69361], a0.this$);
      }

      void ResizableDoubleArray::clear() const
      {
        env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
      }

      jdouble ResizableDoubleArray::compute(const ::org::hipparchus::util::MathArrays$Function & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_compute_03e2c9f605520832], a0.this$);
      }

      void ResizableDoubleArray::contract() const
      {
        env->callVoidMethod(this$, mids$[mid_contract_0fa09c18fee449d5]);
      }

      ResizableDoubleArray ResizableDoubleArray::copy() const
      {
        return ResizableDoubleArray(env->callObjectMethod(this$, mids$[mid_copy_7dd44dd9c212bf1f]));
      }

      void ResizableDoubleArray::discardFrontElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardFrontElements_99803b0791f320ff], a0);
      }

      void ResizableDoubleArray::discardMostRecentElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_discardMostRecentElements_99803b0791f320ff], a0);
      }

      jboolean ResizableDoubleArray::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      jint ResizableDoubleArray::getCapacity() const
      {
        return env->callIntMethod(this$, mids$[mid_getCapacity_570ce0828f81a2c1]);
      }

      jdouble ResizableDoubleArray::getContractionCriterion() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getContractionCriterion_dff5885c2c873297]);
      }

      jdouble ResizableDoubleArray::getElement(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElement_46f85b53d9aedd96], a0);
      }

      JArray< jdouble > ResizableDoubleArray::getElements() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getElements_60c7040667a7dc5c]));
      }

      jdouble ResizableDoubleArray::getExpansionFactor() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExpansionFactor_dff5885c2c873297]);
      }

      ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode ResizableDoubleArray::getExpansionMode() const
      {
        return ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode(env->callObjectMethod(this$, mids$[mid_getExpansionMode_afafe47c1fd96b76]));
      }

      jint ResizableDoubleArray::getNumElements() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumElements_570ce0828f81a2c1]);
      }

      jint ResizableDoubleArray::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      void ResizableDoubleArray::setElement(jint a0, jdouble a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setElement_bb79ca80d85d0a66], a0, a1);
      }

      void ResizableDoubleArray::setNumElements(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNumElements_99803b0791f320ff], a0);
      }

      jdouble ResizableDoubleArray::substituteMostRecentElement(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_substituteMostRecentElement_dcbc7ce2902fa136], a0);
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
      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self);
      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args);
      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg);
      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data);
      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data);
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data);
      static PyGetSetDef t_ResizableDoubleArray__fields_[] = {
        DECLARE_GET_FIELD(t_ResizableDoubleArray, capacity),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, contractionCriterion),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, elements),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionFactor),
        DECLARE_GET_FIELD(t_ResizableDoubleArray, expansionMode),
        DECLARE_GETSET_FIELD(t_ResizableDoubleArray, numElements),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ResizableDoubleArray__methods_[] = {
        DECLARE_METHOD(t_ResizableDoubleArray, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ResizableDoubleArray, addElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElementRolling, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, addElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, clear, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, compute, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, contract, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, copy, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, discardFrontElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, discardMostRecentElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, equals, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getCapacity, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getContractionCriterion, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getElement, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, getElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionFactor, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getExpansionMode, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, getNumElements, METH_NOARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setElement, METH_VARARGS),
        DECLARE_METHOD(t_ResizableDoubleArray, setNumElements, METH_O),
        DECLARE_METHOD(t_ResizableDoubleArray, substituteMostRecentElement, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ResizableDoubleArray)[] = {
        { Py_tp_methods, t_ResizableDoubleArray__methods_ },
        { Py_tp_init, (void *) t_ResizableDoubleArray_init_ },
        { Py_tp_getset, t_ResizableDoubleArray__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ResizableDoubleArray)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ResizableDoubleArray, t_ResizableDoubleArray, ResizableDoubleArray);

      void t_ResizableDoubleArray::install(PyObject *module)
      {
        installType(&PY_TYPE(ResizableDoubleArray), &PY_TYPE_DEF(ResizableDoubleArray), module, "ResizableDoubleArray", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "ExpansionMode", make_descriptor(&PY_TYPE_DEF(ResizableDoubleArray$ExpansionMode)));
      }

      void t_ResizableDoubleArray::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "class_", make_descriptor(ResizableDoubleArray::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "wrapfn_", make_descriptor(t_ResizableDoubleArray::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ResizableDoubleArray), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ResizableDoubleArray_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ResizableDoubleArray::initializeClass, 1)))
          return NULL;
        return t_ResizableDoubleArray::wrap_Object(ResizableDoubleArray(((t_ResizableDoubleArray *) arg)->object.this$));
      }
      static PyObject *t_ResizableDoubleArray_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ResizableDoubleArray::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ResizableDoubleArray_init_(t_ResizableDoubleArray *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ResizableDoubleArray object((jobject) NULL);

            INT_CALL(object = ResizableDoubleArray());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = ResizableDoubleArray(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDD", &a0, &a1, &a2))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            jint a0;
            jdouble a1;
            jdouble a2;
            ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode a3((jobject) NULL);
            PyTypeObject **p3;
            JArray< jdouble > a4((jobject) NULL);
            ResizableDoubleArray object((jobject) NULL);

            if (!parseArgs(args, "IDDK[D", ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::parameters_, &a4))
            {
              INT_CALL(object = ResizableDoubleArray(a0, a1, a2, a3, a4));
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

      static PyObject *t_ResizableDoubleArray_addElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.addElement(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElementRolling(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.addElementRolling(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addElementRolling", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_addElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(self->object.addElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_clear(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_compute(t_ResizableDoubleArray *self, PyObject *arg)
      {
        ::org::hipparchus::util::MathArrays$Function a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::hipparchus::util::MathArrays$Function::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_contract(t_ResizableDoubleArray *self)
      {
        OBJ_CALL(self->object.contract());
        Py_RETURN_NONE;
      }

      static PyObject *t_ResizableDoubleArray_copy(t_ResizableDoubleArray *self)
      {
        ResizableDoubleArray result((jobject) NULL);
        OBJ_CALL(result = self->object.copy());
        return t_ResizableDoubleArray::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_discardFrontElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardFrontElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardFrontElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_discardMostRecentElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.discardMostRecentElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "discardMostRecentElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_equals(t_ResizableDoubleArray *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_getCapacity(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCapacity());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_getContractionCriterion(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getElement(t_ResizableDoubleArray *self, PyObject *arg)
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

      static PyObject *t_ResizableDoubleArray_getElements(t_ResizableDoubleArray *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getElements());
        return result.wrap();
      }

      static PyObject *t_ResizableDoubleArray_getExpansionFactor(t_ResizableDoubleArray *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ResizableDoubleArray_getExpansionMode(t_ResizableDoubleArray *self)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode result((jobject) NULL);
        OBJ_CALL(result = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(result);
      }

      static PyObject *t_ResizableDoubleArray_getNumElements(t_ResizableDoubleArray *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumElements());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ResizableDoubleArray_hashCode(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(ResizableDoubleArray), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_ResizableDoubleArray_setElement(t_ResizableDoubleArray *self, PyObject *args)
      {
        jint a0;
        jdouble a1;

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          OBJ_CALL(self->object.setElement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setElement", args);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_setNumElements(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.setNumElements(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setNumElements", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_substituteMostRecentElement(t_ResizableDoubleArray *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.substituteMostRecentElement(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "substituteMostRecentElement", arg);
        return NULL;
      }

      static PyObject *t_ResizableDoubleArray_get__capacity(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCapacity());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ResizableDoubleArray_get__contractionCriterion(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getContractionCriterion());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__elements(t_ResizableDoubleArray *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getElements());
        return value.wrap();
      }

      static PyObject *t_ResizableDoubleArray_get__expansionFactor(t_ResizableDoubleArray *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExpansionFactor());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_ResizableDoubleArray_get__expansionMode(t_ResizableDoubleArray *self, void *data)
      {
        ::org::hipparchus::util::ResizableDoubleArray$ExpansionMode value((jobject) NULL);
        OBJ_CALL(value = self->object.getExpansionMode());
        return ::org::hipparchus::util::t_ResizableDoubleArray$ExpansionMode::wrap_Object(value);
      }

      static PyObject *t_ResizableDoubleArray_get__numElements(t_ResizableDoubleArray *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumElements());
        return PyLong_FromLong((long) value);
      }
      static int t_ResizableDoubleArray_set__numElements(t_ResizableDoubleArray *self, PyObject *arg, void *data)
      {
        {
          jint value;
          if (!parseArg(arg, "I", &value))
          {
            INT_CALL(self->object.setNumElements(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "numElements", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Tan.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Tan::class$ = NULL;
        jmethodID *Tan::mids$ = NULL;
        bool Tan::live$ = false;

        jclass Tan::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Tan");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Tan::Tan() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Tan::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Tan::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Tan_value(t_Tan *self, PyObject *args);

        static PyMethodDef t_Tan__methods_[] = {
          DECLARE_METHOD(t_Tan, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tan, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tan)[] = {
          { Py_tp_methods, t_Tan__methods_ },
          { Py_tp_init, (void *) t_Tan_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tan)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Tan, t_Tan, Tan);

        void t_Tan::install(PyObject *module)
        {
          installType(&PY_TYPE(Tan), &PY_TYPE_DEF(Tan), module, "Tan", 0);
        }

        void t_Tan::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "class_", make_descriptor(Tan::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "wrapfn_", make_descriptor(t_Tan::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tan), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tan_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tan::initializeClass, 1)))
            return NULL;
          return t_Tan::wrap_Object(Tan(((t_Tan *) arg)->object.this$));
        }
        static PyObject *t_Tan_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tan::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Tan_init_(t_Tan *self, PyObject *args, PyObject *kwds)
        {
          Tan object((jobject) NULL);

          INT_CALL(object = Tan());
          self->object = object;

          return 0;
        }

        static PyObject *t_Tan_value(t_Tan *self, PyObject *args)
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
#include "org/orekit/files/rinex/observation/RinexObservation.h"
#include "org/orekit/files/rinex/observation/RinexObservationHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *RinexObservation::class$ = NULL;
          jmethodID *RinexObservation::mids$ = NULL;
          bool RinexObservation::live$ = false;

          jclass RinexObservation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/RinexObservation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addObservationDataSet_5e249044f63168db] = env->getMethodID(cls, "addObservationDataSet", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_getObservationDataSets_2afa36052df4765d] = env->getMethodID(cls, "getObservationDataSets", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexObservation::RinexObservation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void RinexObservation::addObservationDataSet(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addObservationDataSet_5e249044f63168db], a0.this$);
          }

          ::java::util::List RinexObservation::getObservationDataSets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservationDataSets_2afa36052df4765d]));
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
        namespace observation {
          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args);
          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg);
          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self);
          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data);
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data);
          static PyGetSetDef t_RinexObservation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexObservation, observationDataSets),
            DECLARE_GET_FIELD(t_RinexObservation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexObservation__methods_[] = {
            DECLARE_METHOD(t_RinexObservation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexObservation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexObservation, addObservationDataSet, METH_O),
            DECLARE_METHOD(t_RinexObservation, getObservationDataSets, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexObservation)[] = {
            { Py_tp_methods, t_RinexObservation__methods_ },
            { Py_tp_init, (void *) t_RinexObservation_init_ },
            { Py_tp_getset, t_RinexObservation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexObservation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexObservation, t_RinexObservation, RinexObservation);
          PyObject *t_RinexObservation::wrap_Object(const RinexObservation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexObservation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexObservation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexObservation *self = (t_RinexObservation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexObservation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexObservation), &PY_TYPE_DEF(RinexObservation), module, "RinexObservation", 0);
          }

          void t_RinexObservation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "class_", make_descriptor(RinexObservation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "wrapfn_", make_descriptor(t_RinexObservation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexObservation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexObservation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexObservation::initializeClass, 1)))
              return NULL;
            return t_RinexObservation::wrap_Object(RinexObservation(((t_RinexObservation *) arg)->object.this$));
          }
          static PyObject *t_RinexObservation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexObservation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexObservation_of_(t_RinexObservation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexObservation_init_(t_RinexObservation *self, PyObject *args, PyObject *kwds)
          {
            RinexObservation object((jobject) NULL);

            INT_CALL(object = RinexObservation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::observation::PY_TYPE(RinexObservationHeader);

            return 0;
          }

          static PyObject *t_RinexObservation_addObservationDataSet(t_RinexObservation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addObservationDataSet(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObservationDataSet", arg);
            return NULL;
          }

          static PyObject *t_RinexObservation_getObservationDataSets(t_RinexObservation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationDataSet));
          }
          static PyObject *t_RinexObservation_get__parameters_(t_RinexObservation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexObservation_get__observationDataSets(t_RinexObservation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationDataSets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/AdaptableInterval.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AdaptableInterval::class$ = NULL;
        jmethodID *AdaptableInterval::mids$ = NULL;
        bool AdaptableInterval::live$ = false;

        jclass AdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_021b54f582f9e537] = env->getMethodID(cls, "currentInterval", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AdaptableInterval::currentInterval(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_021b54f582f9e537], a0.this$);
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
        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg);

        static PyMethodDef t_AdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_AdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdaptableInterval)[] = {
          { Py_tp_methods, t_AdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdaptableInterval, t_AdaptableInterval, AdaptableInterval);

        void t_AdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(AdaptableInterval), &PY_TYPE_DEF(AdaptableInterval), module, "AdaptableInterval", 0);
        }

        void t_AdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "class_", make_descriptor(AdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "wrapfn_", make_descriptor(t_AdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_AdaptableInterval::wrap_Object(AdaptableInterval(((t_AdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_AdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdaptableInterval_currentInterval(t_AdaptableInterval *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
      }
    }
  }
}
