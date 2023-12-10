#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/PascalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *PascalDistribution::class$ = NULL;
        jmethodID *PascalDistribution::mids$ = NULL;
        bool PascalDistribution::live$ = false;

        jclass PascalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/PascalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_dff5885c2c873297] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PascalDistribution::PascalDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

        jdouble PascalDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jint PascalDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_570ce0828f81a2c1]);
        }

        jdouble PascalDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble PascalDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble PascalDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_dff5885c2c873297]);
        }

        jint PascalDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint PascalDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean PascalDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble PascalDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble PascalDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
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
        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self);
        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args);
        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data);
        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data);
        static PyGetSetDef t_PascalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_PascalDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalMean),
          DECLARE_GET_FIELD(t_PascalDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_PascalDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_PascalDistribution, supportConnected),
          DECLARE_GET_FIELD(t_PascalDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_PascalDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PascalDistribution__methods_[] = {
          DECLARE_METHOD(t_PascalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PascalDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_PascalDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PascalDistribution)[] = {
          { Py_tp_methods, t_PascalDistribution__methods_ },
          { Py_tp_init, (void *) t_PascalDistribution_init_ },
          { Py_tp_getset, t_PascalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PascalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(PascalDistribution, t_PascalDistribution, PascalDistribution);

        void t_PascalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(PascalDistribution), &PY_TYPE_DEF(PascalDistribution), module, "PascalDistribution", 0);
        }

        void t_PascalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "class_", make_descriptor(PascalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "wrapfn_", make_descriptor(t_PascalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PascalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PascalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PascalDistribution::initializeClass, 1)))
            return NULL;
          return t_PascalDistribution::wrap_Object(PascalDistribution(((t_PascalDistribution *) arg)->object.this$));
        }
        static PyObject *t_PascalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PascalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PascalDistribution_init_(t_PascalDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          PascalDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = PascalDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PascalDistribution_cumulativeProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumberOfSuccesses(t_PascalDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_PascalDistribution_getNumericalMean(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_PascalDistribution_getNumericalVariance(t_PascalDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_PascalDistribution_getProbabilityOfSuccess(t_PascalDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_PascalDistribution_getSupportLowerBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_PascalDistribution_getSupportUpperBound(t_PascalDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_PascalDistribution_isSupportConnected(t_PascalDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_PascalDistribution_logProbability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_PascalDistribution_probability(t_PascalDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(PascalDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_PascalDistribution_get__numberOfSuccesses(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__numericalMean(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__numericalVariance(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__probabilityOfSuccess(t_PascalDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_PascalDistribution_get__supportConnected(t_PascalDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_PascalDistribution_get__supportLowerBound(t_PascalDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_PascalDistribution_get__supportUpperBound(t_PascalDistribution *self, void *data)
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
#include "org/orekit/gnss/attitude/GPSBlockIIF.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIF::class$ = NULL;
        jmethodID *GPSBlockIIF::mids$ = NULL;
        bool GPSBlockIIF::live$ = false;
        jdouble GPSBlockIIF::DEFAULT_YAW_BIAS = (jdouble) 0;
        jdouble GPSBlockIIF::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass GPSBlockIIF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e8d0492d42d1957] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIF::GPSBlockIIF(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_8e8d0492d42d1957, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}
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
        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_GPSBlockIIF__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIF, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIF)[] = {
          { Py_tp_methods, t_GPSBlockIIF__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIF_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIF)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIF, t_GPSBlockIIF, GPSBlockIIF);

        void t_GPSBlockIIF::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIF), &PY_TYPE_DEF(GPSBlockIIF), module, "GPSBlockIIF", 0);
        }

        void t_GPSBlockIIF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "class_", make_descriptor(GPSBlockIIF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "wrapfn_", make_descriptor(t_GPSBlockIIF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIF::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIF::DEFAULT_YAW_BIAS));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIF), "DEFAULT_YAW_RATE", make_descriptor(GPSBlockIIF::DEFAULT_YAW_RATE));
        }

        static PyObject *t_GPSBlockIIF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIF::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIF::wrap_Object(GPSBlockIIF(((t_GPSBlockIIF *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIF_init_(t_GPSBlockIIF *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIF object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIF(a0, a1, a2, a3, a4, a5));
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
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/propagation/events/EnablingPredicate.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventEnablingPredicateFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventEnablingPredicateFilter::class$ = NULL;
        jmethodID *EventEnablingPredicateFilter::mids$ = NULL;
        bool EventEnablingPredicateFilter::live$ = false;

        jclass EventEnablingPredicateFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventEnablingPredicateFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_baf3aee712863946] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;Lorg/orekit/propagation/events/EnablingPredicate;)V");
            mids$[mid_g_432f3d328c15ec82] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_d73bb985ffde4156] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_575064c8dc323dd8] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventEnablingPredicateFilter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventEnablingPredicateFilter::EventEnablingPredicateFilter(const ::org::orekit::propagation::events::EventDetector & a0, const ::org::orekit::propagation::events::EnablingPredicate & a1) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_baf3aee712863946, a0.this$, a1.this$)) {}

        jdouble EventEnablingPredicateFilter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_432f3d328c15ec82], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector EventEnablingPredicateFilter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_d73bb985ffde4156]));
        }

        void EventEnablingPredicateFilter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args);
        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self);
        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args);
        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data);
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data);
        static PyGetSetDef t_EventEnablingPredicateFilter__fields_[] = {
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, detector),
          DECLARE_GET_FIELD(t_EventEnablingPredicateFilter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventEnablingPredicateFilter__methods_[] = {
          DECLARE_METHOD(t_EventEnablingPredicateFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventEnablingPredicateFilter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventEnablingPredicateFilter)[] = {
          { Py_tp_methods, t_EventEnablingPredicateFilter__methods_ },
          { Py_tp_init, (void *) t_EventEnablingPredicateFilter_init_ },
          { Py_tp_getset, t_EventEnablingPredicateFilter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventEnablingPredicateFilter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventEnablingPredicateFilter, t_EventEnablingPredicateFilter, EventEnablingPredicateFilter);
        PyObject *t_EventEnablingPredicateFilter::wrap_Object(const EventEnablingPredicateFilter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventEnablingPredicateFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventEnablingPredicateFilter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventEnablingPredicateFilter *self = (t_EventEnablingPredicateFilter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventEnablingPredicateFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventEnablingPredicateFilter), &PY_TYPE_DEF(EventEnablingPredicateFilter), module, "EventEnablingPredicateFilter", 0);
        }

        void t_EventEnablingPredicateFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "class_", make_descriptor(EventEnablingPredicateFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "wrapfn_", make_descriptor(t_EventEnablingPredicateFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventEnablingPredicateFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventEnablingPredicateFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventEnablingPredicateFilter::initializeClass, 1)))
            return NULL;
          return t_EventEnablingPredicateFilter::wrap_Object(EventEnablingPredicateFilter(((t_EventEnablingPredicateFilter *) arg)->object.this$));
        }
        static PyObject *t_EventEnablingPredicateFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventEnablingPredicateFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventEnablingPredicateFilter_of_(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventEnablingPredicateFilter_init_(t_EventEnablingPredicateFilter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          ::org::orekit::propagation::events::EnablingPredicate a1((jobject) NULL);
          EventEnablingPredicateFilter object((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::events::EventDetector::initializeClass, ::org::orekit::propagation::events::EnablingPredicate::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EventEnablingPredicateFilter(a0, a1));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventEnablingPredicateFilter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventEnablingPredicateFilter_g(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventEnablingPredicateFilter_getDetector(t_EventEnablingPredicateFilter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventEnablingPredicateFilter_init(t_EventEnablingPredicateFilter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventEnablingPredicateFilter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventEnablingPredicateFilter_get__parameters_(t_EventEnablingPredicateFilter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventEnablingPredicateFilter_get__detector(t_EventEnablingPredicateFilter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/util/Blendable.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *Vector::class$ = NULL;
      jmethodID *Vector::mids$ = NULL;
      bool Vector::live$ = false;

      jclass Vector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/Vector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_add_9ced07f072dfcaa7] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_add_64eba3c66e57a4a3] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_blendArithmeticallyWith_645b75c05542df02] = env->getMethodID(cls, "blendArithmeticallyWith", "(Lorg/hipparchus/geometry/Vector;D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_distance1_b4822d5266bca26e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceInf_b4822d5266bca26e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_distanceSq_b4822d5266bca26e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_dotProduct_b4822d5266bca26e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
          mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
          mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
          mids$[mid_getNormInf_dff5885c2c873297] = env->getMethodID(cls, "getNormInf", "()D");
          mids$[mid_getNormSq_dff5885c2c873297] = env->getMethodID(cls, "getNormSq", "()D");
          mids$[mid_getZero_2bc1acacbc156182] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_negate_2bc1acacbc156182] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_normalize_2bc1acacbc156182] = env->getMethodID(cls, "normalize", "()Lorg/hipparchus/geometry/Vector;");
          mids$[mid_scalarMultiply_a2f435d4493cecfc] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_9ced07f072dfcaa7] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_subtract_64eba3c66e57a4a3] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Vector Vector::add(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_9ced07f072dfcaa7], a0.this$));
      }

      Vector Vector::add(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_add_64eba3c66e57a4a3], a0, a1.this$));
      }

      Vector Vector::blendArithmeticallyWith(const Vector & a0, jdouble a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_blendArithmeticallyWith_645b75c05542df02], a0.this$, a1));
      }

      jdouble Vector::distance1(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distance1_b4822d5266bca26e], a0.this$);
      }

      jdouble Vector::distanceInf(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceInf_b4822d5266bca26e], a0.this$);
      }

      jdouble Vector::distanceSq(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_distanceSq_b4822d5266bca26e], a0.this$);
      }

      jdouble Vector::dotProduct(const Vector & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_dotProduct_b4822d5266bca26e], a0.this$);
      }

      jdouble Vector::getNorm() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
      }

      jdouble Vector::getNorm1() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
      }

      jdouble Vector::getNormInf() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormInf_dff5885c2c873297]);
      }

      jdouble Vector::getNormSq() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormSq_dff5885c2c873297]);
      }

      Vector Vector::getZero() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_getZero_2bc1acacbc156182]));
      }

      jboolean Vector::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      Vector Vector::negate() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_negate_2bc1acacbc156182]));
      }

      Vector Vector::normalize() const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_normalize_2bc1acacbc156182]));
      }

      Vector Vector::scalarMultiply(jdouble a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_scalarMultiply_a2f435d4493cecfc], a0));
      }

      Vector Vector::subtract(const Vector & a0) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_9ced07f072dfcaa7], a0.this$));
      }

      Vector Vector::subtract(jdouble a0, const Vector & a1) const
      {
        return Vector(env->callObjectMethod(this$, mids$[mid_subtract_64eba3c66e57a4a3], a0, a1.this$));
      }

      ::java::lang::String Vector::toString(const ::java::text::NumberFormat & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
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
      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_add(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_getNorm(t_Vector *self);
      static PyObject *t_Vector_getNorm1(t_Vector *self);
      static PyObject *t_Vector_getNormInf(t_Vector *self);
      static PyObject *t_Vector_getNormSq(t_Vector *self);
      static PyObject *t_Vector_getZero(t_Vector *self);
      static PyObject *t_Vector_isInfinite(t_Vector *self);
      static PyObject *t_Vector_negate(t_Vector *self);
      static PyObject *t_Vector_normalize(t_Vector *self);
      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args);
      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg);
      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm(t_Vector *self, void *data);
      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data);
      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data);
      static PyObject *t_Vector_get__zero(t_Vector *self, void *data);
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data);
      static PyGetSetDef t_Vector__fields_[] = {
        DECLARE_GET_FIELD(t_Vector, infinite),
        DECLARE_GET_FIELD(t_Vector, norm),
        DECLARE_GET_FIELD(t_Vector, norm1),
        DECLARE_GET_FIELD(t_Vector, normInf),
        DECLARE_GET_FIELD(t_Vector, normSq),
        DECLARE_GET_FIELD(t_Vector, zero),
        DECLARE_GET_FIELD(t_Vector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Vector__methods_[] = {
        DECLARE_METHOD(t_Vector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Vector, of_, METH_VARARGS),
        DECLARE_METHOD(t_Vector, add, METH_VARARGS),
        DECLARE_METHOD(t_Vector, blendArithmeticallyWith, METH_VARARGS),
        DECLARE_METHOD(t_Vector, distance1, METH_O),
        DECLARE_METHOD(t_Vector, distanceInf, METH_O),
        DECLARE_METHOD(t_Vector, distanceSq, METH_O),
        DECLARE_METHOD(t_Vector, dotProduct, METH_O),
        DECLARE_METHOD(t_Vector, getNorm, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNorm1, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormInf, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getNormSq, METH_NOARGS),
        DECLARE_METHOD(t_Vector, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Vector, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Vector, negate, METH_NOARGS),
        DECLARE_METHOD(t_Vector, normalize, METH_NOARGS),
        DECLARE_METHOD(t_Vector, scalarMultiply, METH_O),
        DECLARE_METHOD(t_Vector, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Vector, toString, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Vector)[] = {
        { Py_tp_methods, t_Vector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Vector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Vector)[] = {
        &PY_TYPE_DEF(::org::hipparchus::geometry::Point),
        NULL
      };

      DEFINE_TYPE(Vector, t_Vector, Vector);
      PyObject *t_Vector::wrap_Object(const Vector& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_Vector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_Vector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Vector *self = (t_Vector *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_Vector::install(PyObject *module)
      {
        installType(&PY_TYPE(Vector), &PY_TYPE_DEF(Vector), module, "Vector", 0);
      }

      void t_Vector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "class_", make_descriptor(Vector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "wrapfn_", make_descriptor(t_Vector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Vector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Vector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Vector::initializeClass, 1)))
          return NULL;
        return t_Vector::wrap_Object(Vector(((t_Vector *) arg)->object.this$));
      }
      static PyObject *t_Vector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Vector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Vector_of_(t_Vector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Vector_add(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Vector_blendArithmeticallyWith(t_Vector *self, PyObject *args)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        Vector result((jobject) NULL);

        if (!parseArgs(args, "KD", Vector::initializeClass, &a0, &p0, t_Vector::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.blendArithmeticallyWith(a0, a1));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "blendArithmeticallyWith", args);
        return NULL;
      }

      static PyObject *t_Vector_distance1(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distance1(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distance1", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceInf(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceInf(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
        return NULL;
      }

      static PyObject *t_Vector_distanceSq(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.distanceSq(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
        return NULL;
      }

      static PyObject *t_Vector_dotProduct(t_Vector *self, PyObject *arg)
      {
        Vector a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
        {
          OBJ_CALL(result = self->object.dotProduct(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
        return NULL;
      }

      static PyObject *t_Vector_getNorm(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNorm1(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNorm1());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormInf(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormInf());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getNormSq(t_Vector *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormSq());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Vector_getZero(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_isInfinite(t_Vector *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Vector_negate(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_normalize(t_Vector *self)
      {
        Vector result((jobject) NULL);
        OBJ_CALL(result = self->object.normalize());
        return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
      }

      static PyObject *t_Vector_scalarMultiply(t_Vector *self, PyObject *arg)
      {
        jdouble a0;
        Vector result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.scalarMultiply(a0));
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
        return NULL;
      }

      static PyObject *t_Vector_subtract(t_Vector *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Vector a0((jobject) NULL);
            PyTypeObject **p0;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "K", Vector::initializeClass, &a0, &p0, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            Vector a1((jobject) NULL);
            PyTypeObject **p1;
            Vector result((jobject) NULL);

            if (!parseArgs(args, "DK", Vector::initializeClass, &a0, &a1, &p1, t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0, a1));
              return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : t_Vector::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Vector_toString(t_Vector *self, PyObject *arg)
      {
        ::java::text::NumberFormat a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::text::NumberFormat::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toString", arg);
        return NULL;
      }
      static PyObject *t_Vector_get__parameters_(t_Vector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Vector_get__infinite(t_Vector *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Vector_get__norm(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__norm1(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNorm1());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normInf(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormInf());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__normSq(t_Vector *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormSq());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Vector_get__zero(t_Vector *self, void *data)
      {
        Vector value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Vector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/StateMapper.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *StateMapper::class$ = NULL;
        jmethodID *StateMapper::mids$ = NULL;
        bool StateMapper::live$ = false;

        jclass StateMapper::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/StateMapper");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapArrayToState_618a7c03db72e57e] = env->getMethodID(cls, "mapArrayToState", "(Lorg/orekit/time/AbsoluteDate;[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapArrayToState_827bebc97a37b62b] = env->getMethodID(cls, "mapArrayToState", "(D[D[DLorg/orekit/propagation/PropagationType;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_mapDateToDouble_bf1d7732f1acb697] = env->getMethodID(cls, "mapDateToDouble", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_mapDoubleToDate_149a9211a037d799] = env->getMethodID(cls, "mapDoubleToDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapDoubleToDate_4c50520a750977fa] = env->getMethodID(cls, "mapDoubleToDate", "(DLorg/orekit/time/AbsoluteDate;)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_mapStateToArray_747d586861d6528b] = env->getMethodID(cls, "mapStateToArray", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");
            mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::AttitudeProvider StateMapper::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_a904f3d015a354a0]));
        }

        ::org::orekit::frames::Frame StateMapper::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
        }

        jdouble StateMapper::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::org::orekit::orbits::OrbitType StateMapper::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
        }

        ::org::orekit::orbits::PositionAngleType StateMapper::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::getReferenceDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_85703d13e302437e]));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(const ::org::orekit::time::AbsoluteDate & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_618a7c03db72e57e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::SpacecraftState StateMapper::mapArrayToState(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::org::orekit::propagation::PropagationType & a3) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_mapArrayToState_827bebc97a37b62b], a0, a1.this$, a2.this$, a3.this$));
        }

        jdouble StateMapper::mapDateToDouble(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_mapDateToDouble_bf1d7732f1acb697], a0.this$);
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_149a9211a037d799], a0));
        }

        ::org::orekit::time::AbsoluteDate StateMapper::mapDoubleToDate(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_mapDoubleToDate_4c50520a750977fa], a0, a1.this$));
        }

        void StateMapper::mapStateToArray(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_mapStateToArray_747d586861d6528b], a0.this$, a1.this$, a2.this$);
        }

        void StateMapper::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_3cff7c75ea06698c], a0.this$);
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
        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self);
        static PyObject *t_StateMapper_getFrame(t_StateMapper *self);
        static PyObject *t_StateMapper_getMu(t_StateMapper *self);
        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self);
        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self);
        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self);
        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args);
        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg);
        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data);
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data);
        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data);
        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data);
        static PyGetSetDef t_StateMapper__fields_[] = {
          DECLARE_GETSET_FIELD(t_StateMapper, attitudeProvider),
          DECLARE_GET_FIELD(t_StateMapper, frame),
          DECLARE_GET_FIELD(t_StateMapper, mu),
          DECLARE_GET_FIELD(t_StateMapper, orbitType),
          DECLARE_GET_FIELD(t_StateMapper, positionAngleType),
          DECLARE_GET_FIELD(t_StateMapper, referenceDate),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StateMapper__methods_[] = {
          DECLARE_METHOD(t_StateMapper, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateMapper, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getMu, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, getReferenceDate, METH_NOARGS),
          DECLARE_METHOD(t_StateMapper, mapArrayToState, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapDateToDouble, METH_O),
          DECLARE_METHOD(t_StateMapper, mapDoubleToDate, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, mapStateToArray, METH_VARARGS),
          DECLARE_METHOD(t_StateMapper, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateMapper)[] = {
          { Py_tp_methods, t_StateMapper__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StateMapper__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateMapper)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateMapper, t_StateMapper, StateMapper);

        void t_StateMapper::install(PyObject *module)
        {
          installType(&PY_TYPE(StateMapper), &PY_TYPE_DEF(StateMapper), module, "StateMapper", 0);
        }

        void t_StateMapper::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "class_", make_descriptor(StateMapper::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "wrapfn_", make_descriptor(t_StateMapper::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateMapper), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateMapper_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateMapper::initializeClass, 1)))
            return NULL;
          return t_StateMapper::wrap_Object(StateMapper(((t_StateMapper *) arg)->object.this$));
        }
        static PyObject *t_StateMapper_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateMapper::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateMapper_getAttitudeProvider(t_StateMapper *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getFrame(t_StateMapper *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getMu(t_StateMapper *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_StateMapper_getOrbitType(t_StateMapper *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getPositionAngleType(t_StateMapper *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_StateMapper_getReferenceDate(t_StateMapper *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_StateMapper_mapArrayToState(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[D[DK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > a2((jobject) NULL);
              ::org::orekit::propagation::PropagationType a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "D[D[DK", ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(result = self->object.mapArrayToState(a0, a1, a2, a3));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapArrayToState", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDateToDouble(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.mapDateToDouble(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "mapDateToDouble", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_mapDoubleToDate(t_StateMapper *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              jdouble a0;
              ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.mapDoubleToDate(a0, a1));
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "mapDoubleToDate", args);
          return NULL;
        }

        static PyObject *t_StateMapper_mapStateToArray(t_StateMapper *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.mapStateToArray(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "mapStateToArray", args);
          return NULL;
        }

        static PyObject *t_StateMapper_setAttitudeProvider(t_StateMapper *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_StateMapper_get__attitudeProvider(t_StateMapper *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_StateMapper_set__attitudeProvider(t_StateMapper *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_StateMapper_get__frame(t_StateMapper *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__mu(t_StateMapper *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_StateMapper_get__orbitType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__positionAngleType(t_StateMapper *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_StateMapper_get__referenceDate(t_StateMapper *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getReferenceDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *MultivariateFunctionPenaltyAdapter::class$ = NULL;
          jmethodID *MultivariateFunctionPenaltyAdapter::mids$ = NULL;
          bool MultivariateFunctionPenaltyAdapter::live$ = false;

          jclass MultivariateFunctionPenaltyAdapter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/MultivariateFunctionPenaltyAdapter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_252e662bbd2ad425] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateFunction;[D[DD[D)V");
              mids$[mid_value_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          MultivariateFunctionPenaltyAdapter::MultivariateFunctionPenaltyAdapter(const ::org::hipparchus::analysis::MultivariateFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, jdouble a3, const JArray< jdouble > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_252e662bbd2ad425, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

          jdouble MultivariateFunctionPenaltyAdapter::value(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_value_9dc1ec0bcc0a9a29], a0.this$);
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
          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg);

          static PyMethodDef t_MultivariateFunctionPenaltyAdapter__methods_[] = {
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MultivariateFunctionPenaltyAdapter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MultivariateFunctionPenaltyAdapter)[] = {
            { Py_tp_methods, t_MultivariateFunctionPenaltyAdapter__methods_ },
            { Py_tp_init, (void *) t_MultivariateFunctionPenaltyAdapter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MultivariateFunctionPenaltyAdapter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MultivariateFunctionPenaltyAdapter, t_MultivariateFunctionPenaltyAdapter, MultivariateFunctionPenaltyAdapter);

          void t_MultivariateFunctionPenaltyAdapter::install(PyObject *module)
          {
            installType(&PY_TYPE(MultivariateFunctionPenaltyAdapter), &PY_TYPE_DEF(MultivariateFunctionPenaltyAdapter), module, "MultivariateFunctionPenaltyAdapter", 0);
          }

          void t_MultivariateFunctionPenaltyAdapter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "class_", make_descriptor(MultivariateFunctionPenaltyAdapter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "wrapfn_", make_descriptor(t_MultivariateFunctionPenaltyAdapter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunctionPenaltyAdapter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 1)))
              return NULL;
            return t_MultivariateFunctionPenaltyAdapter::wrap_Object(MultivariateFunctionPenaltyAdapter(((t_MultivariateFunctionPenaltyAdapter *) arg)->object.this$));
          }
          static PyObject *t_MultivariateFunctionPenaltyAdapter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MultivariateFunctionPenaltyAdapter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_MultivariateFunctionPenaltyAdapter_init_(t_MultivariateFunctionPenaltyAdapter *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::analysis::MultivariateFunction a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            jdouble a3;
            JArray< jdouble > a4((jobject) NULL);
            MultivariateFunctionPenaltyAdapter object((jobject) NULL);

            if (!parseArgs(args, "k[D[DD[D", ::org::hipparchus::analysis::MultivariateFunction::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = MultivariateFunctionPenaltyAdapter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_MultivariateFunctionPenaltyAdapter_value(t_MultivariateFunctionPenaltyAdapter *self, PyObject *arg)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuverHistory::class$ = NULL;
              jmethodID *OrbitManeuverHistory::mids$ = NULL;
              bool OrbitManeuverHistory::live$ = false;

              jclass OrbitManeuverHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_37938e13c4b70b47] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getManeuvers_2afa36052df4765d] = env->getMethodID(cls, "getManeuvers", "()Ljava/util/List;");
                  mids$[mid_getMetadata_80f8bc417c20f379] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuverHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuverHistory::OrbitManeuverHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_37938e13c4b70b47, a0.this$, a1.this$)) {}

              ::java::util::List OrbitManeuverHistory::getManeuvers() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getManeuvers_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata OrbitManeuverHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_80f8bc417c20f379]));
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
              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self);
              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data);
              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data);
              static PyGetSetDef t_OrbitManeuverHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, maneuvers),
                DECLARE_GET_FIELD(t_OrbitManeuverHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuverHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuverHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getManeuvers, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuverHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuverHistory)[] = {
                { Py_tp_methods, t_OrbitManeuverHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuverHistory_init_ },
                { Py_tp_getset, t_OrbitManeuverHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuverHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuverHistory, t_OrbitManeuverHistory, OrbitManeuverHistory);

              void t_OrbitManeuverHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuverHistory), &PY_TYPE_DEF(OrbitManeuverHistory), module, "OrbitManeuverHistory", 0);
              }

              void t_OrbitManeuverHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "class_", make_descriptor(OrbitManeuverHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "wrapfn_", make_descriptor(t_OrbitManeuverHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuverHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuverHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuverHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuverHistory::wrap_Object(OrbitManeuverHistory(((t_OrbitManeuverHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuverHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuverHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuverHistory_init_(t_OrbitManeuverHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitManeuverHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitManeuverHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitManeuverHistory_getManeuvers(t_OrbitManeuverHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitManeuver));
              }

              static PyObject *t_OrbitManeuverHistory_getMetadata(t_OrbitManeuverHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuverHistory_get__maneuvers(t_OrbitManeuverHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getManeuvers());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuverHistory_get__metadata(t_OrbitManeuverHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitManeuverHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitManeuverHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/models/earth/PythonGeoMagneticFields.h"
#include "org/orekit/models/earth/GeoMagneticFieldFactory$FieldModel.h"
#include "org/orekit/models/earth/GeoMagneticFields.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *PythonGeoMagneticFields::class$ = NULL;
        jmethodID *PythonGeoMagneticFields::mids$ = NULL;
        bool PythonGeoMagneticFields::live$ = false;

        jclass PythonGeoMagneticFields::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/PythonGeoMagneticFields");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getField_4aeee65bc3c68b0b] = env->getMethodID(cls, "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getIGRF_11ad1d91265636f7] = env->getMethodID(cls, "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_getWMM_11ad1d91265636f7] = env->getMethodID(cls, "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGeoMagneticFields::PythonGeoMagneticFields() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonGeoMagneticFields::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonGeoMagneticFields::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonGeoMagneticFields::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self);
        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args);
        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data);
        static PyGetSetDef t_PythonGeoMagneticFields__fields_[] = {
          DECLARE_GET_FIELD(t_PythonGeoMagneticFields, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonGeoMagneticFields__methods_[] = {
          DECLARE_METHOD(t_PythonGeoMagneticFields, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonGeoMagneticFields, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonGeoMagneticFields)[] = {
          { Py_tp_methods, t_PythonGeoMagneticFields__methods_ },
          { Py_tp_init, (void *) t_PythonGeoMagneticFields_init_ },
          { Py_tp_getset, t_PythonGeoMagneticFields__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonGeoMagneticFields)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonGeoMagneticFields, t_PythonGeoMagneticFields, PythonGeoMagneticFields);

        void t_PythonGeoMagneticFields::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonGeoMagneticFields), &PY_TYPE_DEF(PythonGeoMagneticFields), module, "PythonGeoMagneticFields", 1);
        }

        void t_PythonGeoMagneticFields::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "class_", make_descriptor(PythonGeoMagneticFields::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "wrapfn_", make_descriptor(t_PythonGeoMagneticFields::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonGeoMagneticFields), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonGeoMagneticFields::initializeClass);
          JNINativeMethod methods[] = {
            { "getField", "(Lorg/orekit/models/earth/GeoMagneticFieldFactory$FieldModel;D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getField0 },
            { "getIGRF", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getIGRF1 },
            { "getWMM", "(D)Lorg/orekit/models/earth/GeoMagneticField;", (void *) t_PythonGeoMagneticFields_getWMM2 },
            { "pythonDecRef", "()V", (void *) t_PythonGeoMagneticFields_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonGeoMagneticFields_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonGeoMagneticFields::initializeClass, 1)))
            return NULL;
          return t_PythonGeoMagneticFields::wrap_Object(PythonGeoMagneticFields(((t_PythonGeoMagneticFields *) arg)->object.this$));
        }
        static PyObject *t_PythonGeoMagneticFields_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonGeoMagneticFields::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonGeoMagneticFields_init_(t_PythonGeoMagneticFields *self, PyObject *args, PyObject *kwds)
        {
          PythonGeoMagneticFields object((jobject) NULL);

          INT_CALL(object = PythonGeoMagneticFields());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonGeoMagneticFields_finalize(t_PythonGeoMagneticFields *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonGeoMagneticFields_pythonExtension(t_PythonGeoMagneticFields *self, PyObject *args)
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

        static jobject JNICALL t_PythonGeoMagneticFields_getField0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *o0 = ::org::orekit::models::earth::t_GeoMagneticFieldFactory$FieldModel::wrap_Object(::org::orekit::models::earth::GeoMagneticFieldFactory$FieldModel(a0));
          PyObject *result = PyObject_CallMethod(obj, "getField", "Od", o0, (double) a1);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getField", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getIGRF1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getIGRF", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getIGRF", result);
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

        static jobject JNICALL t_PythonGeoMagneticFields_getWMM2(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::models::earth::GeoMagneticField value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getWMM", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::models::earth::GeoMagneticField::initializeClass, &value))
          {
            throwTypeError("getWMM", result);
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

        static void JNICALL t_PythonGeoMagneticFields_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGeoMagneticFields::mids$[PythonGeoMagneticFields::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonGeoMagneticFields_get__self(t_PythonGeoMagneticFields *self, void *data)
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
#include "org/orekit/bodies/PythonCelestialBody.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonCelestialBody::class$ = NULL;
      jmethodID *PythonCelestialBody::mids$ = NULL;
      bool PythonCelestialBody::live$ = false;

      jclass PythonCelestialBody::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonCelestialBody");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyOrientedFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGM_dff5885c2c873297] = env->getMethodID(cls, "getGM", "()D");
          mids$[mid_getInertiallyOrientedFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_toFieldPVCoordinatesProvider_d72544f06817e18b] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonCelestialBody::PythonCelestialBody() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonCelestialBody::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonCelestialBody::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonCelestialBody::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self);
      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args);
      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data);
      static PyGetSetDef t_PythonCelestialBody__fields_[] = {
        DECLARE_GET_FIELD(t_PythonCelestialBody, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonCelestialBody__methods_[] = {
        DECLARE_METHOD(t_PythonCelestialBody, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonCelestialBody, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonCelestialBody, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonCelestialBody)[] = {
        { Py_tp_methods, t_PythonCelestialBody__methods_ },
        { Py_tp_init, (void *) t_PythonCelestialBody_init_ },
        { Py_tp_getset, t_PythonCelestialBody__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonCelestialBody)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonCelestialBody, t_PythonCelestialBody, PythonCelestialBody);

      void t_PythonCelestialBody::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonCelestialBody), &PY_TYPE_DEF(PythonCelestialBody), module, "PythonCelestialBody", 1);
      }

      void t_PythonCelestialBody::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "class_", make_descriptor(PythonCelestialBody::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "wrapfn_", make_descriptor(t_PythonCelestialBody::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonCelestialBody), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonCelestialBody::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getBodyOrientedFrame0 },
          { "getGM", "()D", (void *) t_PythonCelestialBody_getGM1 },
          { "getInertiallyOrientedFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonCelestialBody_getInertiallyOrientedFrame2 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonCelestialBody_getName3 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates4 },
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonCelestialBody_getPVCoordinates5 },
          { "pythonDecRef", "()V", (void *) t_PythonCelestialBody_pythonDecRef6 },
          { "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;", (void *) t_PythonCelestialBody_toFieldPVCoordinatesProvider7 },
        };
        env->registerNatives(cls, methods, 8);
      }

      static PyObject *t_PythonCelestialBody_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonCelestialBody::initializeClass, 1)))
          return NULL;
        return t_PythonCelestialBody::wrap_Object(PythonCelestialBody(((t_PythonCelestialBody *) arg)->object.this$));
      }
      static PyObject *t_PythonCelestialBody_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonCelestialBody::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonCelestialBody_init_(t_PythonCelestialBody *self, PyObject *args, PyObject *kwds)
      {
        PythonCelestialBody object((jobject) NULL);

        INT_CALL(object = PythonCelestialBody());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonCelestialBody_finalize(t_PythonCelestialBody *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonCelestialBody_pythonExtension(t_PythonCelestialBody *self, PyObject *args)
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

      static jobject JNICALL t_PythonCelestialBody_getBodyOrientedFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyOrientedFrame", result);
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

      static jdouble JNICALL t_PythonCelestialBody_getGM1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getGM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getGM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonCelestialBody_getInertiallyOrientedFrame2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInertiallyOrientedFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getInertiallyOrientedFrame", result);
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

      static jobject JNICALL t_PythonCelestialBody_getName3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::lang::String value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getName", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "s", &value))
        {
          throwTypeError("getName", result);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
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

      static jobject JNICALL t_PythonCelestialBody_getPVCoordinates5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
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

      static void JNICALL t_PythonCelestialBody_pythonDecRef6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonCelestialBody_toFieldPVCoordinatesProvider7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonCelestialBody::mids$[PythonCelestialBody::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::FieldPVCoordinatesProvider value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
        PyObject *result = PyObject_CallMethod(obj, "toFieldPVCoordinatesProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, &value))
        {
          throwTypeError("toFieldPVCoordinatesProvider", result);
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

      static PyObject *t_PythonCelestialBody_get__self(t_PythonCelestialBody *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmSegment::class$ = NULL;
            jmethodID *CdmSegment::mids$ = NULL;
            bool CdmSegment::live$ = false;

            jclass CdmSegment::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmSegment");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d60d68b83bd2720c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmSegment::CdmSegment(const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a0, const ::org::orekit::files::ccsds::ndm::cdm::CdmData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_d60d68b83bd2720c, a0.this$, a1.this$)) {}
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
            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args);
            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data);
            static PyGetSetDef t_CdmSegment__fields_[] = {
              DECLARE_GET_FIELD(t_CdmSegment, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmSegment__methods_[] = {
              DECLARE_METHOD(t_CdmSegment, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmSegment, of_, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmSegment)[] = {
              { Py_tp_methods, t_CdmSegment__methods_ },
              { Py_tp_init, (void *) t_CdmSegment_init_ },
              { Py_tp_getset, t_CdmSegment__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmSegment)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
              NULL
            };

            DEFINE_TYPE(CdmSegment, t_CdmSegment, CdmSegment);
            PyObject *t_CdmSegment::wrap_Object(const CdmSegment& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_CdmSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_CdmSegment::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmSegment *self = (t_CdmSegment *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_CdmSegment::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmSegment), &PY_TYPE_DEF(CdmSegment), module, "CdmSegment", 0);
            }

            void t_CdmSegment::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "class_", make_descriptor(CdmSegment::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "wrapfn_", make_descriptor(t_CdmSegment::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmSegment), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmSegment_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmSegment::initializeClass, 1)))
                return NULL;
              return t_CdmSegment::wrap_Object(CdmSegment(((t_CdmSegment *) arg)->object.this$));
            }
            static PyObject *t_CdmSegment_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmSegment::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmSegment_of_(t_CdmSegment *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CdmSegment_init_(t_CdmSegment *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmData a1((jobject) NULL);
              CdmSegment object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmData::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CdmSegment(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmMetadata);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmData);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }
            static PyObject *t_CdmSegment_get__parameters_(t_CdmSegment *self, void *data)
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
#include "org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
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

              ::java::lang::Class *Rtcm1044Data::class$ = NULL;
              jmethodID *Rtcm1044Data::mids$ = NULL;
              bool Rtcm1044Data::live$ = false;

              jclass Rtcm1044Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/ephemeris/Rtcm1044Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getQzssCodeOnL2_570ce0828f81a2c1] = env->getMethodID(cls, "getQzssCodeOnL2", "()I");
                  mids$[mid_getQzssFitInterval_570ce0828f81a2c1] = env->getMethodID(cls, "getQzssFitInterval", "()I");
                  mids$[mid_getQzssNavigationMessage_04782c03bbd8e6fe] = env->getMethodID(cls, "getQzssNavigationMessage", "()Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssNavigationMessage_2735e203a79316ae] = env->getMethodID(cls, "getQzssNavigationMessage", "(Lorg/orekit/time/TimeScales;)Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;");
                  mids$[mid_getQzssToc_dff5885c2c873297] = env->getMethodID(cls, "getQzssToc", "()D");
                  mids$[mid_setQzssCodeOnL2_99803b0791f320ff] = env->getMethodID(cls, "setQzssCodeOnL2", "(I)V");
                  mids$[mid_setQzssFitInterval_99803b0791f320ff] = env->getMethodID(cls, "setQzssFitInterval", "(I)V");
                  mids$[mid_setQzssNavigationMessage_ee4b9dd29db0df25] = env->getMethodID(cls, "setQzssNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
                  mids$[mid_setQzssToc_17db3a65980d3441] = env->getMethodID(cls, "setQzssToc", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1044Data::Rtcm1044Data() : ::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint Rtcm1044Data::getQzssCodeOnL2() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssCodeOnL2_570ce0828f81a2c1]);
              }

              jint Rtcm1044Data::getQzssFitInterval() const
              {
                return env->callIntMethod(this$, mids$[mid_getQzssFitInterval_570ce0828f81a2c1]);
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage() const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_04782c03bbd8e6fe]));
              }

              ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage Rtcm1044Data::getQzssNavigationMessage(const ::org::orekit::time::TimeScales & a0) const
              {
                return ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage(env->callObjectMethod(this$, mids$[mid_getQzssNavigationMessage_2735e203a79316ae], a0.this$));
              }

              jdouble Rtcm1044Data::getQzssToc() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getQzssToc_dff5885c2c873297]);
              }

              void Rtcm1044Data::setQzssCodeOnL2(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssCodeOnL2_99803b0791f320ff], a0);
              }

              void Rtcm1044Data::setQzssFitInterval(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssFitInterval_99803b0791f320ff], a0);
              }

              void Rtcm1044Data::setQzssNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssNavigationMessage_ee4b9dd29db0df25], a0.this$);
              }

              void Rtcm1044Data::setQzssToc(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setQzssToc_17db3a65980d3441], a0);
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
              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args);
              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self);
              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg);
              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data);
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_Rtcm1044Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssCodeOnL2),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssFitInterval),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssNavigationMessage),
                DECLARE_GETSET_FIELD(t_Rtcm1044Data, qzssToc),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1044Data__methods_[] = {
                DECLARE_METHOD(t_Rtcm1044Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssCodeOnL2, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssFitInterval, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssNavigationMessage, METH_VARARGS),
                DECLARE_METHOD(t_Rtcm1044Data, getQzssToc, METH_NOARGS),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssCodeOnL2, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssFitInterval, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssNavigationMessage, METH_O),
                DECLARE_METHOD(t_Rtcm1044Data, setQzssToc, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1044Data)[] = {
                { Py_tp_methods, t_Rtcm1044Data__methods_ },
                { Py_tp_init, (void *) t_Rtcm1044Data_init_ },
                { Py_tp_getset, t_Rtcm1044Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1044Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::ephemeris::RtcmEphemerisData),
                NULL
              };

              DEFINE_TYPE(Rtcm1044Data, t_Rtcm1044Data, Rtcm1044Data);

              void t_Rtcm1044Data::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1044Data), &PY_TYPE_DEF(Rtcm1044Data), module, "Rtcm1044Data", 0);
              }

              void t_Rtcm1044Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "class_", make_descriptor(Rtcm1044Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "wrapfn_", make_descriptor(t_Rtcm1044Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1044Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1044Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1044Data::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1044Data::wrap_Object(Rtcm1044Data(((t_Rtcm1044Data *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1044Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1044Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Rtcm1044Data_init_(t_Rtcm1044Data *self, PyObject *args, PyObject *kwds)
              {
                Rtcm1044Data object((jobject) NULL);

                INT_CALL(object = Rtcm1044Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_Rtcm1044Data_getQzssCodeOnL2(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssFitInterval(t_Rtcm1044Data *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_Rtcm1044Data_getQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);
                    OBJ_CALL(result = self->object.getQzssNavigationMessage());
                    return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                  }
                  break;
                 case 1:
                  {
                    ::org::orekit::time::TimeScales a0((jobject) NULL);
                    ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.getQzssNavigationMessage(a0));
                      return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "getQzssNavigationMessage", args);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_getQzssToc(t_Rtcm1044Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getQzssToc());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Rtcm1044Data_setQzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssCodeOnL2(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssCodeOnL2", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssFitInterval(t_Rtcm1044Data *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setQzssFitInterval(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssFitInterval", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setQzssNavigationMessage(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssNavigationMessage", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_setQzssToc(t_Rtcm1044Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setQzssToc(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setQzssToc", arg);
                return NULL;
              }

              static PyObject *t_Rtcm1044Data_get__qzssCodeOnL2(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssCodeOnL2());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssCodeOnL2(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssCodeOnL2(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssCodeOnL2", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssFitInterval(t_Rtcm1044Data *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getQzssFitInterval());
                return PyLong_FromLong((long) value);
              }
              static int t_Rtcm1044Data_set__qzssFitInterval(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setQzssFitInterval(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssFitInterval", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssNavigationMessage(t_Rtcm1044Data *self, void *data)
              {
                ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                OBJ_CALL(value = self->object.getQzssNavigationMessage());
                return ::org::orekit::propagation::analytical::gnss::data::t_QZSSLegacyNavigationMessage::wrap_Object(value);
              }
              static int t_Rtcm1044Data_set__qzssNavigationMessage(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &value))
                  {
                    INT_CALL(self->object.setQzssNavigationMessage(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssNavigationMessage", arg);
                return -1;
              }

              static PyObject *t_Rtcm1044Data_get__qzssToc(t_Rtcm1044Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getQzssToc());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Rtcm1044Data_set__qzssToc(t_Rtcm1044Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setQzssToc(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "qzssToc", arg);
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
#include "org/orekit/gnss/metric/messages/common/PhaseBias.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *PhaseBias::class$ = NULL;
            jmethodID *PhaseBias::mids$ = NULL;
            bool PhaseBias::live$ = false;

            jclass PhaseBias::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/PhaseBias");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_d3567be8070cd240] = env->getMethodID(cls, "<init>", "(IZIID)V");
                mids$[mid_getDiscontinuityCounter_570ce0828f81a2c1] = env->getMethodID(cls, "getDiscontinuityCounter", "()I");
                mids$[mid_getPhaseBias_dff5885c2c873297] = env->getMethodID(cls, "getPhaseBias", "()D");
                mids$[mid_getSignalID_570ce0828f81a2c1] = env->getMethodID(cls, "getSignalID", "()I");
                mids$[mid_getSignalWideLaneIntegerIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getSignalWideLaneIntegerIndicator", "()I");
                mids$[mid_isSignalInteger_b108b35ef48e27bd] = env->getMethodID(cls, "isSignalInteger", "()Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PhaseBias::PhaseBias(jint a0, jboolean a1, jint a2, jint a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d3567be8070cd240, a0, a1, a2, a3, a4)) {}

            jint PhaseBias::getDiscontinuityCounter() const
            {
              return env->callIntMethod(this$, mids$[mid_getDiscontinuityCounter_570ce0828f81a2c1]);
            }

            jdouble PhaseBias::getPhaseBias() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPhaseBias_dff5885c2c873297]);
            }

            jint PhaseBias::getSignalID() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalID_570ce0828f81a2c1]);
            }

            jint PhaseBias::getSignalWideLaneIntegerIndicator() const
            {
              return env->callIntMethod(this$, mids$[mid_getSignalWideLaneIntegerIndicator_570ce0828f81a2c1]);
            }

            jboolean PhaseBias::isSignalInteger() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isSignalInteger_b108b35ef48e27bd]);
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
            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self);
            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self);
            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self);
            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data);
            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data);
            static PyGetSetDef t_PhaseBias__fields_[] = {
              DECLARE_GET_FIELD(t_PhaseBias, discontinuityCounter),
              DECLARE_GET_FIELD(t_PhaseBias, phaseBias),
              DECLARE_GET_FIELD(t_PhaseBias, signalID),
              DECLARE_GET_FIELD(t_PhaseBias, signalInteger),
              DECLARE_GET_FIELD(t_PhaseBias, signalWideLaneIntegerIndicator),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PhaseBias__methods_[] = {
              DECLARE_METHOD(t_PhaseBias, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PhaseBias, getDiscontinuityCounter, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getPhaseBias, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalID, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, getSignalWideLaneIntegerIndicator, METH_NOARGS),
              DECLARE_METHOD(t_PhaseBias, isSignalInteger, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PhaseBias)[] = {
              { Py_tp_methods, t_PhaseBias__methods_ },
              { Py_tp_init, (void *) t_PhaseBias_init_ },
              { Py_tp_getset, t_PhaseBias__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PhaseBias)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PhaseBias, t_PhaseBias, PhaseBias);

            void t_PhaseBias::install(PyObject *module)
            {
              installType(&PY_TYPE(PhaseBias), &PY_TYPE_DEF(PhaseBias), module, "PhaseBias", 0);
            }

            void t_PhaseBias::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "class_", make_descriptor(PhaseBias::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "wrapfn_", make_descriptor(t_PhaseBias::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseBias), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_PhaseBias_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PhaseBias::initializeClass, 1)))
                return NULL;
              return t_PhaseBias::wrap_Object(PhaseBias(((t_PhaseBias *) arg)->object.this$));
            }
            static PyObject *t_PhaseBias_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PhaseBias::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PhaseBias_init_(t_PhaseBias *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jboolean a1;
              jint a2;
              jint a3;
              jdouble a4;
              PhaseBias object((jobject) NULL);

              if (!parseArgs(args, "IZIID", &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = PhaseBias(a0, a1, a2, a3, a4));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_PhaseBias_getDiscontinuityCounter(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getPhaseBias(t_PhaseBias *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PhaseBias_getSignalID(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalID());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_getSignalWideLaneIntegerIndicator(t_PhaseBias *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_PhaseBias_isSignalInteger(t_PhaseBias *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isSignalInteger());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_PhaseBias_get__discontinuityCounter(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getDiscontinuityCounter());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__phaseBias(t_PhaseBias *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPhaseBias());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_PhaseBias_get__signalID(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalID());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_PhaseBias_get__signalInteger(t_PhaseBias *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isSignalInteger());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_PhaseBias_get__signalWideLaneIntegerIndicator(t_PhaseBias *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSignalWideLaneIntegerIndicator());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *STMEquations::class$ = NULL;
          jmethodID *STMEquations::mids$ = NULL;
          bool STMEquations::live$ = false;

          jclass STMEquations::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/STMEquations");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ec35a1651f7b6401] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;)V");
              mids$[mid_combinedDerivatives_4fc0958a0539e1d3] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
              mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getStateTransitionMatrix_9483b2ac438718ce] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_setInitialPhi_f43130c50e9fafeb] = env->getMethodID(cls, "setInitialPhi", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          STMEquations::STMEquations(const ::org::orekit::bodies::CR3BPSystem & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec35a1651f7b6401, a0.this$)) {}

          ::org::orekit::propagation::integration::CombinedDerivatives STMEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_4fc0958a0539e1d3], a0.this$));
          }

          jint STMEquations::getDimension() const
          {
            return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
          }

          ::java::lang::String STMEquations::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::org::hipparchus::linear::RealMatrix STMEquations::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_9483b2ac438718ce], a0.this$));
          }

          ::org::orekit::propagation::SpacecraftState STMEquations::setInitialPhi(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialPhi_f43130c50e9fafeb], a0.this$));
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
          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg);
          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds);
          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_getDimension(t_STMEquations *self);
          static PyObject *t_STMEquations_getName(t_STMEquations *self);
          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg);
          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data);
          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data);
          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data);
          static PyGetSetDef t_STMEquations__fields_[] = {
            DECLARE_GET_FIELD(t_STMEquations, dimension),
            DECLARE_SET_FIELD(t_STMEquations, initialPhi),
            DECLARE_GET_FIELD(t_STMEquations, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_STMEquations__methods_[] = {
            DECLARE_METHOD(t_STMEquations, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_STMEquations, combinedDerivatives, METH_O),
            DECLARE_METHOD(t_STMEquations, getDimension, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getName, METH_NOARGS),
            DECLARE_METHOD(t_STMEquations, getStateTransitionMatrix, METH_O),
            DECLARE_METHOD(t_STMEquations, setInitialPhi, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(STMEquations)[] = {
            { Py_tp_methods, t_STMEquations__methods_ },
            { Py_tp_init, (void *) t_STMEquations_init_ },
            { Py_tp_getset, t_STMEquations__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(STMEquations)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(STMEquations, t_STMEquations, STMEquations);

          void t_STMEquations::install(PyObject *module)
          {
            installType(&PY_TYPE(STMEquations), &PY_TYPE_DEF(STMEquations), module, "STMEquations", 0);
          }

          void t_STMEquations::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "class_", make_descriptor(STMEquations::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "wrapfn_", make_descriptor(t_STMEquations::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(STMEquations), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_STMEquations_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, STMEquations::initializeClass, 1)))
              return NULL;
            return t_STMEquations::wrap_Object(STMEquations(((t_STMEquations *) arg)->object.this$));
          }
          static PyObject *t_STMEquations_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, STMEquations::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_STMEquations_init_(t_STMEquations *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
            STMEquations object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0))
            {
              INT_CALL(object = STMEquations(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_STMEquations_combinedDerivatives(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combinedDerivatives(a0));
              return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_getDimension(t_STMEquations *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getDimension());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_STMEquations_getName(t_STMEquations *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_STMEquations_getStateTransitionMatrix(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getStateTransitionMatrix", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_setInitialPhi(t_STMEquations *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.setInitialPhi(a0));
              return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setInitialPhi", arg);
            return NULL;
          }

          static PyObject *t_STMEquations_get__dimension(t_STMEquations *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getDimension());
            return PyLong_FromLong((long) value);
          }

          static int t_STMEquations_set__initialPhi(t_STMEquations *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setInitialPhi(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "initialPhi", arg);
            return -1;
          }

          static PyObject *t_STMEquations_get__name(t_STMEquations *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/FieldChronologicalComparator.h"
#include "java/util/Comparator.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *FieldChronologicalComparator::class$ = NULL;
      jmethodID *FieldChronologicalComparator::mids$ = NULL;
      bool FieldChronologicalComparator::live$ = false;

      jclass FieldChronologicalComparator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/FieldChronologicalComparator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_compare_b98e5893a91c8891] = env->getMethodID(cls, "compare", "(Lorg/orekit/time/FieldTimeStamped;Lorg/orekit/time/FieldTimeStamped;)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldChronologicalComparator::FieldChronologicalComparator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      jint FieldChronologicalComparator::compare(const ::org::orekit::time::FieldTimeStamped & a0, const ::org::orekit::time::FieldTimeStamped & a1) const
      {
        return env->callIntMethod(this$, mids$[mid_compare_b98e5893a91c8891], a0.this$, a1.this$);
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
      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args);
      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args);
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data);
      static PyGetSetDef t_FieldChronologicalComparator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldChronologicalComparator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldChronologicalComparator__methods_[] = {
        DECLARE_METHOD(t_FieldChronologicalComparator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldChronologicalComparator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldChronologicalComparator, compare, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldChronologicalComparator)[] = {
        { Py_tp_methods, t_FieldChronologicalComparator__methods_ },
        { Py_tp_init, (void *) t_FieldChronologicalComparator_init_ },
        { Py_tp_getset, t_FieldChronologicalComparator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldChronologicalComparator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldChronologicalComparator, t_FieldChronologicalComparator, FieldChronologicalComparator);
      PyObject *t_FieldChronologicalComparator::wrap_Object(const FieldChronologicalComparator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldChronologicalComparator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldChronologicalComparator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldChronologicalComparator *self = (t_FieldChronologicalComparator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldChronologicalComparator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldChronologicalComparator), &PY_TYPE_DEF(FieldChronologicalComparator), module, "FieldChronologicalComparator", 0);
      }

      void t_FieldChronologicalComparator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "class_", make_descriptor(FieldChronologicalComparator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "wrapfn_", make_descriptor(t_FieldChronologicalComparator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldChronologicalComparator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldChronologicalComparator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldChronologicalComparator::initializeClass, 1)))
          return NULL;
        return t_FieldChronologicalComparator::wrap_Object(FieldChronologicalComparator(((t_FieldChronologicalComparator *) arg)->object.this$));
      }
      static PyObject *t_FieldChronologicalComparator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldChronologicalComparator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldChronologicalComparator_of_(t_FieldChronologicalComparator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldChronologicalComparator_init_(t_FieldChronologicalComparator *self, PyObject *args, PyObject *kwds)
      {
        FieldChronologicalComparator object((jobject) NULL);

        INT_CALL(object = FieldChronologicalComparator());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldChronologicalComparator_compare(t_FieldChronologicalComparator *self, PyObject *args)
      {
        ::org::orekit::time::FieldTimeStamped a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeStamped a1((jobject) NULL);
        PyTypeObject **p1;
        jint result;

        if (!parseArgs(args, "KK", ::org::orekit::time::FieldTimeStamped::initializeClass, ::org::orekit::time::FieldTimeStamped::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldTimeStamped::parameters_, &a1, &p1, ::org::orekit::time::t_FieldTimeStamped::parameters_))
        {
          OBJ_CALL(result = self->object.compare(a0, a1));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "compare", args);
        return NULL;
      }
      static PyObject *t_FieldChronologicalComparator_get__parameters_(t_FieldChronologicalComparator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/UncorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
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
          mids$[mid_init$_0ff92a3db7c55279] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_48c24d51511e841c] = env->getMethodID(cls, "<init>", "([D[DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(jint a0, const ::org::hipparchus::random::NormalizedRandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0ff92a3db7c55279, a0, a1.this$)) {}

      UncorrelatedRandomVectorGenerator::UncorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_48c24d51511e841c, a0.this$, a1.this$, a2.this$)) {}

      JArray< jdouble > UncorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
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
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadata::class$ = NULL;
              jmethodID *OmmMetadata::mids$ = NULL;
              bool OmmMetadata::live$ = false;
              ::java::lang::String *OmmMetadata::DSST_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP4_XP_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP_SGP4_THEORY = NULL;

              jclass OmmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getMeanElementTheory_11b109bd155ca898] = env->getMethodID(cls, "getMeanElementTheory", "()Ljava/lang/String;");
                  mids$[mid_setMeanElementTheory_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMeanElementTheory", "(Ljava/lang/String;)V");
                  mids$[mid_theoryIsSgpSdp_b108b35ef48e27bd] = env->getMethodID(cls, "theoryIsSgpSdp", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DSST_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "DSST_THEORY", "Ljava/lang/String;"));
                  SGP4_XP_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP4_XP_THEORY", "Ljava/lang/String;"));
                  SGP_SGP4_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP_SGP4_THEORY", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmMetadata::OmmMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::java::lang::String OmmMetadata::getMeanElementTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeanElementTheory_11b109bd155ca898]));
              }

              void OmmMetadata::setMeanElementTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanElementTheory_d0bc48d5b00dc40c], a0.this$);
              }

              jboolean OmmMetadata::theoryIsSgpSdp() const
              {
                return env->callBooleanMethod(this$, mids$[mid_theoryIsSgpSdp_b108b35ef48e27bd]);
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
            namespace omm {
              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg);
              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data);
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmMetadata, meanElementTheory),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadata__methods_[] = {
                DECLARE_METHOD(t_OmmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, getMeanElementTheory, METH_NOARGS),
                DECLARE_METHOD(t_OmmMetadata, setMeanElementTheory, METH_O),
                DECLARE_METHOD(t_OmmMetadata, theoryIsSgpSdp, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadata)[] = {
                { Py_tp_methods, t_OmmMetadata__methods_ },
                { Py_tp_init, (void *) t_OmmMetadata_init_ },
                { Py_tp_getset, t_OmmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OmmMetadata, t_OmmMetadata, OmmMetadata);

              void t_OmmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadata), &PY_TYPE_DEF(OmmMetadata), module, "OmmMetadata", 0);
              }

              void t_OmmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "class_", make_descriptor(OmmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "wrapfn_", make_descriptor(t_OmmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "DSST_THEORY", make_descriptor(j2p(*OmmMetadata::DSST_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP4_XP_THEORY", make_descriptor(j2p(*OmmMetadata::SGP4_XP_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP_SGP4_THEORY", make_descriptor(j2p(*OmmMetadata::SGP_SGP4_THEORY)));
              }

              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadata::wrap_Object(OmmMetadata(((t_OmmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds)
              {
                OmmMetadata object((jobject) NULL);

                INT_CALL(object = OmmMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getMeanElementTheory());
                return j2p(result);
              }

              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setMeanElementTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanElementTheory", arg);
                return NULL;
              }

              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.theoryIsSgpSdp());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getMeanElementTheory());
                return j2p(value);
              }
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setMeanElementTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanElementTheory", arg);
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
#include "org/orekit/gnss/antenna/Antenna.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *Antenna::class$ = NULL;
        jmethodID *Antenna::mids$ = NULL;
        bool Antenna::live$ = false;

        jclass Antenna::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/Antenna");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getEccentricities_53fff387f14fabf8] = env->getMethodID(cls, "getEccentricities", "(Lorg/orekit/gnss/Frequency;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getFrequencies_2afa36052df4765d] = env->getMethodID(cls, "getFrequencies", "()Ljava/util/List;");
            mids$[mid_getPattern_54cb1a16386102e4] = env->getMethodID(cls, "getPattern", "(Lorg/orekit/gnss/Frequency;)Lorg/orekit/gnss/antenna/FrequencyPattern;");
            mids$[mid_getPhaseCenterVariation_79cf2d2802e92516] = env->getMethodID(cls, "getPhaseCenterVariation", "(Lorg/orekit/gnss/Frequency;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_getSinexCode_11b109bd155ca898] = env->getMethodID(cls, "getSinexCode", "()Ljava/lang/String;");
            mids$[mid_getType_11b109bd155ca898] = env->getMethodID(cls, "getType", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Antenna::getEccentricities(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getEccentricities_53fff387f14fabf8], a0.this$));
        }

        ::java::util::List Antenna::getFrequencies() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFrequencies_2afa36052df4765d]));
        }

        ::org::orekit::gnss::antenna::FrequencyPattern Antenna::getPattern(const ::org::orekit::gnss::Frequency & a0) const
        {
          return ::org::orekit::gnss::antenna::FrequencyPattern(env->callObjectMethod(this$, mids$[mid_getPattern_54cb1a16386102e4], a0.this$));
        }

        jdouble Antenna::getPhaseCenterVariation(const ::org::orekit::gnss::Frequency & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPhaseCenterVariation_79cf2d2802e92516], a0.this$, a1.this$);
        }

        ::java::lang::String Antenna::getSinexCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSinexCode_11b109bd155ca898]));
        }

        ::java::lang::String Antenna::getType() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getType_11b109bd155ca898]));
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
      namespace antenna {
        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getFrequencies(t_Antenna *self);
        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg);
        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args);
        static PyObject *t_Antenna_getSinexCode(t_Antenna *self);
        static PyObject *t_Antenna_getType(t_Antenna *self);
        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data);
        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data);
        static PyGetSetDef t_Antenna__fields_[] = {
          DECLARE_GET_FIELD(t_Antenna, frequencies),
          DECLARE_GET_FIELD(t_Antenna, sinexCode),
          DECLARE_GET_FIELD(t_Antenna, type),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Antenna__methods_[] = {
          DECLARE_METHOD(t_Antenna, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Antenna, getEccentricities, METH_O),
          DECLARE_METHOD(t_Antenna, getFrequencies, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getPattern, METH_O),
          DECLARE_METHOD(t_Antenna, getPhaseCenterVariation, METH_VARARGS),
          DECLARE_METHOD(t_Antenna, getSinexCode, METH_NOARGS),
          DECLARE_METHOD(t_Antenna, getType, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Antenna)[] = {
          { Py_tp_methods, t_Antenna__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Antenna__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Antenna)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Antenna, t_Antenna, Antenna);

        void t_Antenna::install(PyObject *module)
        {
          installType(&PY_TYPE(Antenna), &PY_TYPE_DEF(Antenna), module, "Antenna", 0);
        }

        void t_Antenna::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "class_", make_descriptor(Antenna::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "wrapfn_", make_descriptor(t_Antenna::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Antenna), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Antenna_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Antenna::initializeClass, 1)))
            return NULL;
          return t_Antenna::wrap_Object(Antenna(((t_Antenna *) arg)->object.this$));
        }
        static PyObject *t_Antenna_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Antenna::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Antenna_getEccentricities(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getEccentricities(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEccentricities", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getFrequencies(t_Antenna *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(Frequency));
        }

        static PyObject *t_Antenna_getPattern(t_Antenna *self, PyObject *arg)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::gnss::antenna::FrequencyPattern result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::Frequency::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_))
          {
            OBJ_CALL(result = self->object.getPattern(a0));
            return ::org::orekit::gnss::antenna::t_FrequencyPattern::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPattern", arg);
          return NULL;
        }

        static PyObject *t_Antenna_getPhaseCenterVariation(t_Antenna *self, PyObject *args)
        {
          ::org::orekit::gnss::Frequency a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::Frequency::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &p0, ::org::orekit::gnss::t_Frequency::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.getPhaseCenterVariation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPhaseCenterVariation", args);
          return NULL;
        }

        static PyObject *t_Antenna_getSinexCode(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSinexCode());
          return j2p(result);
        }

        static PyObject *t_Antenna_getType(t_Antenna *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return j2p(result);
        }

        static PyObject *t_Antenna_get__frequencies(t_Antenna *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrequencies());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_Antenna_get__sinexCode(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSinexCode());
          return j2p(value);
        }

        static PyObject *t_Antenna_get__type(t_Antenna *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
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
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_edb3d4e7c6d4d2e6] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toFieldPVCoordinatesProvider_d72544f06817e18b] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates ExtendedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_2cdae1c350dc3e9a], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ExtendedPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_edb3d4e7c6d4d2e6], a0.this$, a1.this$));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider ExtendedPVCoordinatesProvider::toFieldPVCoordinatesProvider(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toFieldPVCoordinatesProvider_d72544f06817e18b], a0.this$));
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
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldSecondaryODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/ode/FieldOrdinaryDifferentialEquation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldExpandableODE::class$ = NULL;
      jmethodID *FieldExpandableODE::mids$ = NULL;
      bool FieldExpandableODE::live$ = false;

      jclass FieldExpandableODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldExpandableODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5411b0ff92f29a0a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;)V");
          mids$[mid_addSecondaryEquations_8ffdb697a2693492] = env->getMethodID(cls, "addSecondaryEquations", "(Lorg/hipparchus/ode/FieldSecondaryODE;)I");
          mids$[mid_computeDerivatives_895918d31d24de7c] = env->getMethodID(cls, "computeDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMapper_49938af8a63b9487] = env->getMethodID(cls, "getMapper", "()Lorg/hipparchus/ode/FieldEquationsMapper;");
          mids$[mid_getPrimary_ec8fc8e0505493fc] = env->getMethodID(cls, "getPrimary", "()Lorg/hipparchus/ode/FieldOrdinaryDifferentialEquation;");
          mids$[mid_init_e269d011240a2d04] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldExpandableODE::FieldExpandableODE(const ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5411b0ff92f29a0a, a0.this$)) {}

      jint FieldExpandableODE::addSecondaryEquations(const ::org::hipparchus::ode::FieldSecondaryODE & a0) const
      {
        return env->callIntMethod(this$, mids$[mid_addSecondaryEquations_8ffdb697a2693492], a0.this$);
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldExpandableODE::computeDerivatives(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_895918d31d24de7c], a0.this$, a1.this$));
      }

      ::org::hipparchus::ode::FieldEquationsMapper FieldExpandableODE::getMapper() const
      {
        return ::org::hipparchus::ode::FieldEquationsMapper(env->callObjectMethod(this$, mids$[mid_getMapper_49938af8a63b9487]));
      }

      ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation FieldExpandableODE::getPrimary() const
      {
        return ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation(env->callObjectMethod(this$, mids$[mid_getPrimary_ec8fc8e0505493fc]));
      }

      void FieldExpandableODE::init(const ::org::hipparchus::ode::FieldODEState & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_e269d011240a2d04], a0.this$, a1.this$);
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
      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args);
      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg);
      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self);
      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args);
      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data);
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data);
      static PyGetSetDef t_FieldExpandableODE__fields_[] = {
        DECLARE_GET_FIELD(t_FieldExpandableODE, mapper),
        DECLARE_GET_FIELD(t_FieldExpandableODE, primary),
        DECLARE_GET_FIELD(t_FieldExpandableODE, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldExpandableODE__methods_[] = {
        DECLARE_METHOD(t_FieldExpandableODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldExpandableODE, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, addSecondaryEquations, METH_O),
        DECLARE_METHOD(t_FieldExpandableODE, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getMapper, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, getPrimary, METH_NOARGS),
        DECLARE_METHOD(t_FieldExpandableODE, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldExpandableODE)[] = {
        { Py_tp_methods, t_FieldExpandableODE__methods_ },
        { Py_tp_init, (void *) t_FieldExpandableODE_init_ },
        { Py_tp_getset, t_FieldExpandableODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldExpandableODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldExpandableODE, t_FieldExpandableODE, FieldExpandableODE);
      PyObject *t_FieldExpandableODE::wrap_Object(const FieldExpandableODE& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldExpandableODE::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldExpandableODE::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldExpandableODE *self = (t_FieldExpandableODE *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldExpandableODE::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldExpandableODE), &PY_TYPE_DEF(FieldExpandableODE), module, "FieldExpandableODE", 0);
      }

      void t_FieldExpandableODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "class_", make_descriptor(FieldExpandableODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "wrapfn_", make_descriptor(t_FieldExpandableODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldExpandableODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldExpandableODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldExpandableODE::initializeClass, 1)))
          return NULL;
        return t_FieldExpandableODE::wrap_Object(FieldExpandableODE(((t_FieldExpandableODE *) arg)->object.this$));
      }
      static PyObject *t_FieldExpandableODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldExpandableODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldExpandableODE_of_(t_FieldExpandableODE *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldExpandableODE_init_(t_FieldExpandableODE *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation a0((jobject) NULL);
        PyTypeObject **p0;
        FieldExpandableODE object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::parameters_))
        {
          INT_CALL(object = FieldExpandableODE(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldExpandableODE_addSecondaryEquations(t_FieldExpandableODE *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldSecondaryODE a0((jobject) NULL);
        PyTypeObject **p0;
        jint result;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldSecondaryODE::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldSecondaryODE::parameters_))
        {
          OBJ_CALL(result = self->object.addSecondaryEquations(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "addSecondaryEquations", arg);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_computeDerivatives(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_FieldExpandableODE_getMapper(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldEquationsMapper result((jobject) NULL);
        OBJ_CALL(result = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_getPrimary(t_FieldExpandableODE *self)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldExpandableODE_init(t_FieldExpandableODE *self, PyObject *args)
      {
        ::org::hipparchus::ode::FieldODEState a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.init(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }
      static PyObject *t_FieldExpandableODE_get__parameters_(t_FieldExpandableODE *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldExpandableODE_get__mapper(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldEquationsMapper value((jobject) NULL);
        OBJ_CALL(value = self->object.getMapper());
        return ::org::hipparchus::ode::t_FieldEquationsMapper::wrap_Object(value);
      }

      static PyObject *t_FieldExpandableODE_get__primary(t_FieldExpandableODE *self, void *data)
      {
        ::org::hipparchus::ode::FieldOrdinaryDifferentialEquation value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrimary());
        return ::org::hipparchus::ode::t_FieldOrdinaryDifferentialEquation::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealMatrixPreservingVisitor::class$ = NULL;
      jmethodID *RealMatrixPreservingVisitor::mids$ = NULL;
      bool RealMatrixPreservingVisitor::live$ = false;

      jclass RealMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_1506189166690b5e] = env->getMethodID(cls, "visit", "(IID)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble RealMatrixPreservingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void RealMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      void RealMatrixPreservingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_1506189166690b5e], a0, a1, a2);
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
      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self);
      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args);

      static PyMethodDef t_RealMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_RealMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_RealMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealMatrixPreservingVisitor, t_RealMatrixPreservingVisitor, RealMatrixPreservingVisitor);

      void t_RealMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(RealMatrixPreservingVisitor), &PY_TYPE_DEF(RealMatrixPreservingVisitor), module, "RealMatrixPreservingVisitor", 0);
      }

      void t_RealMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "class_", make_descriptor(RealMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_RealMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_RealMatrixPreservingVisitor::wrap_Object(RealMatrixPreservingVisitor(((t_RealMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_RealMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealMatrixPreservingVisitor_end(t_RealMatrixPreservingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_RealMatrixPreservingVisitor_start(t_RealMatrixPreservingVisitor *self, PyObject *args)
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

      static PyObject *t_RealMatrixPreservingVisitor_visit(t_RealMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovariance.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitCovarianceHistory::class$ = NULL;
              jmethodID *OrbitCovarianceHistory::mids$ = NULL;
              bool OrbitCovarianceHistory::live$ = false;

              jclass OrbitCovarianceHistory::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistory");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_249d15805ddb0f3b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;Ljava/util/List;)V");
                  mids$[mid_getCovariances_2afa36052df4765d] = env->getMethodID(cls, "getCovariances", "()Ljava/util/List;");
                  mids$[mid_getMetadata_2317704d1a3d739b] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/odm/ocm/OrbitCovarianceHistoryMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitCovarianceHistory::OrbitCovarianceHistory(const ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_249d15805ddb0f3b, a0.this$, a1.this$)) {}

              ::java::util::List OrbitCovarianceHistory::getCovariances() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovariances_2afa36052df4765d]));
              }

              ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata OrbitCovarianceHistory::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_2317704d1a3d739b]));
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
              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self);
              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data);
              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data);
              static PyGetSetDef t_OrbitCovarianceHistory__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, covariances),
                DECLARE_GET_FIELD(t_OrbitCovarianceHistory, metadata),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitCovarianceHistory__methods_[] = {
                DECLARE_METHOD(t_OrbitCovarianceHistory, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getCovariances, METH_NOARGS),
                DECLARE_METHOD(t_OrbitCovarianceHistory, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitCovarianceHistory)[] = {
                { Py_tp_methods, t_OrbitCovarianceHistory__methods_ },
                { Py_tp_init, (void *) t_OrbitCovarianceHistory_init_ },
                { Py_tp_getset, t_OrbitCovarianceHistory__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitCovarianceHistory)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitCovarianceHistory, t_OrbitCovarianceHistory, OrbitCovarianceHistory);

              void t_OrbitCovarianceHistory::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitCovarianceHistory), &PY_TYPE_DEF(OrbitCovarianceHistory), module, "OrbitCovarianceHistory", 0);
              }

              void t_OrbitCovarianceHistory::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "class_", make_descriptor(OrbitCovarianceHistory::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "wrapfn_", make_descriptor(t_OrbitCovarianceHistory::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitCovarianceHistory), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitCovarianceHistory_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitCovarianceHistory::initializeClass, 1)))
                  return NULL;
                return t_OrbitCovarianceHistory::wrap_Object(OrbitCovarianceHistory(((t_OrbitCovarianceHistory *) arg)->object.this$));
              }
              static PyObject *t_OrbitCovarianceHistory_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitCovarianceHistory::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitCovarianceHistory_init_(t_OrbitCovarianceHistory *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                OrbitCovarianceHistory object((jobject) NULL);

                if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = OrbitCovarianceHistory(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_OrbitCovarianceHistory_getCovariances(t_OrbitCovarianceHistory *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::odm::ocm::PY_TYPE(OrbitCovariance));
              }

              static PyObject *t_OrbitCovarianceHistory_getMetadata(t_OrbitCovarianceHistory *self)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(result);
              }

              static PyObject *t_OrbitCovarianceHistory_get__covariances(t_OrbitCovarianceHistory *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovariances());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_OrbitCovarianceHistory_get__metadata(t_OrbitCovarianceHistory *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::odm::ocm::OrbitCovarianceHistoryMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::odm::ocm::t_OrbitCovarianceHistoryMetadata::wrap_Object(value);
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
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LinearLineDatation::class$ = NULL;
        jmethodID *LinearLineDatation::mids$ = NULL;
        bool LinearLineDatation::live$ = false;

        jclass LinearLineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LinearLineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e13c2ecfa437b820] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DD)V");
            mids$[mid_getDate_149a9211a037d799] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_bf1d7732f1acb697] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_dcbc7ce2902fa136] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearLineDatation::LinearLineDatation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e13c2ecfa437b820, a0.this$, a1, a2)) {}

        ::org::orekit::time::AbsoluteDate LinearLineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_149a9211a037d799], a0));
        }

        jdouble LinearLineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_bf1d7732f1acb697], a0.this$);
        }

        jdouble LinearLineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_dcbc7ce2902fa136], a0);
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
      namespace linesensor {
        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg);

        static PyMethodDef t_LinearLineDatation__methods_[] = {
          DECLARE_METHOD(t_LinearLineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearLineDatation)[] = {
          { Py_tp_methods, t_LinearLineDatation__methods_ },
          { Py_tp_init, (void *) t_LinearLineDatation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearLineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearLineDatation, t_LinearLineDatation, LinearLineDatation);

        void t_LinearLineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearLineDatation), &PY_TYPE_DEF(LinearLineDatation), module, "LinearLineDatation", 0);
        }

        void t_LinearLineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "class_", make_descriptor(LinearLineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "wrapfn_", make_descriptor(t_LinearLineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearLineDatation::initializeClass, 1)))
            return NULL;
          return t_LinearLineDatation::wrap_Object(LinearLineDatation(((t_LinearLineDatation *) arg)->object.this$));
        }
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearLineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          LinearLineDatation object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = LinearLineDatation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/cr3bp/STMEquations.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPMultipleShooter::class$ = NULL;
          jmethodID *CR3BPMultipleShooter::mids$ = NULL;
          bool CR3BPMultipleShooter::live$ = false;

          jclass CR3BPMultipleShooter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPMultipleShooter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_15f1e1aa5c607e00] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
              mids$[mid_setClosedOrbitConstraint_bd04c9335fb9e4cf] = env->getMethodID(cls, "setClosedOrbitConstraint", "(Z)V");
              mids$[mid_setEpochFreedom_f61a0322e15bde25] = env->getMethodID(cls, "setEpochFreedom", "(IZ)V");
              mids$[mid_setScaleLength_17db3a65980d3441] = env->getMethodID(cls, "setScaleLength", "(D)V");
              mids$[mid_setScaleTime_17db3a65980d3441] = env->getMethodID(cls, "setScaleTime", "(D)V");
              mids$[mid_getNumberOfConstraints_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfConstraints", "()I");
              mids$[mid_getAugmentedInitialState_8f68ada11fb66675] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_computeAdditionalJacobianMatrix_11c2223c723fd443] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
              mids$[mid_computeAdditionalConstraints_ae31e5696ec6455b] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CR3BPMultipleShooter::CR3BPMultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_15f1e1aa5c607e00, a0.this$, a1.this$, a2.this$, a3, a4)) {}

          void CR3BPMultipleShooter::setClosedOrbitConstraint(jboolean a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClosedOrbitConstraint_bd04c9335fb9e4cf], a0);
          }

          void CR3BPMultipleShooter::setEpochFreedom(jint a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_setEpochFreedom_f61a0322e15bde25], a0, a1);
          }

          void CR3BPMultipleShooter::setScaleLength(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleLength_17db3a65980d3441], a0);
          }

          void CR3BPMultipleShooter::setScaleTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setScaleTime_17db3a65980d3441], a0);
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
          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg);
          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args);
          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args);
          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data);
          static PyGetSetDef t_CR3BPMultipleShooter__fields_[] = {
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, closedOrbitConstraint),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleLength),
            DECLARE_SET_FIELD(t_CR3BPMultipleShooter, scaleTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPMultipleShooter__methods_[] = {
            DECLARE_METHOD(t_CR3BPMultipleShooter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setClosedOrbitConstraint, METH_O),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setEpochFreedom, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleLength, METH_VARARGS),
            DECLARE_METHOD(t_CR3BPMultipleShooter, setScaleTime, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPMultipleShooter)[] = {
            { Py_tp_methods, t_CR3BPMultipleShooter__methods_ },
            { Py_tp_init, (void *) t_CR3BPMultipleShooter_init_ },
            { Py_tp_getset, t_CR3BPMultipleShooter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPMultipleShooter)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
            NULL
          };

          DEFINE_TYPE(CR3BPMultipleShooter, t_CR3BPMultipleShooter, CR3BPMultipleShooter);

          void t_CR3BPMultipleShooter::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPMultipleShooter), &PY_TYPE_DEF(CR3BPMultipleShooter), module, "CR3BPMultipleShooter", 0);
          }

          void t_CR3BPMultipleShooter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "class_", make_descriptor(CR3BPMultipleShooter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "wrapfn_", make_descriptor(t_CR3BPMultipleShooter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPMultipleShooter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPMultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPMultipleShooter::initializeClass, 1)))
              return NULL;
            return t_CR3BPMultipleShooter::wrap_Object(CR3BPMultipleShooter(((t_CR3BPMultipleShooter *) arg)->object.this$));
          }
          static PyObject *t_CR3BPMultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPMultipleShooter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CR3BPMultipleShooter_init_(t_CR3BPMultipleShooter *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jint a4;
            CR3BPMultipleShooter object((jobject) NULL);

            if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
            {
              INT_CALL(object = CR3BPMultipleShooter(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CR3BPMultipleShooter_setClosedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg)
          {
            jboolean a0;

            if (!parseArg(arg, "Z", &a0))
            {
              OBJ_CALL(self->object.setClosedOrbitConstraint(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setClosedOrbitConstraint", arg);
            return NULL;
          }

          static PyObject *t_CR3BPMultipleShooter_setEpochFreedom(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jint a0;
            jboolean a1;

            if (!parseArgs(args, "IZ", &a0, &a1))
            {
              OBJ_CALL(self->object.setEpochFreedom(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setEpochFreedom", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleLength(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleLength(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleLength", args, 2);
          }

          static PyObject *t_CR3BPMultipleShooter_setScaleTime(t_CR3BPMultipleShooter *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setScaleTime(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(CR3BPMultipleShooter), (PyObject *) self, "setScaleTime", args, 2);
          }

          static int t_CR3BPMultipleShooter_set__closedOrbitConstraint(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jboolean value;
              if (!parseArg(arg, "Z", &value))
              {
                INT_CALL(self->object.setClosedOrbitConstraint(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "closedOrbitConstraint", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleLength(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleLength(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleLength", arg);
            return -1;
          }

          static int t_CR3BPMultipleShooter_set__scaleTime(t_CR3BPMultipleShooter *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setScaleTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "scaleTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/stat/LocalizedStatFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {

      ::java::lang::Class *LocalizedStatFormats::class$ = NULL;
      jmethodID *LocalizedStatFormats::mids$ = NULL;
      bool LocalizedStatFormats::live$ = false;
      LocalizedStatFormats *LocalizedStatFormats::COVARIANCE_MATRIX = NULL;
      LocalizedStatFormats *LocalizedStatFormats::ILLEGAL_STATE_PCA = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC = NULL;
      LocalizedStatFormats *LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY = NULL;
      LocalizedStatFormats *LocalizedStatFormats::NO_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE = NULL;
      LocalizedStatFormats *LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::SIGNIFICANCE_LEVEL = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TIES_ARE_NOT_ALLOWED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TOO_MANY_REGRESSORS = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED = NULL;
      LocalizedStatFormats *LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = NULL;

      jclass LocalizedStatFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/stat/LocalizedStatFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_3cd873bfb132c4fd] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_11b109bd155ca898] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_b5b7eb207ab01753] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/LocalizedStatFormats;");
          mids$[mid_values_59ec90acf378cde9] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/LocalizedStatFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          COVARIANCE_MATRIX = new LocalizedStatFormats(env->getStaticObjectField(cls, "COVARIANCE_MATRIX", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          ILLEGAL_STATE_PCA = new LocalizedStatFormats(env->getStaticObjectField(cls, "ILLEGAL_STATE_PCA", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INSUFFICIENT_DATA_FOR_T_STATISTIC = new LocalizedStatFormats(env->getStaticObjectField(cls, "INSUFFICIENT_DATA_FOR_T_STATISTIC", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          INVALID_REGRESSION_OBSERVATION = new LocalizedStatFormats(env->getStaticObjectField(cls, "INVALID_REGRESSION_OBSERVATION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_ENOUGH_DATA_REGRESSION = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_ENOUGH_DATA_REGRESSION", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NOT_SUPPORTED_NAN_STRATEGY = new LocalizedStatFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_NAN_STRATEGY", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          NO_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "NO_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_CONFIDENCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUNDS_QUANTILE_VALUE = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUNDS_QUANTILE_VALUE", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          OUT_OF_BOUND_SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          SIGNIFICANCE_LEVEL = new LocalizedStatFormats(env->getStaticObjectField(cls, "SIGNIFICANCE_LEVEL", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TIES_ARE_NOT_ALLOWED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TIES_ARE_NOT_ALLOWED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TOO_MANY_REGRESSORS = new LocalizedStatFormats(env->getStaticObjectField(cls, "TOO_MANY_REGRESSORS", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_CATEGORIES_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_CATEGORIES_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED = new LocalizedStatFormats(env->getStaticObjectField(cls, "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", "Lorg/hipparchus/stat/LocalizedStatFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedStatFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_3cd873bfb132c4fd], a0.this$));
      }

      ::java::lang::String LocalizedStatFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_11b109bd155ca898]));
      }

      LocalizedStatFormats LocalizedStatFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedStatFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b5b7eb207ab01753], a0.this$));
      }

      JArray< LocalizedStatFormats > LocalizedStatFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedStatFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_59ec90acf378cde9]));
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
      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args);
      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg);
      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self);
      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data);
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data);
      static PyGetSetDef t_LocalizedStatFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedStatFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedStatFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedStatFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedStatFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedStatFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedStatFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedStatFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedStatFormats)[] = {
        { Py_tp_methods, t_LocalizedStatFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedStatFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedStatFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedStatFormats, t_LocalizedStatFormats, LocalizedStatFormats);
      PyObject *t_LocalizedStatFormats::wrap_Object(const LocalizedStatFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedStatFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedStatFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedStatFormats *self = (t_LocalizedStatFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedStatFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedStatFormats), &PY_TYPE_DEF(LocalizedStatFormats), module, "LocalizedStatFormats", 0);
      }

      void t_LocalizedStatFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "class_", make_descriptor(LocalizedStatFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "wrapfn_", make_descriptor(t_LocalizedStatFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedStatFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "COVARIANCE_MATRIX", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::COVARIANCE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "ILLEGAL_STATE_PCA", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::ILLEGAL_STATE_PCA)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INSUFFICIENT_DATA_FOR_T_STATISTIC", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INSUFFICIENT_DATA_FOR_T_STATISTIC)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "INVALID_REGRESSION_OBSERVATION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::INVALID_REGRESSION_OBSERVATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_FOR_NUMBER_OF_PREDICTORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_ENOUGH_DATA_REGRESSION", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_ENOUGH_DATA_REGRESSION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NOT_SUPPORTED_NAN_STRATEGY", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NOT_SUPPORTED_NAN_STRATEGY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "NO_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::NO_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_CONFIDENCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_CONFIDENCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUNDS_QUANTILE_VALUE", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUNDS_QUANTILE_VALUE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "OUT_OF_BOUND_SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::OUT_OF_BOUND_SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "SIGNIFICANCE_LEVEL", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::SIGNIFICANCE_LEVEL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TIES_ARE_NOT_ALLOWED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TIES_ARE_NOT_ALLOWED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TOO_MANY_REGRESSORS", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TOO_MANY_REGRESSORS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_CATEGORIES_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_CATEGORIES_REQUIRED)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedStatFormats), "TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED", make_descriptor(t_LocalizedStatFormats::wrap_Object(*LocalizedStatFormats::TWO_OR_MORE_VALUES_IN_CATEGORY_REQUIRED)));
      }

      static PyObject *t_LocalizedStatFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedStatFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedStatFormats::wrap_Object(LocalizedStatFormats(((t_LocalizedStatFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedStatFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedStatFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedStatFormats_of_(t_LocalizedStatFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedStatFormats_getLocalizedString(t_LocalizedStatFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedStatFormats_getSourceString(t_LocalizedStatFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedStatFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedStatFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::valueOf(a0));
          return t_LocalizedStatFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedStatFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedStatFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::stat::LocalizedStatFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedStatFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedStatFormats_get__parameters_(t_LocalizedStatFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedStatFormats_get__sourceString(t_LocalizedStatFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *FieldTimeDerivativesEquations::class$ = NULL;
        jmethodID *FieldTimeDerivativesEquations::mids$ = NULL;
        bool FieldTimeDerivativesEquations::live$ = false;

        jclass FieldTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/FieldTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_072c8635f2164db9] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addMassDerivative_072c8635f2164db9] = env->getMethodID(cls, "addMassDerivative", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_addNonKeplerianAcceleration_c79ed286e3615fed] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void FieldTimeDerivativesEquations::addKeplerContribution(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_072c8635f2164db9], a0.this$);
        }

        void FieldTimeDerivativesEquations::addMassDerivative(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_072c8635f2164db9], a0.this$);
        }

        void FieldTimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_c79ed286e3615fed], a0.this$);
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
        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args);
        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_FieldTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_FieldTimeDerivativesEquations, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_FieldTimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_FieldTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldTimeDerivativesEquations, t_FieldTimeDerivativesEquations, FieldTimeDerivativesEquations);
        PyObject *t_FieldTimeDerivativesEquations::wrap_Object(const FieldTimeDerivativesEquations& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldTimeDerivativesEquations::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldTimeDerivativesEquations::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldTimeDerivativesEquations *self = (t_FieldTimeDerivativesEquations *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldTimeDerivativesEquations), &PY_TYPE_DEF(FieldTimeDerivativesEquations), module, "FieldTimeDerivativesEquations", 0);
        }

        void t_FieldTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "class_", make_descriptor(FieldTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "wrapfn_", make_descriptor(t_FieldTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_FieldTimeDerivativesEquations::wrap_Object(FieldTimeDerivativesEquations(((t_FieldTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_FieldTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldTimeDerivativesEquations_of_(t_FieldTimeDerivativesEquations *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldTimeDerivativesEquations_addKeplerContribution(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addMassDerivative(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_FieldTimeDerivativesEquations_addNonKeplerianAcceleration(t_FieldTimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
        static PyObject *t_FieldTimeDerivativesEquations_get__parameters_(t_FieldTimeDerivativesEquations *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
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
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
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
          mids$[mid_computeMainStateJacobian_41d6d5aae26e7bb6] = env->getMethodID(cls, "computeMainStateJacobian", "(D[D[D)[[D");
          mids$[mid_computeParameterJacobian_471a10a7837f0228] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");
          mids$[mid_getParametersNames_2afa36052df4765d] = env->getMethodID(cls, "getParametersNames", "()Ljava/util/List;");
          mids$[mid_isSupported_7edad2c2f64f4d68] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< jdouble > > ODEJacobiansProvider::computeMainStateJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_computeMainStateJacobian_41d6d5aae26e7bb6], a0, a1.this$, a2.this$));
      }

      JArray< jdouble > ODEJacobiansProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_471a10a7837f0228], a0, a1.this$, a2.this$, a3.this$));
      }

      ::java::util::List ODEJacobiansProvider::getParametersNames() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersNames_2afa36052df4765d]));
      }

      jboolean ODEJacobiansProvider::isSupported(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupported_7edad2c2f64f4d68], a0.this$);
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
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *AdMethodType::class$ = NULL;
          jmethodID *AdMethodType::mids$ = NULL;
          bool AdMethodType::live$ = false;
          AdMethodType *AdMethodType::BATCH = NULL;
          AdMethodType *AdMethodType::EKF = NULL;
          AdMethodType *AdMethodType::FILTER_SMOOTHER = NULL;
          AdMethodType *AdMethodType::QUEST = NULL;
          AdMethodType *AdMethodType::Q_METHOD = NULL;
          AdMethodType *AdMethodType::TRIAD = NULL;

          jclass AdMethodType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/AdMethodType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_60ad584613f08d0a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/AdMethodType;");
              mids$[mid_values_f5248f7223dd3168] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/AdMethodType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BATCH = new AdMethodType(env->getStaticObjectField(cls, "BATCH", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              EKF = new AdMethodType(env->getStaticObjectField(cls, "EKF", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              FILTER_SMOOTHER = new AdMethodType(env->getStaticObjectField(cls, "FILTER_SMOOTHER", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              QUEST = new AdMethodType(env->getStaticObjectField(cls, "QUEST", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              Q_METHOD = new AdMethodType(env->getStaticObjectField(cls, "Q_METHOD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              TRIAD = new AdMethodType(env->getStaticObjectField(cls, "TRIAD", "Lorg/orekit/files/ccsds/definitions/AdMethodType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AdMethodType AdMethodType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return AdMethodType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_60ad584613f08d0a], a0.this$));
          }

          JArray< AdMethodType > AdMethodType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< AdMethodType >(env->callStaticObjectMethod(cls, mids$[mid_values_f5248f7223dd3168]));
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
          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args);
          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_AdMethodType_values(PyTypeObject *type);
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data);
          static PyGetSetDef t_AdMethodType__fields_[] = {
            DECLARE_GET_FIELD(t_AdMethodType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AdMethodType__methods_[] = {
            DECLARE_METHOD(t_AdMethodType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, of_, METH_VARARGS),
            DECLARE_METHOD(t_AdMethodType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_AdMethodType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AdMethodType)[] = {
            { Py_tp_methods, t_AdMethodType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AdMethodType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AdMethodType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(AdMethodType, t_AdMethodType, AdMethodType);
          PyObject *t_AdMethodType::wrap_Object(const AdMethodType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AdMethodType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AdMethodType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AdMethodType *self = (t_AdMethodType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AdMethodType::install(PyObject *module)
          {
            installType(&PY_TYPE(AdMethodType), &PY_TYPE_DEF(AdMethodType), module, "AdMethodType", 0);
          }

          void t_AdMethodType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "class_", make_descriptor(AdMethodType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "wrapfn_", make_descriptor(t_AdMethodType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "boxfn_", make_descriptor(boxObject));
            env->getClass(AdMethodType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "BATCH", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::BATCH)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "EKF", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::EKF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "FILTER_SMOOTHER", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::FILTER_SMOOTHER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "QUEST", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::QUEST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "Q_METHOD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::Q_METHOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AdMethodType), "TRIAD", make_descriptor(t_AdMethodType::wrap_Object(*AdMethodType::TRIAD)));
          }

          static PyObject *t_AdMethodType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AdMethodType::initializeClass, 1)))
              return NULL;
            return t_AdMethodType::wrap_Object(AdMethodType(((t_AdMethodType *) arg)->object.this$));
          }
          static PyObject *t_AdMethodType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AdMethodType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AdMethodType_of_(t_AdMethodType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AdMethodType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            AdMethodType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::valueOf(a0));
              return t_AdMethodType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_AdMethodType_values(PyTypeObject *type)
          {
            JArray< AdMethodType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::AdMethodType::values());
            return JArray<jobject>(result.this$).wrap(t_AdMethodType::wrap_jobject);
          }
          static PyObject *t_AdMethodType_get__parameters_(t_AdMethodType *self, void *data)
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
#include "org/hipparchus/stat/inference/ChiSquareTest.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *ChiSquareTest::class$ = NULL;
        jmethodID *ChiSquareTest::mids$ = NULL;
        bool ChiSquareTest::live$ = false;

        jclass ChiSquareTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/ChiSquareTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_chiSquare_b90ef0962fb208c4] = env->getMethodID(cls, "chiSquare", "([[J)D");
            mids$[mid_chiSquare_830834389f7bbf30] = env->getMethodID(cls, "chiSquare", "([D[J)D");
            mids$[mid_chiSquareDataSetsComparison_d498b5cc5125fdcb] = env->getMethodID(cls, "chiSquareDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTest_b90ef0962fb208c4] = env->getMethodID(cls, "chiSquareTest", "([[J)D");
            mids$[mid_chiSquareTest_830834389f7bbf30] = env->getMethodID(cls, "chiSquareTest", "([D[J)D");
            mids$[mid_chiSquareTest_b37d0c4bca3b7c28] = env->getMethodID(cls, "chiSquareTest", "([[JD)Z");
            mids$[mid_chiSquareTest_d2b6ad91862e3050] = env->getMethodID(cls, "chiSquareTest", "([D[JD)Z");
            mids$[mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[J)D");
            mids$[mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb] = env->getMethodID(cls, "chiSquareTestDataSetsComparison", "([J[JD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquareTest::ChiSquareTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble ChiSquareTest::chiSquare(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_b90ef0962fb208c4], a0.this$);
        }

        jdouble ChiSquareTest::chiSquare(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquare_830834389f7bbf30], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_b90ef0962fb208c4], a0.this$);
        }

        jdouble ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTest_830834389f7bbf30], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< JArray< jlong > > & a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_b37d0c4bca3b7c28], a0.this$, a1);
        }

        jboolean ChiSquareTest::chiSquareTest(const JArray< jdouble > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTest_d2b6ad91862e3050], a0.this$, a1.this$, a2);
        }

        jdouble ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_d498b5cc5125fdcb], a0.this$, a1.this$);
        }

        jboolean ChiSquareTest::chiSquareTestDataSetsComparison(const JArray< jlong > & a0, const JArray< jlong > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_chiSquareTestDataSetsComparison_9c57b9c7c3ffd7eb], a0.this$, a1.this$, a2);
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
        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args);
        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args);

        static PyMethodDef t_ChiSquareTest__methods_[] = {
          DECLARE_METHOD(t_ChiSquareTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquare, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareDataSetsComparison, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTest, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquareTest, chiSquareTestDataSetsComparison, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquareTest)[] = {
          { Py_tp_methods, t_ChiSquareTest__methods_ },
          { Py_tp_init, (void *) t_ChiSquareTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquareTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ChiSquareTest, t_ChiSquareTest, ChiSquareTest);

        void t_ChiSquareTest::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquareTest), &PY_TYPE_DEF(ChiSquareTest), module, "ChiSquareTest", 0);
        }

        void t_ChiSquareTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "class_", make_descriptor(ChiSquareTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "wrapfn_", make_descriptor(t_ChiSquareTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquareTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquareTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquareTest::initializeClass, 1)))
            return NULL;
          return t_ChiSquareTest::wrap_Object(ChiSquareTest(((t_ChiSquareTest *) arg)->object.this$));
        }
        static PyObject *t_ChiSquareTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquareTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquareTest_init_(t_ChiSquareTest *self, PyObject *args, PyObject *kwds)
        {
          ChiSquareTest object((jobject) NULL);

          INT_CALL(object = ChiSquareTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_ChiSquareTest_chiSquare(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquare(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquare", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          JArray< jlong > a0((jobject) NULL);
          JArray< jlong > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[J[J", &a0, &a1))
          {
            OBJ_CALL(result = self->object.chiSquareDataSetsComparison(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareDataSetsComparison", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTest(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[[J", &a0))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              JArray< JArray< jlong > > a0((jobject) NULL);
              jdouble a1;
              jboolean result;

              if (!parseArgs(args, "[[JD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1));
                Py_RETURN_BOOL(result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTest", args);
          return NULL;
        }

        static PyObject *t_ChiSquareTest_chiSquareTestDataSetsComparison(t_ChiSquareTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[J[J", &a0, &a1))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jlong > a0((jobject) NULL);
              JArray< jlong > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[J[JD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.chiSquareTestDataSetsComparison(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "chiSquareTestDataSetsComparison", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm04Data::class$ = NULL;
              jmethodID *SsrIgm04Data::mids$ = NULL;
              bool SsrIgm04Data::live$ = false;

              jclass SsrIgm04Data::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm04Data");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getHighRateClockCorrection_dff5885c2c873297] = env->getMethodID(cls, "getHighRateClockCorrection", "()D");
                  mids$[mid_setHighRateClockCorrection_17db3a65980d3441] = env->getMethodID(cls, "setHighRateClockCorrection", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Data::SsrIgm04Data() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jdouble SsrIgm04Data::getHighRateClockCorrection() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getHighRateClockCorrection_dff5885c2c873297]);
              }

              void SsrIgm04Data::setHighRateClockCorrection(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setHighRateClockCorrection_17db3a65980d3441], a0);
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
              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self);
              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg);
              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data);
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm04Data__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm04Data, highRateClockCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm04Data__methods_[] = {
                DECLARE_METHOD(t_SsrIgm04Data, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm04Data, getHighRateClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm04Data, setHighRateClockCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm04Data)[] = {
                { Py_tp_methods, t_SsrIgm04Data__methods_ },
                { Py_tp_init, (void *) t_SsrIgm04Data_init_ },
                { Py_tp_getset, t_SsrIgm04Data__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm04Data)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmData),
                NULL
              };

              DEFINE_TYPE(SsrIgm04Data, t_SsrIgm04Data, SsrIgm04Data);

              void t_SsrIgm04Data::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm04Data), &PY_TYPE_DEF(SsrIgm04Data), module, "SsrIgm04Data", 0);
              }

              void t_SsrIgm04Data::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "class_", make_descriptor(SsrIgm04Data::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "wrapfn_", make_descriptor(t_SsrIgm04Data::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm04Data), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm04Data_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm04Data::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm04Data::wrap_Object(SsrIgm04Data(((t_SsrIgm04Data *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm04Data_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm04Data::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm04Data_init_(t_SsrIgm04Data *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm04Data object((jobject) NULL);

                INT_CALL(object = SsrIgm04Data());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm04Data_getHighRateClockCorrection(t_SsrIgm04Data *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_SsrIgm04Data_setHighRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setHighRateClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setHighRateClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm04Data_get__highRateClockCorrection(t_SsrIgm04Data *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getHighRateClockCorrection());
                return PyFloat_FromDouble((double) value);
              }
              static int t_SsrIgm04Data_set__highRateClockCorrection(t_SsrIgm04Data *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setHighRateClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "highRateClockCorrection", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
