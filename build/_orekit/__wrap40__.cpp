#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *FDistribution::class$ = NULL;
        jmethodID *FDistribution::mids$ = NULL;
        bool FDistribution::live$ = false;

        jclass FDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/FDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDenominatorDegreesOfFreedom_456d9a2f64d6b28d] = env->getMethodID(cls, "getDenominatorDegreesOfFreedom", "()D");
            mids$[mid_getNumeratorDegreesOfFreedom_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumeratorDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_0ba5fed9597b693e] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDistribution::FDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        FDistribution::FDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        jdouble FDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble FDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble FDistribution::getDenominatorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDenominatorDegreesOfFreedom_456d9a2f64d6b28d]);
        }

        jdouble FDistribution::getNumeratorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumeratorDegreesOfFreedom_456d9a2f64d6b28d]);
        }

        jdouble FDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble FDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble FDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble FDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jboolean FDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble FDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_0ba5fed9597b693e], a0);
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
      namespace continuous {
        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data);
        static PyGetSetDef t_FDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_FDistribution, denominatorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numeratorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numericalMean),
          DECLARE_GET_FIELD(t_FDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_FDistribution, supportConnected),
          DECLARE_GET_FIELD(t_FDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_FDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDistribution__methods_[] = {
          DECLARE_METHOD(t_FDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getDenominatorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumeratorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDistribution)[] = {
          { Py_tp_methods, t_FDistribution__methods_ },
          { Py_tp_init, (void *) t_FDistribution_init_ },
          { Py_tp_getset, t_FDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(FDistribution, t_FDistribution, FDistribution);

        void t_FDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(FDistribution), &PY_TYPE_DEF(FDistribution), module, "FDistribution", 0);
        }

        void t_FDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "class_", make_descriptor(FDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "wrapfn_", make_descriptor(t_FDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDistribution::initializeClass, 1)))
            return NULL;
          return t_FDistribution::wrap_Object(FDistribution(((t_FDistribution *) arg)->object.this$));
        }
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = FDistribution(a0, a1));
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
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = FDistribution(a0, a1, a2));
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

        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/FilterType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FilterType::class$ = NULL;
        jmethodID *FilterType::mids$ = NULL;
        bool FilterType::live$ = false;
        FilterType *FilterType::TRIGGER_ONLY_DECREASING_EVENTS = NULL;
        FilterType *FilterType::TRIGGER_ONLY_INCREASING_EVENTS = NULL;

        jclass FilterType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FilterType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_167a07c1aa896597] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_values_174a4133ac86fb0b] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/FilterType;");
            mids$[mid_selectTransformer_79994af6e1c9bfd0] = env->getMethodID(cls, "selectTransformer", "(Lorg/hipparchus/ode/events/Transformer;DZ)Lorg/hipparchus/ode/events/Transformer;");
            mids$[mid_isTriggeredOnIncreasing_e470b6d9e0d979db] = env->getMethodID(cls, "isTriggeredOnIncreasing", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            TRIGGER_ONLY_DECREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_DECREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            TRIGGER_ONLY_INCREASING_EVENTS = new FilterType(env->getStaticObjectField(cls, "TRIGGER_ONLY_INCREASING_EVENTS", "Lorg/hipparchus/ode/events/FilterType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FilterType FilterType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FilterType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_167a07c1aa896597], a0.this$));
        }

        JArray< FilterType > FilterType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< FilterType >(env->callStaticObjectMethod(cls, mids$[mid_values_174a4133ac86fb0b]));
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
        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args);
        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_FilterType_values(PyTypeObject *type);
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data);
        static PyGetSetDef t_FilterType__fields_[] = {
          DECLARE_GET_FIELD(t_FilterType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FilterType__methods_[] = {
          DECLARE_METHOD(t_FilterType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FilterType, of_, METH_VARARGS),
          DECLARE_METHOD(t_FilterType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FilterType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FilterType)[] = {
          { Py_tp_methods, t_FilterType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FilterType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FilterType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(FilterType, t_FilterType, FilterType);
        PyObject *t_FilterType::wrap_Object(const FilterType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FilterType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FilterType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FilterType *self = (t_FilterType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FilterType::install(PyObject *module)
        {
          installType(&PY_TYPE(FilterType), &PY_TYPE_DEF(FilterType), module, "FilterType", 0);
        }

        void t_FilterType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "class_", make_descriptor(FilterType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "wrapfn_", make_descriptor(t_FilterType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "boxfn_", make_descriptor(boxObject));
          env->getClass(FilterType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_DECREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_DECREASING_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FilterType), "TRIGGER_ONLY_INCREASING_EVENTS", make_descriptor(t_FilterType::wrap_Object(*FilterType::TRIGGER_ONLY_INCREASING_EVENTS)));
        }

        static PyObject *t_FilterType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FilterType::initializeClass, 1)))
            return NULL;
          return t_FilterType::wrap_Object(FilterType(((t_FilterType *) arg)->object.this$));
        }
        static PyObject *t_FilterType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FilterType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FilterType_of_(t_FilterType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FilterType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          FilterType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::valueOf(a0));
            return t_FilterType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_FilterType_values(PyTypeObject *type)
        {
          JArray< FilterType > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::FilterType::values());
          return JArray<jobject>(result.this$).wrap(t_FilterType::wrap_jobject);
        }
        static PyObject *t_FilterType_get__parameters_(t_FilterType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/MultipleShooter.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *MultipleShooter::class$ = NULL;
      jmethodID *MultipleShooter::mids$ = NULL;
      bool MultipleShooter::live$ = false;

      jclass MultipleShooter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/MultipleShooter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ea30a3806cd01d66] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;DI)V");
          mids$[mid_computeAdditionalConstraints_5c4ec51dfa4e445c] = env->getMethodID(cls, "computeAdditionalConstraints", "(Ljava/util/List;)[D");
          mids$[mid_computeAdditionalJacobianMatrix_8b899bcca8eef41a] = env->getMethodID(cls, "computeAdditionalJacobianMatrix", "(Ljava/util/List;)[[D");
          mids$[mid_getAugmentedInitialState_881fd9055e653db3] = env->getMethodID(cls, "getAugmentedInitialState", "(I)Lorg/orekit/propagation/SpacecraftState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MultipleShooter::MultipleShooter(const ::java::util::List & a0, const ::java::util::List & a1, const ::java::util::List & a2, jdouble a3, jint a4) : ::org::orekit::utils::AbstractMultipleShooting(env->newObject(initializeClass, &mids$, mid_init$_ea30a3806cd01d66, a0.this$, a1.this$, a2.this$, a3, a4)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MultipleShooter__methods_[] = {
        DECLARE_METHOD(t_MultipleShooter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultipleShooter, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultipleShooter)[] = {
        { Py_tp_methods, t_MultipleShooter__methods_ },
        { Py_tp_init, (void *) t_MultipleShooter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultipleShooter)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::AbstractMultipleShooting),
        NULL
      };

      DEFINE_TYPE(MultipleShooter, t_MultipleShooter, MultipleShooter);

      void t_MultipleShooter::install(PyObject *module)
      {
        installType(&PY_TYPE(MultipleShooter), &PY_TYPE_DEF(MultipleShooter), module, "MultipleShooter", 0);
      }

      void t_MultipleShooter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "class_", make_descriptor(MultipleShooter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "wrapfn_", make_descriptor(t_MultipleShooter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultipleShooter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultipleShooter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultipleShooter::initializeClass, 1)))
          return NULL;
        return t_MultipleShooter::wrap_Object(MultipleShooter(((t_MultipleShooter *) arg)->object.this$));
      }
      static PyObject *t_MultipleShooter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultipleShooter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MultipleShooter_init_(t_MultipleShooter *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::java::util::List a2((jobject) NULL);
        PyTypeObject **p2;
        jdouble a3;
        jint a4;
        MultipleShooter object((jobject) NULL);

        if (!parseArgs(args, "KKKDI", ::java::util::List::initializeClass, ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4))
        {
          INT_CALL(object = MultipleShooter(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/optim/PointValuePair.h"
#include "java/lang/Class.h"
#include "java/lang/Double.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *PointValuePair::class$ = NULL;
      jmethodID *PointValuePair::mids$ = NULL;
      bool PointValuePair::live$ = false;

      jclass PointValuePair::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/PointValuePair");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_caadaecfce5fba2f] = env->getMethodID(cls, "<init>", "([DD)V");
          mids$[mid_init$_69bc42fba27de61b] = env->getMethodID(cls, "<init>", "([DDZ)V");
          mids$[mid_getPoint_7cdc325af0834901] = env->getMethodID(cls, "getPoint", "()[D");
          mids$[mid_getPointRef_7cdc325af0834901] = env->getMethodID(cls, "getPointRef", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_caadaecfce5fba2f, a0.this$, a1)) {}

      PointValuePair::PointValuePair(const JArray< jdouble > & a0, jdouble a1, jboolean a2) : ::org::hipparchus::util::Pair(env->newObject(initializeClass, &mids$, mid_init$_69bc42fba27de61b, a0.this$, a1, a2)) {}

      JArray< jdouble > PointValuePair::getPoint() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPoint_7cdc325af0834901]));
      }

      JArray< jdouble > PointValuePair::getPointRef() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPointRef_7cdc325af0834901]));
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
      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args);
      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self);
      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self);
      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data);
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data);
      static PyGetSetDef t_PointValuePair__fields_[] = {
        DECLARE_GET_FIELD(t_PointValuePair, point),
        DECLARE_GET_FIELD(t_PointValuePair, pointRef),
        DECLARE_GET_FIELD(t_PointValuePair, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PointValuePair__methods_[] = {
        DECLARE_METHOD(t_PointValuePair, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PointValuePair, of_, METH_VARARGS),
        DECLARE_METHOD(t_PointValuePair, getPoint, METH_NOARGS),
        DECLARE_METHOD(t_PointValuePair, getPointRef, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PointValuePair)[] = {
        { Py_tp_methods, t_PointValuePair__methods_ },
        { Py_tp_init, (void *) t_PointValuePair_init_ },
        { Py_tp_getset, t_PointValuePair__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PointValuePair)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::Pair),
        NULL
      };

      DEFINE_TYPE(PointValuePair, t_PointValuePair, PointValuePair);
      PyObject *t_PointValuePair::wrap_Object(const PointValuePair& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PointValuePair::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PointValuePair::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PointValuePair *self = (t_PointValuePair *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PointValuePair::install(PyObject *module)
      {
        installType(&PY_TYPE(PointValuePair), &PY_TYPE_DEF(PointValuePair), module, "PointValuePair", 0);
      }

      void t_PointValuePair::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "class_", make_descriptor(PointValuePair::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "wrapfn_", make_descriptor(t_PointValuePair::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PointValuePair), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PointValuePair_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PointValuePair::initializeClass, 1)))
          return NULL;
        return t_PointValuePair::wrap_Object(PointValuePair(((t_PointValuePair *) arg)->object.this$));
      }
      static PyObject *t_PointValuePair_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PointValuePair::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PointValuePair_of_(t_PointValuePair *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PointValuePair_init_(t_PointValuePair *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DD", &a0, &a1))
            {
              INT_CALL(object = PointValuePair(a0, a1));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
              break;
            }
          }
          goto err;
         case 3:
          {
            JArray< jdouble > a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            PointValuePair object((jobject) NULL);

            if (!parseArgs(args, "[DDZ", &a0, &a1, &a2))
            {
              INT_CALL(object = PointValuePair(a0, a1, a2));
              self->object = object;
              self->parameters[0] = PY_TYPE(JArrayDouble);
              self->parameters[1] = ::java::lang::PY_TYPE(Double);
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

      static PyObject *t_PointValuePair_getPoint(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPoint());
        return result.wrap();
      }

      static PyObject *t_PointValuePair_getPointRef(t_PointValuePair *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPointRef());
        return result.wrap();
      }
      static PyObject *t_PointValuePair_get__parameters_(t_PointValuePair *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_PointValuePair_get__point(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPoint());
        return value.wrap();
      }

      static PyObject *t_PointValuePair_get__pointRef(t_PointValuePair *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPointRef());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/spherical/twod/Vertex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *SphericalPolygonsSet::class$ = NULL;
          jmethodID *SphericalPolygonsSet::mids$ = NULL;
          bool SphericalPolygonsSet::live$ = false;

          jclass SphericalPolygonsSet::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_c8661dab4977d04c] = env->getMethodID(cls, "<init>", "(D[Lorg/hipparchus/geometry/spherical/twod/S2Point;)V");
              mids$[mid_init$_c1cd2c1af3ffd51b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_3e72dd0bd3a69a59] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/BSPTree;D)V");
              mids$[mid_init$_b832ff2fd1b54c87] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;D)V");
              mids$[mid_init$_f8298e0c9cdbb72c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DID)V");
              mids$[mid_buildNew_e9fb7b0dabb95171] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_getBoundaryLoops_a6156df500549a58] = env->getMethodID(cls, "getBoundaryLoops", "()Ljava/util/List;");
              mids$[mid_getEnclosingCap_75182acb0b7e2475] = env->getMethodID(cls, "getEnclosingCap", "()Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
              mids$[mid_computeGeometricalProperties_7ae3461a92a43152] = env->getMethodID(cls, "computeGeometricalProperties", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(jdouble a0, const JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > & a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_c8661dab4977d04c, a0, a1.this$)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_c1cd2c1af3ffd51b, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::partitioning::BSPTree & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_3e72dd0bd3a69a59, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::java::util::Collection & a0, jdouble a1) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_b832ff2fd1b54c87, a0.this$, a1)) {}

          SphericalPolygonsSet::SphericalPolygonsSet(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2, jint a3, jdouble a4) : ::org::hipparchus::geometry::partitioning::AbstractRegion(env->newObject(initializeClass, &mids$, mid_init$_f8298e0c9cdbb72c, a0.this$, a1.this$, a2, a3, a4)) {}

          SphericalPolygonsSet SphericalPolygonsSet::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
          {
            return SphericalPolygonsSet(env->callObjectMethod(this$, mids$[mid_buildNew_e9fb7b0dabb95171], a0.this$));
          }

          ::java::util::List SphericalPolygonsSet::getBoundaryLoops() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBoundaryLoops_a6156df500549a58]));
          }

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphericalPolygonsSet::getEnclosingCap() const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_getEnclosingCap_75182acb0b7e2475]));
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
        namespace twod {
          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args);
          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args);
          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self);
          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data);
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data);
          static PyGetSetDef t_SphericalPolygonsSet__fields_[] = {
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, boundaryLoops),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, enclosingCap),
            DECLARE_GET_FIELD(t_SphericalPolygonsSet, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SphericalPolygonsSet__methods_[] = {
            DECLARE_METHOD(t_SphericalPolygonsSet, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphericalPolygonsSet, of_, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, buildNew, METH_VARARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getBoundaryLoops, METH_NOARGS),
            DECLARE_METHOD(t_SphericalPolygonsSet, getEnclosingCap, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphericalPolygonsSet)[] = {
            { Py_tp_methods, t_SphericalPolygonsSet__methods_ },
            { Py_tp_init, (void *) t_SphericalPolygonsSet_init_ },
            { Py_tp_getset, t_SphericalPolygonsSet__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphericalPolygonsSet)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::partitioning::AbstractRegion),
            NULL
          };

          DEFINE_TYPE(SphericalPolygonsSet, t_SphericalPolygonsSet, SphericalPolygonsSet);
          PyObject *t_SphericalPolygonsSet::wrap_Object(const SphericalPolygonsSet& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_SphericalPolygonsSet::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_SphericalPolygonsSet::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SphericalPolygonsSet *self = (t_SphericalPolygonsSet *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_SphericalPolygonsSet::install(PyObject *module)
          {
            installType(&PY_TYPE(SphericalPolygonsSet), &PY_TYPE_DEF(SphericalPolygonsSet), module, "SphericalPolygonsSet", 0);
          }

          void t_SphericalPolygonsSet::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "class_", make_descriptor(SphericalPolygonsSet::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "wrapfn_", make_descriptor(t_SphericalPolygonsSet::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphericalPolygonsSet), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphericalPolygonsSet_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphericalPolygonsSet::initializeClass, 1)))
              return NULL;
            return t_SphericalPolygonsSet::wrap_Object(SphericalPolygonsSet(((t_SphericalPolygonsSet *) arg)->object.this$));
          }
          static PyObject *t_SphericalPolygonsSet_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphericalPolygonsSet::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SphericalPolygonsSet_of_(t_SphericalPolygonsSet *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_SphericalPolygonsSet_init_(t_SphericalPolygonsSet *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                JArray< ::org::hipparchus::geometry::spherical::twod::S2Point > a1((jobject) NULL);
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::hipparchus::geometry::spherical::twod::S2Point::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              {
                ::java::util::Collection a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble a1;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "KD", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                jint a3;
                jdouble a4;
                SphericalPolygonsSet object((jobject) NULL);

                if (!parseArgs(args, "kkDID", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SphericalPolygonsSet(a0, a1, a2, a3, a4));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D);
                  self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
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

          static PyObject *t_SphericalPolygonsSet_buildNew(t_SphericalPolygonsSet *self, PyObject *args)
          {
            ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
            PyTypeObject **p0;
            SphericalPolygonsSet result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
            {
              OBJ_CALL(result = self->object.buildNew(a0));
              return t_SphericalPolygonsSet::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SphericalPolygonsSet), (PyObject *) self, "buildNew", args, 2);
          }

          static PyObject *t_SphericalPolygonsSet_getBoundaryLoops(t_SphericalPolygonsSet *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Vertex));
          }

          static PyObject *t_SphericalPolygonsSet_getEnclosingCap(t_SphericalPolygonsSet *self)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);
            OBJ_CALL(result = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::spherical::twod::PY_TYPE(Sphere2D), ::org::hipparchus::geometry::spherical::twod::PY_TYPE(S2Point));
          }
          static PyObject *t_SphericalPolygonsSet_get__parameters_(t_SphericalPolygonsSet *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_SphericalPolygonsSet_get__boundaryLoops(t_SphericalPolygonsSet *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBoundaryLoops());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SphericalPolygonsSet_get__enclosingCap(t_SphericalPolygonsSet *self, void *data)
          {
            ::org::hipparchus::geometry::enclosing::EnclosingBall value((jobject) NULL);
            OBJ_CALL(value = self->object.getEnclosingCap());
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ThreeEighthesIntegratorBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/orbits/OrbitType.h"
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
            mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_buildIntegrator_501b0015ccc7d54e] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesIntegratorBuilder::ThreeEighthesIntegratorBuilder(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

        ::org::hipparchus::ode::AbstractIntegrator ThreeEighthesIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_501b0015ccc7d54e], a0.this$, a1.this$));
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
#include "org/orekit/estimation/measurements/AbstractMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AbstractMeasurement::class$ = NULL;
        jmethodID *AbstractMeasurement::mids$ = NULL;
        bool AbstractMeasurement::live$ = false;

        jclass AbstractMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AbstractMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
            mids$[mid_estimate_9d5a7270ffb14a9e] = env->getMethodID(cls, "estimate", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_estimateWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "estimateWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_getBaseWeight_7cdc325af0834901] = env->getMethodID(cls, "getBaseWeight", "()[D");
            mids$[mid_getCoordinates_810e0038c590ccfe] = env->getStaticMethodID(cls, "getCoordinates", "(Lorg/orekit/propagation/SpacecraftState;II)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
            mids$[mid_getObservedValue_7cdc325af0834901] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_getSatellites_a6156df500549a58] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
            mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
            mids$[mid_isEnabled_e470b6d9e0d979db] = env->getMethodID(cls, "isEnabled", "()Z");
            mids$[mid_setEnabled_50a2e0b139e80a58] = env->getMethodID(cls, "setEnabled", "(Z)V");
            mids$[mid_signalTimeOfFlight_3034b58dad23b2f6] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_signalTimeOfFlight_b1b80f2b159999ff] = env->getStaticMethodID(cls, "signalTimeOfFlight", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_addParameterDriver_a4c33e1e91b3ca8e] = env->getMethodID(cls, "addParameterDriver", "(Lorg/orekit/utils/ParameterDriver;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractMeasurement::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addModifier_fc816f44bfa3d437], a0.this$);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement AbstractMeasurement::estimate(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_estimate_9d5a7270ffb14a9e], a0, a1, a2.this$));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurementBase AbstractMeasurement::estimateWithoutDerivatives(jint a0, jint a1, const JArray< ::org::orekit::propagation::SpacecraftState > & a2) const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurementBase(env->callObjectMethod(this$, mids$[mid_estimateWithoutDerivatives_c188a3b50efa39a5], a0, a1, a2.this$));
        }

        JArray< jdouble > AbstractMeasurement::getBaseWeight() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBaseWeight_7cdc325af0834901]));
        }

        ::org::orekit::utils::TimeStampedFieldPVCoordinates AbstractMeasurement::getCoordinates(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, jint a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callStaticObjectMethod(cls, mids$[mid_getCoordinates_810e0038c590ccfe], a0.this$, a1, a2));
        }

        ::org::orekit::time::AbsoluteDate AbstractMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        jint AbstractMeasurement::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
        }

        ::java::util::List AbstractMeasurement::getModifiers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_a6156df500549a58]));
        }

        JArray< jdouble > AbstractMeasurement::getObservedValue() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getObservedValue_7cdc325af0834901]));
        }

        ::java::util::List AbstractMeasurement::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
        }

        ::java::util::List AbstractMeasurement::getSatellites() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_a6156df500549a58]));
        }

        JArray< jdouble > AbstractMeasurement::getTheoreticalStandardDeviation() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901]));
        }

        jboolean AbstractMeasurement::isEnabled() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEnabled_e470b6d9e0d979db]);
        }

        void AbstractMeasurement::setEnabled(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEnabled_50a2e0b139e80a58], a0);
        }

        jdouble AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_signalTimeOfFlight_3034b58dad23b2f6], a0.this$, a1.this$, a2.this$);
        }

        ::org::hipparchus::CalculusFieldElement AbstractMeasurement::signalTimeOfFlight(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::time::FieldAbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_signalTimeOfFlight_b1b80f2b159999ff], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args);
        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self);
        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg);
        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args);
        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data);
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data);
        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data);
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data);
        static PyGetSetDef t_AbstractMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMeasurement, baseWeight),
          DECLARE_GET_FIELD(t_AbstractMeasurement, date),
          DECLARE_GET_FIELD(t_AbstractMeasurement, dimension),
          DECLARE_GETSET_FIELD(t_AbstractMeasurement, enabled),
          DECLARE_GET_FIELD(t_AbstractMeasurement, modifiers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, observedValue),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parametersDrivers),
          DECLARE_GET_FIELD(t_AbstractMeasurement, satellites),
          DECLARE_GET_FIELD(t_AbstractMeasurement, theoreticalStandardDeviation),
          DECLARE_GET_FIELD(t_AbstractMeasurement, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMeasurement__methods_[] = {
          DECLARE_METHOD(t_AbstractMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, addModifier, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, estimate, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, estimateWithoutDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getBaseWeight, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getCoordinates, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AbstractMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getModifiers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getObservedValue, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getSatellites, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, getTheoreticalStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, isEnabled, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMeasurement, setEnabled, METH_O),
          DECLARE_METHOD(t_AbstractMeasurement, signalTimeOfFlight, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurement)[] = {
          { Py_tp_methods, t_AbstractMeasurement__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMeasurement, t_AbstractMeasurement, AbstractMeasurement);
        PyObject *t_AbstractMeasurement::wrap_Object(const AbstractMeasurement& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractMeasurement::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractMeasurement::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractMeasurement *self = (t_AbstractMeasurement *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMeasurement), &PY_TYPE_DEF(AbstractMeasurement), module, "AbstractMeasurement", 0);
        }

        void t_AbstractMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "class_", make_descriptor(AbstractMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "wrapfn_", make_descriptor(t_AbstractMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMeasurement::initializeClass, 1)))
            return NULL;
          return t_AbstractMeasurement::wrap_Object(AbstractMeasurement(((t_AbstractMeasurement *) arg)->object.this$));
        }
        static PyObject *t_AbstractMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMeasurement_of_(t_AbstractMeasurement *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractMeasurement_addModifier(t_AbstractMeasurement *self, PyObject *arg)
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

        static PyObject *t_AbstractMeasurement_estimate(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimate(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_estimateWithoutDerivatives(t_AbstractMeasurement *self, PyObject *args)
        {
          jint a0;
          jint a1;
          JArray< ::org::orekit::propagation::SpacecraftState > a2((jobject) NULL);
          ::org::orekit::estimation::measurements::EstimatedMeasurementBase result((jobject) NULL);

          if (!parseArgs(args, "II[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateWithoutDerivatives(a0, a1, a2));
            return ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateWithoutDerivatives", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getBaseWeight(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getBaseWeight());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getCoordinates(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          jint a2;
          ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

          if (!parseArgs(args, "kII", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::getCoordinates(a0, a1, a2));
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
          }

          PyErr_SetArgsError(type, "getCoordinates", args);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_getDate(t_AbstractMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getDimension(t_AbstractMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMeasurement_getModifiers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_AbstractMeasurement_getObservedValue(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedValue());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_getParametersDrivers(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_AbstractMeasurement_getSatellites(t_AbstractMeasurement *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::PY_TYPE(ObservableSatellite));
        }

        static PyObject *t_AbstractMeasurement_getTheoreticalStandardDeviation(t_AbstractMeasurement *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getTheoreticalStandardDeviation());
          return result.wrap();
        }

        static PyObject *t_AbstractMeasurement_isEnabled(t_AbstractMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEnabled());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractMeasurement_setEnabled(t_AbstractMeasurement *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setEnabled(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEnabled", arg);
          return NULL;
        }

        static PyObject *t_AbstractMeasurement_signalTimeOfFlight(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kkk", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::estimation::measurements::AbstractMeasurement::signalTimeOfFlight(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError(type, "signalTimeOfFlight", args);
          return NULL;
        }
        static PyObject *t_AbstractMeasurement_get__parameters_(t_AbstractMeasurement *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractMeasurement_get__baseWeight(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getBaseWeight());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__date(t_AbstractMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__dimension(t_AbstractMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractMeasurement_get__enabled(t_AbstractMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEnabled());
          Py_RETURN_BOOL(value);
        }
        static int t_AbstractMeasurement_set__enabled(t_AbstractMeasurement *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setEnabled(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "enabled", arg);
          return -1;
        }

        static PyObject *t_AbstractMeasurement_get__modifiers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getModifiers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__observedValue(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedValue());
          return value.wrap();
        }

        static PyObject *t_AbstractMeasurement_get__parametersDrivers(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__satellites(t_AbstractMeasurement *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatellites());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractMeasurement_get__theoreticalStandardDeviation(t_AbstractMeasurement *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getTheoreticalStandardDeviation());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedCache.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/util/stream/Stream.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedCache::class$ = NULL;
      jmethodID *TimeStampedCache::mids$ = NULL;
      bool TimeStampedCache::live$ = false;

      jclass TimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_b6273cee359d7146] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getLatest_b6273cee359d7146] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/TimeStamped;");
          mids$[mid_getMaxNeighborsSize_f2f64475e4580546] = env->getMethodID(cls, "getMaxNeighborsSize", "()I");
          mids$[mid_getNeighbors_b6c1d562b013fefd] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighbors_1f145bd0decc1d0c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/AbsoluteDate;I)Ljava/util/stream/Stream;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_b6273cee359d7146]));
      }

      ::org::orekit::time::TimeStamped TimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_b6273cee359d7146]));
      }

      jint TimeStampedCache::getMaxNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxNeighborsSize_f2f64475e4580546]);
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_b6c1d562b013fefd], a0.this$));
      }

      ::java::util::stream::Stream TimeStampedCache::getNeighbors(const ::org::orekit::time::AbsoluteDate & a0, jint a1) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_1f145bd0decc1d0c], a0.this$, a1));
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
      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self);
      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args);
      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data);
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data);
      static PyGetSetDef t_TimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_TimeStampedCache, latest),
        DECLARE_GET_FIELD(t_TimeStampedCache, maxNeighborsSize),
        DECLARE_GET_FIELD(t_TimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_TimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getMaxNeighborsSize, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedCache, getNeighbors, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedCache)[] = {
        { Py_tp_methods, t_TimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedCache, t_TimeStampedCache, TimeStampedCache);
      PyObject *t_TimeStampedCache::wrap_Object(const TimeStampedCache& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedCache *self = (t_TimeStampedCache *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedCache), &PY_TYPE_DEF(TimeStampedCache), module, "TimeStampedCache", 0);
      }

      void t_TimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "class_", make_descriptor(TimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "wrapfn_", make_descriptor(t_TimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_TimeStampedCache::wrap_Object(TimeStampedCache(((t_TimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedCache_of_(t_TimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedCache_getEarliest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getLatest(t_TimeStampedCache *self)
      {
        ::org::orekit::time::TimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
      }

      static PyObject *t_TimeStampedCache_getMaxNeighborsSize(t_TimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeStampedCache_getNeighbors(t_TimeStampedCache *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jint a1;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNeighbors(a0, a1));
              return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", args);
        return NULL;
      }
      static PyObject *t_TimeStampedCache_get__parameters_(t_TimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeStampedCache_get__earliest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__latest(t_TimeStampedCache *self, void *data)
      {
        ::org::orekit::time::TimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_TimeStamped::wrap_Object(value);
      }

      static PyObject *t_TimeStampedCache_get__maxNeighborsSize(t_TimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenThirdBodyLinear::class$ = NULL;
              jmethodID *HansenThirdBodyLinear::mids$ = NULL;
              bool HansenThirdBodyLinear::live$ = false;

              jclass HansenThirdBodyLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenThirdBodyLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8dbc1129a3c2557a] = env->getMethodID(cls, "<init>", "(II)V");
                  mids$[mid_computeInitValues_d0d6094fbd7015c5] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_31332242d1624d2c] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_31332242d1624d2c] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenThirdBodyLinear::HansenThirdBodyLinear(jint a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8dbc1129a3c2557a, a0, a1)) {}

              void HansenThirdBodyLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_d0d6094fbd7015c5], a0, a1, a2);
              }

              jdouble HansenThirdBodyLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_31332242d1624d2c], a0, a1);
              }

              jdouble HansenThirdBodyLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_31332242d1624d2c], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args);
              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args);

              static PyMethodDef t_HansenThirdBodyLinear__methods_[] = {
                DECLARE_METHOD(t_HansenThirdBodyLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenThirdBodyLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenThirdBodyLinear)[] = {
                { Py_tp_methods, t_HansenThirdBodyLinear__methods_ },
                { Py_tp_init, (void *) t_HansenThirdBodyLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenThirdBodyLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenThirdBodyLinear, t_HansenThirdBodyLinear, HansenThirdBodyLinear);

              void t_HansenThirdBodyLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenThirdBodyLinear), &PY_TYPE_DEF(HansenThirdBodyLinear), module, "HansenThirdBodyLinear", 0);
              }

              void t_HansenThirdBodyLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "class_", make_descriptor(HansenThirdBodyLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "wrapfn_", make_descriptor(t_HansenThirdBodyLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenThirdBodyLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenThirdBodyLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenThirdBodyLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenThirdBodyLinear::wrap_Object(HansenThirdBodyLinear(((t_HansenThirdBodyLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenThirdBodyLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenThirdBodyLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenThirdBodyLinear_init_(t_HansenThirdBodyLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                HansenThirdBodyLinear object((jobject) NULL);

                if (!parseArgs(args, "II", &a0, &a1))
                {
                  INT_CALL(object = HansenThirdBodyLinear(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenThirdBodyLinear_computeInitValues(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getDerivative(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenThirdBodyLinear_getValue(t_HansenThirdBodyLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTree$VanishingCutHandler::class$ = NULL;
        jmethodID *BSPTree$VanishingCutHandler::mids$ = NULL;
        bool BSPTree$VanishingCutHandler::live$ = false;

        jclass BSPTree$VanishingCutHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTree$VanishingCutHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_fixNode_75e2f32acb514bdd] = env->getMethodID(cls, "fixNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTree;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::partitioning::BSPTree BSPTree$VanishingCutHandler::fixNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_fixNode_75e2f32acb514bdd], a0.this$));
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
        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args);
        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg);
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data);
        static PyGetSetDef t_BSPTree$VanishingCutHandler__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTree$VanishingCutHandler, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTree$VanishingCutHandler__methods_[] = {
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTree$VanishingCutHandler, fixNode, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTree$VanishingCutHandler)[] = {
          { Py_tp_methods, t_BSPTree$VanishingCutHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTree$VanishingCutHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTree$VanishingCutHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTree$VanishingCutHandler, t_BSPTree$VanishingCutHandler, BSPTree$VanishingCutHandler);
        PyObject *t_BSPTree$VanishingCutHandler::wrap_Object(const BSPTree$VanishingCutHandler& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTree$VanishingCutHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTree$VanishingCutHandler::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTree$VanishingCutHandler *self = (t_BSPTree$VanishingCutHandler *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTree$VanishingCutHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTree$VanishingCutHandler), &PY_TYPE_DEF(BSPTree$VanishingCutHandler), module, "BSPTree$VanishingCutHandler", 0);
        }

        void t_BSPTree$VanishingCutHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "class_", make_descriptor(BSPTree$VanishingCutHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "wrapfn_", make_descriptor(t_BSPTree$VanishingCutHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTree$VanishingCutHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTree$VanishingCutHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 1)))
            return NULL;
          return t_BSPTree$VanishingCutHandler::wrap_Object(BSPTree$VanishingCutHandler(((t_BSPTree$VanishingCutHandler *) arg)->object.this$));
        }
        static PyObject *t_BSPTree$VanishingCutHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTree$VanishingCutHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTree$VanishingCutHandler_of_(t_BSPTree$VanishingCutHandler *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTree$VanishingCutHandler_fixNode(t_BSPTree$VanishingCutHandler *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.fixNode(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "fixNode", arg);
          return NULL;
        }
        static PyObject *t_BSPTree$VanishingCutHandler_get__parameters_(t_BSPTree$VanishingCutHandler *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/RyuDouble.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *RyuDouble::class$ = NULL;
      jmethodID *RyuDouble::mids$ = NULL;
      bool RyuDouble::live$ = false;
      jint RyuDouble::DEFAULT_HIGH_EXP = (jint) 0;
      jint RyuDouble::DEFAULT_LOW_EXP = (jint) 0;

      jclass RyuDouble::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/RyuDouble");

          mids$ = new jmethodID[max_mid];
          mids$[mid_doubleToString_085bbc49599fa163] = env->getStaticMethodID(cls, "doubleToString", "(D)Ljava/lang/String;");
          mids$[mid_doubleToString_49a569e07527be6c] = env->getStaticMethodID(cls, "doubleToString", "(DII)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_HIGH_EXP = env->getStaticIntField(cls, "DEFAULT_HIGH_EXP");
          DEFAULT_LOW_EXP = env->getStaticIntField(cls, "DEFAULT_LOW_EXP");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_085bbc49599fa163], a0));
      }

      ::java::lang::String RyuDouble::doubleToString(jdouble a0, jint a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_doubleToString_49a569e07527be6c], a0, a1, a2));
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
      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_RyuDouble__methods_[] = {
        DECLARE_METHOD(t_RyuDouble, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RyuDouble, doubleToString, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RyuDouble)[] = {
        { Py_tp_methods, t_RyuDouble__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RyuDouble)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RyuDouble, t_RyuDouble, RyuDouble);

      void t_RyuDouble::install(PyObject *module)
      {
        installType(&PY_TYPE(RyuDouble), &PY_TYPE_DEF(RyuDouble), module, "RyuDouble", 0);
      }

      void t_RyuDouble::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "class_", make_descriptor(RyuDouble::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "wrapfn_", make_descriptor(t_RyuDouble::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "boxfn_", make_descriptor(boxObject));
        env->getClass(RyuDouble::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_HIGH_EXP", make_descriptor(RyuDouble::DEFAULT_HIGH_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RyuDouble), "DEFAULT_LOW_EXP", make_descriptor(RyuDouble::DEFAULT_LOW_EXP));
      }

      static PyObject *t_RyuDouble_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RyuDouble::initializeClass, 1)))
          return NULL;
        return t_RyuDouble::wrap_Object(RyuDouble(((t_RyuDouble *) arg)->object.this$));
      }
      static PyObject *t_RyuDouble_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RyuDouble::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RyuDouble_doubleToString(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jint a1;
            jint a2;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::RyuDouble::doubleToString(a0, a1, a2));
              return j2p(result);
            }
          }
        }

        PyErr_SetArgsError(type, "doubleToString", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DelaunayArguments.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DelaunayArguments::class$ = NULL;
      jmethodID *DelaunayArguments::mids$ = NULL;
      bool DelaunayArguments::live$ = false;

      jclass DelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_bec04ff0873f7666] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDD)V");
          mids$[mid_getD_456d9a2f64d6b28d] = env->getMethodID(cls, "getD", "()D");
          mids$[mid_getDDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getDDot", "()D");
          mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getF_456d9a2f64d6b28d] = env->getMethodID(cls, "getF", "()D");
          mids$[mid_getFDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getFDot", "()D");
          mids$[mid_getGamma_456d9a2f64d6b28d] = env->getMethodID(cls, "getGamma", "()D");
          mids$[mid_getGammaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getGammaDot", "()D");
          mids$[mid_getL_456d9a2f64d6b28d] = env->getMethodID(cls, "getL", "()D");
          mids$[mid_getLDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLDot", "()D");
          mids$[mid_getLPrime_456d9a2f64d6b28d] = env->getMethodID(cls, "getLPrime", "()D");
          mids$[mid_getLPrimeDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getLPrimeDot", "()D");
          mids$[mid_getOmega_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmega", "()D");
          mids$[mid_getOmegaDot_456d9a2f64d6b28d] = env->getMethodID(cls, "getOmegaDot", "()D");
          mids$[mid_getTC_456d9a2f64d6b28d] = env->getMethodID(cls, "getTC", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DelaunayArguments::DelaunayArguments(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bec04ff0873f7666, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)) {}

      jdouble DelaunayArguments::getD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getD_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getDDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDDot_456d9a2f64d6b28d]);
      }

      ::org::orekit::time::AbsoluteDate DelaunayArguments::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
      }

      jdouble DelaunayArguments::getF() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getF_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getFDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFDot_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getGamma() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getGammaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGammaDot_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getL() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getLDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getLPrime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrime_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getLPrimeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrimeDot_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getOmega() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmega_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getOmegaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_456d9a2f64d6b28d]);
      }

      jdouble DelaunayArguments::getTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTC_456d9a2f64d6b28d]);
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
      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data);
      static PyGetSetDef t_DelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_DelaunayArguments, d),
        DECLARE_GET_FIELD(t_DelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, date),
        DECLARE_GET_FIELD(t_DelaunayArguments, f),
        DECLARE_GET_FIELD(t_DelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_DelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, l),
        DECLARE_GET_FIELD(t_DelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, omega),
        DECLARE_GET_FIELD(t_DelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, tC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_DelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DelaunayArguments)[] = {
        { Py_tp_methods, t_DelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_DelaunayArguments_init_ },
        { Py_tp_getset, t_DelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DelaunayArguments, t_DelaunayArguments, DelaunayArguments);

      void t_DelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(DelaunayArguments), &PY_TYPE_DEF(DelaunayArguments), module, "DelaunayArguments", 0);
      }

      void t_DelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "class_", make_descriptor(DelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "wrapfn_", make_descriptor(t_DelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_DelaunayArguments::wrap_Object(DelaunayArguments(((t_DelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
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
        DelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
        {
          INT_CALL(object = DelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getF());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGamma());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGammaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmega());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getF());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGamma());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGammaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmega());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTC());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$LabeledDoubleConsumer::class$ = NULL;
            jmethodID *ParseToken$LabeledDoubleConsumer::mids$ = NULL;
            bool ParseToken$LabeledDoubleConsumer::live$ = false;

            jclass ParseToken$LabeledDoubleConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$LabeledDoubleConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_bab298509bfd5390] = env->getMethodID(cls, "accept", "(CD)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$LabeledDoubleConsumer::accept(jchar a0, jdouble a1) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_bab298509bfd5390], a0, a1);
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
            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args);

            static PyMethodDef t_ParseToken$LabeledDoubleConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$LabeledDoubleConsumer, accept, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$LabeledDoubleConsumer)[] = {
              { Py_tp_methods, t_ParseToken$LabeledDoubleConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$LabeledDoubleConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$LabeledDoubleConsumer, t_ParseToken$LabeledDoubleConsumer, ParseToken$LabeledDoubleConsumer);

            void t_ParseToken$LabeledDoubleConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$LabeledDoubleConsumer), &PY_TYPE_DEF(ParseToken$LabeledDoubleConsumer), module, "ParseToken$LabeledDoubleConsumer", 0);
            }

            void t_ParseToken$LabeledDoubleConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "class_", make_descriptor(ParseToken$LabeledDoubleConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "wrapfn_", make_descriptor(t_ParseToken$LabeledDoubleConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$LabeledDoubleConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$LabeledDoubleConsumer::wrap_Object(ParseToken$LabeledDoubleConsumer(((t_ParseToken$LabeledDoubleConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$LabeledDoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$LabeledDoubleConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$LabeledDoubleConsumer_accept(t_ParseToken$LabeledDoubleConsumer *self, PyObject *args)
            {
              jchar a0;
              jdouble a1;

              if (!parseArgs(args, "CD", &a0, &a1))
              {
                OBJ_CALL(self->object.accept(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", args);
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
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/propagation/events/ElevationExtremumDetector.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ElevationExtremumDetector::class$ = NULL;
        jmethodID *ElevationExtremumDetector::mids$ = NULL;
        bool ElevationExtremumDetector::live$ = false;

        jclass ElevationExtremumDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ElevationExtremumDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f9eb40be2920d1a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_init$_b7c2f9e5ae29d132] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/TopocentricFrame;)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getElevation_66a2f071e6ed0c06] = env->getMethodID(cls, "getElevation", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getTopocentricFrame_52fc31c455206160] = env->getMethodID(cls, "getTopocentricFrame", "()Lorg/orekit/frames/TopocentricFrame;");
            mids$[mid_create_f905d37d7398ed09] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ElevationExtremumDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ElevationExtremumDetector::ElevationExtremumDetector(const ::org::orekit::frames::TopocentricFrame & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_f9eb40be2920d1a6, a0.this$)) {}

        ElevationExtremumDetector::ElevationExtremumDetector(jdouble a0, jdouble a1, const ::org::orekit::frames::TopocentricFrame & a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b7c2f9e5ae29d132, a0, a1, a2.this$)) {}

        jdouble ElevationExtremumDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble ElevationExtremumDetector::getElevation(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_66a2f071e6ed0c06], a0.this$);
        }

        ::org::orekit::frames::TopocentricFrame ElevationExtremumDetector::getTopocentricFrame() const
        {
          return ::org::orekit::frames::TopocentricFrame(env->callObjectMethod(this$, mids$[mid_getTopocentricFrame_52fc31c455206160]));
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
        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args);
        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args);
        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg);
        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self);
        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data);
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data);
        static PyGetSetDef t_ElevationExtremumDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, topocentricFrame),
          DECLARE_GET_FIELD(t_ElevationExtremumDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ElevationExtremumDetector__methods_[] = {
          DECLARE_METHOD(t_ElevationExtremumDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ElevationExtremumDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ElevationExtremumDetector, getElevation, METH_O),
          DECLARE_METHOD(t_ElevationExtremumDetector, getTopocentricFrame, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ElevationExtremumDetector)[] = {
          { Py_tp_methods, t_ElevationExtremumDetector__methods_ },
          { Py_tp_init, (void *) t_ElevationExtremumDetector_init_ },
          { Py_tp_getset, t_ElevationExtremumDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ElevationExtremumDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ElevationExtremumDetector, t_ElevationExtremumDetector, ElevationExtremumDetector);
        PyObject *t_ElevationExtremumDetector::wrap_Object(const ElevationExtremumDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ElevationExtremumDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ElevationExtremumDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ElevationExtremumDetector *self = (t_ElevationExtremumDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ElevationExtremumDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ElevationExtremumDetector), &PY_TYPE_DEF(ElevationExtremumDetector), module, "ElevationExtremumDetector", 0);
        }

        void t_ElevationExtremumDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "class_", make_descriptor(ElevationExtremumDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "wrapfn_", make_descriptor(t_ElevationExtremumDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationExtremumDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ElevationExtremumDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ElevationExtremumDetector::initializeClass, 1)))
            return NULL;
          return t_ElevationExtremumDetector::wrap_Object(ElevationExtremumDetector(((t_ElevationExtremumDetector *) arg)->object.this$));
        }
        static PyObject *t_ElevationExtremumDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ElevationExtremumDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ElevationExtremumDetector_of_(t_ElevationExtremumDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ElevationExtremumDetector_init_(t_ElevationExtremumDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0))
              {
                INT_CALL(object = ElevationExtremumDetector(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::frames::TopocentricFrame a2((jobject) NULL);
              ElevationExtremumDetector object((jobject) NULL);

              if (!parseArgs(args, "DDk", ::org::orekit::frames::TopocentricFrame::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ElevationExtremumDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ElevationExtremumDetector);
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

        static PyObject *t_ElevationExtremumDetector_g(t_ElevationExtremumDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ElevationExtremumDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ElevationExtremumDetector_getElevation(t_ElevationExtremumDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getElevation(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
          return NULL;
        }

        static PyObject *t_ElevationExtremumDetector_getTopocentricFrame(t_ElevationExtremumDetector *self)
        {
          ::org::orekit::frames::TopocentricFrame result((jobject) NULL);
          OBJ_CALL(result = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(result);
        }
        static PyObject *t_ElevationExtremumDetector_get__parameters_(t_ElevationExtremumDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ElevationExtremumDetector_get__topocentricFrame(t_ElevationExtremumDetector *self, void *data)
        {
          ::org::orekit::frames::TopocentricFrame value((jobject) NULL);
          OBJ_CALL(value = self->object.getTopocentricFrame());
          return ::org::orekit::frames::t_TopocentricFrame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianAnomalyUtility.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianAnomalyUtility::class$ = NULL;
      jmethodID *FieldKeplerianAnomalyUtility::mids$ = NULL;
      bool FieldKeplerianAnomalyUtility::live$ = false;

      jclass FieldKeplerianAnomalyUtility::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianAnomalyUtility");

          mids$ = new jmethodID[max_mid];
          mids$[mid_ellipticEccentricToMean_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticEccentricToTrue_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToEccentric_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticMeanToTrue_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToEccentric_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_ellipticTrueToMean_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "ellipticTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToMean_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicEccentricToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicEccentricToTrue_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicEccentricToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToEccentric_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicMeanToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicMeanToTrue_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicMeanToTrue", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToEccentric_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicTrueToEccentric", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_hyperbolicTrueToMean_75c7ce7d33e7324b] = env->getStaticMethodID(cls, "hyperbolicTrueToMean", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToMean_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticEccentricToTrue_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToEccentric_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticMeanToTrue_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToEccentric_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::ellipticTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_ellipticTrueToMean_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToMean_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicEccentricToTrue_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToEccentric_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicMeanToTrue_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToEccentric_75c7ce7d33e7324b], a0.this$, a1.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_hyperbolicTrueToMean_75c7ce7d33e7324b], a0.this$, a1.this$));
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
      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_FieldKeplerianAnomalyUtility__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, ellipticTrueToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicEccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicMeanToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianAnomalyUtility, hyperbolicTrueToMean, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianAnomalyUtility)[] = {
        { Py_tp_methods, t_FieldKeplerianAnomalyUtility__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianAnomalyUtility)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianAnomalyUtility, t_FieldKeplerianAnomalyUtility, FieldKeplerianAnomalyUtility);

      void t_FieldKeplerianAnomalyUtility::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianAnomalyUtility), &PY_TYPE_DEF(FieldKeplerianAnomalyUtility), module, "FieldKeplerianAnomalyUtility", 0);
      }

      void t_FieldKeplerianAnomalyUtility::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "class_", make_descriptor(FieldKeplerianAnomalyUtility::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "wrapfn_", make_descriptor(t_FieldKeplerianAnomalyUtility::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianAnomalyUtility), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianAnomalyUtility::wrap_Object(FieldKeplerianAnomalyUtility(((t_FieldKeplerianAnomalyUtility *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianAnomalyUtility_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianAnomalyUtility::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_ellipticTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::ellipticTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "ellipticTrueToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToMean", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicEccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicEccentricToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicEccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicMeanToTrue(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicMeanToTrue(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicMeanToTrue", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToEccentric(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToEccentric(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToEccentric", args);
        return NULL;
      }

      static PyObject *t_FieldKeplerianAnomalyUtility_hyperbolicTrueToMean(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::orbits::FieldKeplerianAnomalyUtility::hyperbolicTrueToMean(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "hyperbolicTrueToMean", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TwoBodiesBaryFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TwoBodiesBaryFrame::class$ = NULL;
      jmethodID *TwoBodiesBaryFrame::mids$ = NULL;
      bool TwoBodiesBaryFrame::live$ = false;

      jclass TwoBodiesBaryFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TwoBodiesBaryFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_43ec4ee4a0809dae] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TwoBodiesBaryFrame::TwoBodiesBaryFrame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_43ec4ee4a0809dae, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_TwoBodiesBaryFrame__methods_[] = {
        DECLARE_METHOD(t_TwoBodiesBaryFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TwoBodiesBaryFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TwoBodiesBaryFrame)[] = {
        { Py_tp_methods, t_TwoBodiesBaryFrame__methods_ },
        { Py_tp_init, (void *) t_TwoBodiesBaryFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TwoBodiesBaryFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(TwoBodiesBaryFrame, t_TwoBodiesBaryFrame, TwoBodiesBaryFrame);

      void t_TwoBodiesBaryFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(TwoBodiesBaryFrame), &PY_TYPE_DEF(TwoBodiesBaryFrame), module, "TwoBodiesBaryFrame", 0);
      }

      void t_TwoBodiesBaryFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "class_", make_descriptor(TwoBodiesBaryFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "wrapfn_", make_descriptor(t_TwoBodiesBaryFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TwoBodiesBaryFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TwoBodiesBaryFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TwoBodiesBaryFrame::initializeClass, 1)))
          return NULL;
        return t_TwoBodiesBaryFrame::wrap_Object(TwoBodiesBaryFrame(((t_TwoBodiesBaryFrame *) arg)->object.this$));
      }
      static PyObject *t_TwoBodiesBaryFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TwoBodiesBaryFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TwoBodiesBaryFrame_init_(t_TwoBodiesBaryFrame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        TwoBodiesBaryFrame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TwoBodiesBaryFrame(a0, a1));
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
#include "org/hipparchus/optim/linear/LinearConstraintSet.h"
#include "java/util/Collection.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraintSet::class$ = NULL;
        jmethodID *LinearConstraintSet::mids$ = NULL;
        bool LinearConstraintSet::live$ = false;

        jclass LinearConstraintSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraintSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ac62806777cd214] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/optim/linear/LinearConstraint;)V");
            mids$[mid_init$_26b3669ec54017ce] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
            mids$[mid_getConstraints_cfcfd130f9013e3e] = env->getMethodID(cls, "getConstraints", "()Ljava/util/Collection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraintSet::LinearConstraintSet(const JArray< ::org::hipparchus::optim::linear::LinearConstraint > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ac62806777cd214, a0.this$)) {}

        LinearConstraintSet::LinearConstraintSet(const ::java::util::Collection & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26b3669ec54017ce, a0.this$)) {}

        ::java::util::Collection LinearConstraintSet::getConstraints() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getConstraints_cfcfd130f9013e3e]));
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
        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self);
        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data);
        static PyGetSetDef t_LinearConstraintSet__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraintSet, constraints),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraintSet__methods_[] = {
          DECLARE_METHOD(t_LinearConstraintSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraintSet, getConstraints, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraintSet)[] = {
          { Py_tp_methods, t_LinearConstraintSet__methods_ },
          { Py_tp_init, (void *) t_LinearConstraintSet_init_ },
          { Py_tp_getset, t_LinearConstraintSet__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraintSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraintSet, t_LinearConstraintSet, LinearConstraintSet);

        void t_LinearConstraintSet::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraintSet), &PY_TYPE_DEF(LinearConstraintSet), module, "LinearConstraintSet", 0);
        }

        void t_LinearConstraintSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "class_", make_descriptor(LinearConstraintSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "wrapfn_", make_descriptor(t_LinearConstraintSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraintSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraintSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraintSet::initializeClass, 1)))
            return NULL;
          return t_LinearConstraintSet::wrap_Object(LinearConstraintSet(((t_LinearConstraintSet *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraintSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraintSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraintSet_init_(t_LinearConstraintSet *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::org::hipparchus::optim::linear::LinearConstraint > a0((jobject) NULL);
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::linear::LinearConstraint::initializeClass, &a0))
              {
                INT_CALL(object = LinearConstraintSet(a0));
                self->object = object;
                break;
              }
            }
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              LinearConstraintSet object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                INT_CALL(object = LinearConstraintSet(a0));
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

        static PyObject *t_LinearConstraintSet_getConstraints(t_LinearConstraintSet *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(result, ::org::hipparchus::optim::linear::PY_TYPE(LinearConstraint));
        }

        static PyObject *t_LinearConstraintSet_get__constraints(t_LinearConstraintSet *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getConstraints());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonGroundReceiverMeasurement.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
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
            mids$[mid_init$_0922b0dcca6e1f60] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;ZLorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonGroundReceiverMeasurement::PythonGroundReceiverMeasurement(const ::org::orekit::estimation::measurements::GroundStation & a0, jboolean a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0922b0dcca6e1f60, a0.this$, a1, a2.this$, a3, a4, a5, a6.this$)) {}

        void PythonGroundReceiverMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonGroundReceiverMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonGroundReceiverMeasurement::pythonExtension(jlong a0) const
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonGroundReceiverMeasurement_theoreticalEvaluation1(JNIEnv *jenv, jobject jobj, jint a0, jint a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
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
          jlong ptr = jenv->CallLongMethod(jobj, PythonGroundReceiverMeasurement::mids$[PythonGroundReceiverMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/Glonass.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *Glonass::class$ = NULL;
        jmethodID *Glonass::mids$ = NULL;
        bool Glonass::live$ = false;
        jdouble Glonass::DEFAULT_YAW_RATE = (jdouble) 0;

        jclass Glonass::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/Glonass");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c3bb01d9fe1b183b] = env->getMethodID(cls, "<init>", "(DLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_correctedYaw_70e28bc10c6688c2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_89a7d6ae4e1f14a2] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_RATE = env->getStaticDoubleField(cls, "DEFAULT_YAW_RATE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Glonass::Glonass(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a3, const ::org::orekit::frames::Frame & a4) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_c3bb01d9fe1b183b, a0, a1.this$, a2.this$, a3.this$, a4.this$)) {}
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
        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_Glonass__methods_[] = {
          DECLARE_METHOD(t_Glonass, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Glonass, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Glonass)[] = {
          { Py_tp_methods, t_Glonass__methods_ },
          { Py_tp_init, (void *) t_Glonass_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Glonass)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(Glonass, t_Glonass, Glonass);

        void t_Glonass::install(PyObject *module)
        {
          installType(&PY_TYPE(Glonass), &PY_TYPE_DEF(Glonass), module, "Glonass", 0);
        }

        void t_Glonass::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "class_", make_descriptor(Glonass::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "wrapfn_", make_descriptor(t_Glonass::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "boxfn_", make_descriptor(boxObject));
          env->getClass(Glonass::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Glonass), "DEFAULT_YAW_RATE", make_descriptor(Glonass::DEFAULT_YAW_RATE));
        }

        static PyObject *t_Glonass_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Glonass::initializeClass, 1)))
            return NULL;
          return t_Glonass::wrap_Object(Glonass(((t_Glonass *) arg)->object.this$));
        }
        static PyObject *t_Glonass_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Glonass::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Glonass_init_(t_Glonass *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a3((jobject) NULL);
          ::org::orekit::frames::Frame a4((jobject) NULL);
          Glonass object((jobject) NULL);

          if (!parseArgs(args, "Dkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            INT_CALL(object = Glonass(a0, a1, a2, a3, a4));
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
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver.h"
#include "org/hipparchus/ode/events/FieldODEEventHandler.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/AbstractFieldODEDetector.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldAdaptableInterval.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *AbstractFieldODEDetector::class$ = NULL;
        jmethodID *AbstractFieldODEDetector::mids$ = NULL;
        bool AbstractFieldODEDetector::live$ = false;
        jdouble AbstractFieldODEDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractFieldODEDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractFieldODEDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractFieldODEDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/AbstractFieldODEDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_ca2be72fa188dbd5] = env->getMethodID(cls, "g", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_332eb628084a1f92] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEEventHandler;");
            mids$[mid_getMaxCheckInterval_d83e6e399e248e87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/hipparchus/ode/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_f2f64475e4580546] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getSolver_b14b3849019061d8] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;");
            mids$[mid_init_e6d23212b178b64e] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_isForward_e470b6d9e0d979db] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_4e0b2fa6d59c149b] = env->getMethodID(cls, "withHandler", "(Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_974359dcad45986e] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxCheck_f0ebb76a8162149a] = env->getMethodID(cls, "withMaxCheck", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withMaxIter_6cdec8a1f2828383] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withSolver_1b1808e27d1df280] = env->getMethodID(cls, "withSolver", "(Lorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_withThreshold_974359dcad45986e] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");
            mids$[mid_create_67b4930778e53cf9] = env->getMethodID(cls, "create", "(Lorg/hipparchus/ode/events/FieldAdaptableInterval;ILorg/hipparchus/analysis/solvers/BracketedRealFieldUnivariateSolver;Lorg/hipparchus/ode/events/FieldODEEventHandler;)Lorg/hipparchus/ode/events/AbstractFieldODEDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement AbstractFieldODEDetector::g(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ca2be72fa188dbd5], a0.this$));
        }

        ::org::hipparchus::ode::events::FieldODEEventHandler AbstractFieldODEDetector::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_332eb628084a1f92]));
        }

        ::org::hipparchus::ode::events::FieldAdaptableInterval AbstractFieldODEDetector::getMaxCheckInterval() const
        {
          return ::org::hipparchus::ode::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_d83e6e399e248e87]));
        }

        jint AbstractFieldODEDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver AbstractFieldODEDetector::getSolver() const
        {
          return ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver(env->callObjectMethod(this$, mids$[mid_getSolver_b14b3849019061d8]));
        }

        void AbstractFieldODEDetector::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_e6d23212b178b64e], a0.this$, a1.this$);
        }

        jboolean AbstractFieldODEDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_e470b6d9e0d979db]);
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withHandler(const ::org::hipparchus::ode::events::FieldODEEventHandler & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withHandler_4e0b2fa6d59c149b], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_974359dcad45986e], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxCheck(const ::org::hipparchus::ode::events::FieldAdaptableInterval & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_f0ebb76a8162149a], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withMaxIter(jint a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_6cdec8a1f2828383], a0));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withSolver(const ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withSolver_1b1808e27d1df280], a0.this$));
        }

        AbstractFieldODEDetector AbstractFieldODEDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return AbstractFieldODEDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_974359dcad45986e], a0.this$));
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
        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self);
        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args);
        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg);
        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data);
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data);
        static PyGetSetDef t_AbstractFieldODEDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, forward),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, handler),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, solver),
          DECLARE_GET_FIELD(t_AbstractFieldODEDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractFieldODEDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractFieldODEDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, getSolver, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withSolver, METH_O),
          DECLARE_METHOD(t_AbstractFieldODEDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractFieldODEDetector)[] = {
          { Py_tp_methods, t_AbstractFieldODEDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractFieldODEDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractFieldODEDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractFieldODEDetector, t_AbstractFieldODEDetector, AbstractFieldODEDetector);
        PyObject *t_AbstractFieldODEDetector::wrap_Object(const AbstractFieldODEDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractFieldODEDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractFieldODEDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractFieldODEDetector *self = (t_AbstractFieldODEDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractFieldODEDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractFieldODEDetector), &PY_TYPE_DEF(AbstractFieldODEDetector), module, "AbstractFieldODEDetector", 0);
        }

        void t_AbstractFieldODEDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "class_", make_descriptor(AbstractFieldODEDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "wrapfn_", make_descriptor(t_AbstractFieldODEDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractFieldODEDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractFieldODEDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractFieldODEDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractFieldODEDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractFieldODEDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractFieldODEDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractFieldODEDetector::wrap_Object(AbstractFieldODEDetector(((t_AbstractFieldODEDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractFieldODEDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractFieldODEDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractFieldODEDetector_of_(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractFieldODEDetector_g(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_getHandler(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxCheckInterval(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_getMaxIterationCount(t_AbstractFieldODEDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractFieldODEDetector_getSolver(t_AbstractFieldODEDetector *self)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver result((jobject) NULL);
          OBJ_CALL(result = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractFieldODEDetector_init(t_AbstractFieldODEDetector *self, PyObject *args)
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

        static PyObject *t_AbstractFieldODEDetector_isForward(t_AbstractFieldODEDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractFieldODEDetector_withHandler(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::events::FieldODEEventHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxCheck(t_AbstractFieldODEDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::ode::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              AbstractFieldODEDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withMaxIter(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withSolver(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::parameters_))
          {
            OBJ_CALL(result = self->object.withSolver(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withSolver", arg);
          return NULL;
        }

        static PyObject *t_AbstractFieldODEDetector_withThreshold(t_AbstractFieldODEDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractFieldODEDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractFieldODEDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractFieldODEDetector_get__parameters_(t_AbstractFieldODEDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractFieldODEDetector_get__forward(t_AbstractFieldODEDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__handler(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEEventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxCheckInterval(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::hipparchus::ode::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__maxIterationCount(t_AbstractFieldODEDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractFieldODEDetector_get__solver(t_AbstractFieldODEDetector *self, void *data)
        {
          ::org::hipparchus::analysis::solvers::BracketedRealFieldUnivariateSolver value((jobject) NULL);
          OBJ_CALL(value = self->object.getSolver());
          return ::org::hipparchus::analysis::solvers::t_BracketedRealFieldUnivariateSolver::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace leastsquares {

        ::java::lang::Class *ModelObserver::class$ = NULL;
        jmethodID *ModelObserver::mids$ = NULL;
        bool ModelObserver::live$ = false;

        jclass ModelObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/leastsquares/ModelObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_modelCalled_03e6485ac4e3e934] = env->getMethodID(cls, "modelCalled", "([Lorg/orekit/orbits/Orbit;Ljava/util/Map;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void ModelObserver::modelCalled(const JArray< ::org::orekit::orbits::Orbit > & a0, const ::java::util::Map & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_modelCalled_03e6485ac4e3e934], a0.this$, a1.this$);
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
        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args);

        static PyMethodDef t_ModelObserver__methods_[] = {
          DECLARE_METHOD(t_ModelObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ModelObserver, modelCalled, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ModelObserver)[] = {
          { Py_tp_methods, t_ModelObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ModelObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ModelObserver, t_ModelObserver, ModelObserver);

        void t_ModelObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(ModelObserver), &PY_TYPE_DEF(ModelObserver), module, "ModelObserver", 0);
        }

        void t_ModelObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "class_", make_descriptor(ModelObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "wrapfn_", make_descriptor(t_ModelObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ModelObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ModelObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ModelObserver::initializeClass, 1)))
            return NULL;
          return t_ModelObserver::wrap_Object(ModelObserver(((t_ModelObserver *) arg)->object.this$));
        }
        static PyObject *t_ModelObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ModelObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ModelObserver_modelCalled(t_ModelObserver *self, PyObject *args)
        {
          JArray< ::org::orekit::orbits::Orbit > a0((jobject) NULL);
          ::java::util::Map a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "[kK", ::org::orekit::orbits::Orbit::initializeClass, ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
          {
            OBJ_CALL(self->object.modelCalled(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "modelCalled", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *FieldKeplerianOrbit::class$ = NULL;
      jmethodID *FieldKeplerianOrbit::mids$ = NULL;
      bool FieldKeplerianOrbit::live$ = false;

      jclass FieldKeplerianOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/FieldKeplerianOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b6fb4d19a77f9888] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_361e4737caf1050d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/KeplerianOrbit;)V");
          mids$[mid_init$_3630ab60f65fc257] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_c46027b2f093f684] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_cca8d8314ace10b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_c5c88eb1c5b50a4d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_de4891ed91bd58e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_72af0bc419feab2f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_e6d4d3215c30992a] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_e6d4d3215c30992a] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomaly_d275813d7aa8ed95] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomalyDot_d275813d7aa8ed95] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_e6d4d3215c30992a] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomaly_e6d4d3215c30992a] = env->getMethodID(cls, "getEccentricAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomalyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEccentricAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_e6d4d3215c30992a] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_e6d4d3215c30992a] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_e6d4d3215c30992a] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_e6d4d3215c30992a] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_e6d4d3215c30992a] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_e6d4d3215c30992a] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_e6d4d3215c30992a] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_e6d4d3215c30992a] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomaly_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getMeanAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgument_e6d4d3215c30992a] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgumentDot_e6d4d3215c30992a] = env->getMethodID(cls, "getPerigeeArgumentDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_e6d4d3215c30992a] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_e6d4d3215c30992a] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomaly_e6d4d3215c30992a] = env->getMethodID(cls, "getTrueAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomalyDot_e6d4d3215c30992a] = env->getMethodID(cls, "getTrueAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_e470b6d9e0d979db] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_e470b6d9e0d979db] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_430d8674525e97df] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_5221923a4de85b8d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_ea944c965dd4ea89] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_toOrbit_073190698893349f] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPosition_5791f80683b5227e] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_initPVCoordinates_26447a781aafdb9e] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_dd8485a0eb2e2903] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6fb4d19a77f9888, a0.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::KeplerianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_361e4737caf1050d, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3630ab60f65fc257, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c46027b2f093f684, a0.this$, a1.this$, a2.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_cca8d8314ace10b6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_c5c88eb1c5b50a4d, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_de4891ed91bd58e7, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldKeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_72af0bc419feab2f], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomaly_d275813d7aa8ed95], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomalyDot_d275813d7aa8ed95], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType FieldKeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_2571e8fe1cede425]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomaly_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomalyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgumentDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgumentDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomaly_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomalyDot_e6d4d3215c30992a]));
      }

      ::org::orekit::orbits::OrbitType FieldKeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_63ea5cd020bf7bf1]));
      }

      jboolean FieldKeplerianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_e470b6d9e0d979db]);
      }

      jboolean FieldKeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_e470b6d9e0d979db]);
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::removeRates() const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_430d8674525e97df]));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_5221923a4de85b8d], a0));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_ea944c965dd4ea89], a0.this$));
      }

      ::org::orekit::orbits::KeplerianOrbit FieldKeplerianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_073190698893349f]));
      }

      ::java::lang::String FieldKeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args);
      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg);
      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self);
      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args);
      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data);
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data);
      static PyGetSetDef t_FieldKeplerianOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, a),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, aDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, e),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, eccentricAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hx),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hxDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hy),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, hyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, i),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, iDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lE),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lEDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lM),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lMDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lv),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, lvDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, meanAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgument),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, perigeeArgumentDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomaly),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, trueAnomalyDot),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, type),
        DECLARE_GET_FIELD(t_FieldKeplerianOrbit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldKeplerianOrbit__methods_[] = {
        DECLARE_METHOD(t_FieldKeplerianOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomaly, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getAnomalyDot, METH_O),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEccentricAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getMeanAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getPerigeeArgumentDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomaly, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getTrueAnomalyDot, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toOrbit, METH_VARARGS),
        DECLARE_METHOD(t_FieldKeplerianOrbit, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldKeplerianOrbit)[] = {
        { Py_tp_methods, t_FieldKeplerianOrbit__methods_ },
        { Py_tp_init, (void *) t_FieldKeplerianOrbit_init_ },
        { Py_tp_getset, t_FieldKeplerianOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldKeplerianOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::FieldOrbit),
        NULL
      };

      DEFINE_TYPE(FieldKeplerianOrbit, t_FieldKeplerianOrbit, FieldKeplerianOrbit);
      PyObject *t_FieldKeplerianOrbit::wrap_Object(const FieldKeplerianOrbit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldKeplerianOrbit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldKeplerianOrbit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldKeplerianOrbit *self = (t_FieldKeplerianOrbit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldKeplerianOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldKeplerianOrbit), &PY_TYPE_DEF(FieldKeplerianOrbit), module, "FieldKeplerianOrbit", 0);
      }

      void t_FieldKeplerianOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "class_", make_descriptor(FieldKeplerianOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "wrapfn_", make_descriptor(t_FieldKeplerianOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldKeplerianOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldKeplerianOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldKeplerianOrbit::initializeClass, 1)))
          return NULL;
        return t_FieldKeplerianOrbit::wrap_Object(FieldKeplerianOrbit(((t_FieldKeplerianOrbit *) arg)->object.this$));
      }
      static PyObject *t_FieldKeplerianOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldKeplerianOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldKeplerianOrbit_of_(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldKeplerianOrbit_init_(t_FieldKeplerianOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::KeplerianOrbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::KeplerianOrbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkK", ::org::orekit::utils::TimeStampedFieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
            PyTypeObject **p3;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KkKK", ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a1, &a2, &p2, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 10:
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
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &p8, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
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
            ::org::hipparchus::CalculusFieldElement a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::hipparchus::CalculusFieldElement a7((jobject) NULL);
            PyTypeObject **p7;
            ::org::hipparchus::CalculusFieldElement a8((jobject) NULL);
            PyTypeObject **p8;
            ::org::hipparchus::CalculusFieldElement a9((jobject) NULL);
            PyTypeObject **p9;
            ::org::hipparchus::CalculusFieldElement a10((jobject) NULL);
            PyTypeObject **p10;
            ::org::hipparchus::CalculusFieldElement a11((jobject) NULL);
            PyTypeObject **p11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::FieldAbsoluteDate a14((jobject) NULL);
            PyTypeObject **p14;
            ::org::hipparchus::CalculusFieldElement a15((jobject) NULL);
            PyTypeObject **p15;
            FieldKeplerianOrbit object((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKKKKKKKkKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a8, &p8, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a9, &p9, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a10, &p10, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a11, &p11, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &p14, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a15, &p15, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldKeplerianOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_FieldKeplerianOrbit_addKeplerContribution(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "KK[K", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getA(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getADot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomaly(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomaly(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomaly", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getAnomalyDot(t_FieldKeplerianOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAnomalyDot(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAnomalyDot", arg);
        return NULL;
      }

      static PyObject *t_FieldKeplerianOrbit_getCachedPositionAngleType(t_FieldKeplerianOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEccentricAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEccentricAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialExDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getEquinoctialEyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHx(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHxDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getHyDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getI(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getIDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLE(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLEDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLM(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLMDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLv(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getLvDot(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getMeanAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMeanAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgument(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getPerigeeArgumentDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getPerigeeArgumentDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getRightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomaly(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomaly());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getTrueAnomalyDot(t_FieldKeplerianOrbit *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getTrueAnomalyDot());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldKeplerianOrbit_getType(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasDerivatives(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        jboolean result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hasDerivatives());
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "hasDerivatives", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_hasRates(t_FieldKeplerianOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldKeplerianOrbit_removeRates(t_FieldKeplerianOrbit *self)
      {
        FieldKeplerianOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldKeplerianOrbit_shiftedBy(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldKeplerianOrbit result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldKeplerianOrbit::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toOrbit(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toOrbit());
          return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toOrbit", args, 2);
      }

      static PyObject *t_FieldKeplerianOrbit_toString(t_FieldKeplerianOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldKeplerianOrbit), (PyObject *) self, "toString", args, 2);
      }
      static PyObject *t_FieldKeplerianOrbit_get__parameters_(t_FieldKeplerianOrbit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldKeplerianOrbit_get__a(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__aDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getADot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__cachedPositionAngleType(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__e(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__eccentricAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEccentricAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialExDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__equinoctialEyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hx(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hxDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHxDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hy(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__hyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__i(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__iDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getIDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lE(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lEDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLEDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lM(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lMDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLMDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lv(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__lvDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLvDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__meanAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMeanAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgument(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__perigeeArgumentDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getPerigeeArgumentDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNode(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__rightAscensionOfAscendingNodeDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomaly(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomaly());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__trueAnomalyDot(t_FieldKeplerianOrbit *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getTrueAnomalyDot());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldKeplerianOrbit_get__type(t_FieldKeplerianOrbit *self, void *data)
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
#include "org/orekit/forces/ForceModel.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {

      ::java::lang::Class *ForceModel::class$ = NULL;
      jmethodID *ForceModel::mids$ = NULL;
      bool ForceModel::live$ = false;

      jclass ForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/ForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_addContribution_3ae28f2cc7cbb00b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_170c8a5902f676b2] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_getEventDetectors_a68a17dd093f796d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
          mids$[mid_getFieldEventDetectors_1328ddb491531a35] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
          mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_init_acdd8180a5dc1a8d] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::geometry::euclidean::threed::Vector3D ForceModel::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ForceModel::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_3ae28f2cc7cbb00b], a0.this$, a1.this$);
      }

      void ForceModel::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addContribution_170c8a5902f676b2], a0.this$, a1.this$);
      }

      jboolean ForceModel::dependsOnPositionOnly() const
      {
        return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
      }

      ::java::util::stream::Stream ForceModel::getEventDetectors() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_a68a17dd093f796d]));
      }

      ::java::util::stream::Stream ForceModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_1328ddb491531a35], a0.this$));
      }

      void ForceModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
      }

      void ForceModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_acdd8180a5dc1a8d], a0.this$, a1.this$);
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
      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self);
      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self);
      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg);
      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args);
      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data);
      static PyGetSetDef t_ForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_ForceModel, eventDetectors),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ForceModel__methods_[] = {
        DECLARE_METHOD(t_ForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ForceModel, acceleration, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, addContribution, METH_VARARGS),
        DECLARE_METHOD(t_ForceModel, dependsOnPositionOnly, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getEventDetectors, METH_NOARGS),
        DECLARE_METHOD(t_ForceModel, getFieldEventDetectors, METH_O),
        DECLARE_METHOD(t_ForceModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ForceModel)[] = {
        { Py_tp_methods, t_ForceModel__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ForceModel)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
        NULL
      };

      DEFINE_TYPE(ForceModel, t_ForceModel, ForceModel);

      void t_ForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(ForceModel), &PY_TYPE_DEF(ForceModel), module, "ForceModel", 0);
      }

      void t_ForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "class_", make_descriptor(ForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "wrapfn_", make_descriptor(t_ForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ForceModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ForceModel::initializeClass, 1)))
          return NULL;
        return t_ForceModel::wrap_Object(ForceModel(((t_ForceModel *) arg)->object.this$));
      }
      static PyObject *t_ForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ForceModel_acceleration(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
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
        }

        PyErr_SetArgsError((PyObject *) self, "acceleration", args);
        return NULL;
      }

      static PyObject *t_ForceModel_addContribution(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addContribution(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "addContribution", args);
        return NULL;
      }

      static PyObject *t_ForceModel_dependsOnPositionOnly(t_ForceModel *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.dependsOnPositionOnly());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ForceModel_getEventDetectors(t_ForceModel *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
      }

      static PyObject *t_ForceModel_getFieldEventDetectors(t_ForceModel *self, PyObject *arg)
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

      static PyObject *t_ForceModel_init(t_ForceModel *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
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
          }
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ForceModel_get__eventDetectors(t_ForceModel *self, void *data)
      {
        ::java::util::stream::Stream value((jobject) NULL);
        OBJ_CALL(value = self->object.getEventDetectors());
        return ::java::util::stream::t_Stream::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/AlignmentDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AlignmentDetector::class$ = NULL;
        jmethodID *AlignmentDetector::mids$ = NULL;
        bool AlignmentDetector::live$ = false;

        jclass AlignmentDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AlignmentDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a85b5479fc4e618b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_d53053e87ff62586] = env->getMethodID(cls, "<init>", "(DLorg/orekit/orbits/Orbit;Lorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_init$_b04b82f55ac5df5f] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/utils/PVCoordinatesProvider;D)V");
            mids$[mid_g_66a2f071e6ed0c06] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getAlignAngle_456d9a2f64d6b28d] = env->getMethodID(cls, "getAlignAngle", "()D");
            mids$[mid_getPVCoordinatesProvider_7044cb1966c8a481] = env->getMethodID(cls, "getPVCoordinatesProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_58f09a4261522963] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AlignmentDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlignmentDetector::AlignmentDetector(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_a85b5479fc4e618b, a0.this$, a1.this$, a2)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_d53053e87ff62586, a0, a1.this$, a2.this$, a3)) {}

        AlignmentDetector::AlignmentDetector(jdouble a0, jdouble a1, const ::org::orekit::utils::PVCoordinatesProvider & a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_b04b82f55ac5df5f, a0, a1, a2.this$, a3)) {}

        jdouble AlignmentDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_66a2f071e6ed0c06], a0.this$);
        }

        jdouble AlignmentDetector::getAlignAngle() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAlignAngle_456d9a2f64d6b28d]);
        }

        ::org::orekit::utils::PVCoordinatesProvider AlignmentDetector::getPVCoordinatesProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getPVCoordinatesProvider_7044cb1966c8a481]));
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
        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args);
        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args);
        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self);
        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data);
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data);
        static PyGetSetDef t_AlignmentDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AlignmentDetector, alignAngle),
          DECLARE_GET_FIELD(t_AlignmentDetector, pVCoordinatesProvider),
          DECLARE_GET_FIELD(t_AlignmentDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlignmentDetector__methods_[] = {
          DECLARE_METHOD(t_AlignmentDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlignmentDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_AlignmentDetector, getAlignAngle, METH_NOARGS),
          DECLARE_METHOD(t_AlignmentDetector, getPVCoordinatesProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlignmentDetector)[] = {
          { Py_tp_methods, t_AlignmentDetector__methods_ },
          { Py_tp_init, (void *) t_AlignmentDetector_init_ },
          { Py_tp_getset, t_AlignmentDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlignmentDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(AlignmentDetector, t_AlignmentDetector, AlignmentDetector);
        PyObject *t_AlignmentDetector::wrap_Object(const AlignmentDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlignmentDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlignmentDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlignmentDetector *self = (t_AlignmentDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlignmentDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AlignmentDetector), &PY_TYPE_DEF(AlignmentDetector), module, "AlignmentDetector", 0);
        }

        void t_AlignmentDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "class_", make_descriptor(AlignmentDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "wrapfn_", make_descriptor(t_AlignmentDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlignmentDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AlignmentDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlignmentDetector::initializeClass, 1)))
            return NULL;
          return t_AlignmentDetector::wrap_Object(AlignmentDetector(((t_AlignmentDetector *) arg)->object.this$));
        }
        static PyObject *t_AlignmentDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlignmentDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlignmentDetector_of_(t_AlignmentDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AlignmentDetector_init_(t_AlignmentDetector *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
              jdouble a2;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::orekit::orbits::Orbit a1((jobject) NULL);
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
                break;
              }
            }
            {
              jdouble a0;
              jdouble a1;
              ::org::orekit::utils::PVCoordinatesProvider a2((jobject) NULL);
              jdouble a3;
              AlignmentDetector object((jobject) NULL);

              if (!parseArgs(args, "DDkD", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = AlignmentDetector(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(AlignmentDetector);
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

        static PyObject *t_AlignmentDetector_g(t_AlignmentDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(AlignmentDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_AlignmentDetector_getAlignAngle(t_AlignmentDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AlignmentDetector_getPVCoordinatesProvider(t_AlignmentDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_AlignmentDetector_get__parameters_(t_AlignmentDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AlignmentDetector_get__alignAngle(t_AlignmentDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAlignAngle());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AlignmentDetector_get__pVCoordinatesProvider(t_AlignmentDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVCoordinatesProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarD::class$ = NULL;
          jmethodID *FieldCopolarD::mids$ = NULL;
          bool FieldCopolarD::live$ = false;

          jclass FieldCopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_e6d4d3215c30992a] = env->getMethodID(cls, "cd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nd_e6d4d3215c30992a] = env->getMethodID(cls, "nd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sd_e6d4d3215c30992a] = env->getMethodID(cls, "sd", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::cd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cd_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::nd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nd_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::sd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sd_e6d4d3215c30992a]));
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
          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args);
          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data);
          static PyGetSetDef t_FieldCopolarD__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarD, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarD__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarD)[] = {
            { Py_tp_methods, t_FieldCopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarD__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarD, t_FieldCopolarD, FieldCopolarD);
          PyObject *t_FieldCopolarD::wrap_Object(const FieldCopolarD& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarD::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarD), &PY_TYPE_DEF(FieldCopolarD), module, "FieldCopolarD", 0);
          }

          void t_FieldCopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "class_", make_descriptor(FieldCopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "wrapfn_", make_descriptor(t_FieldCopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarD::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarD::wrap_Object(FieldCopolarD(((t_FieldCopolarD *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data)
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
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/utils/WaypointPVBuilder.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/WaypointPVBuilder$InterpolationFactory.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *WaypointPVBuilder::class$ = NULL;
      jmethodID *WaypointPVBuilder::mids$ = NULL;
      bool WaypointPVBuilder::live$ = false;

      jclass WaypointPVBuilder::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/WaypointPVBuilder");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4ba8dde6ff9937ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/WaypointPVBuilder$InterpolationFactory;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_addWaypoint_519b23bb689342b8] = env->getMethodID(cls, "addWaypoint", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_build_7044cb1966c8a481] = env->getMethodID(cls, "build", "()Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_cartesianBuilder_062020604dbc5286] = env->getStaticMethodID(cls, "cartesianBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantAfter_4d55dff8aba47889] = env->getMethodID(cls, "constantAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_constantBefore_4d55dff8aba47889] = env->getMethodID(cls, "constantBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_greatCircleBuilder_062020604dbc5286] = env->getStaticMethodID(cls, "greatCircleBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidAfter_4d55dff8aba47889] = env->getMethodID(cls, "invalidAfter", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_invalidBefore_4d55dff8aba47889] = env->getMethodID(cls, "invalidBefore", "()Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_loxodromeBuilder_062020604dbc5286] = env->getStaticMethodID(cls, "loxodromeBuilder", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/utils/WaypointPVBuilder;");
          mids$[mid_createInitial_9986637990d6c960] = env->getMethodID(cls, "createInitial", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");
          mids$[mid_createFinal_9986637990d6c960] = env->getMethodID(cls, "createFinal", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      WaypointPVBuilder::WaypointPVBuilder(const ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ba8dde6ff9937ce, a0.this$, a1.this$)) {}

      WaypointPVBuilder WaypointPVBuilder::addWaypoint(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_addWaypoint_519b23bb689342b8], a0.this$, a1.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider WaypointPVBuilder::build() const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_build_7044cb1966c8a481]));
      }

      WaypointPVBuilder WaypointPVBuilder::cartesianBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_cartesianBuilder_062020604dbc5286], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::constantAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantAfter_4d55dff8aba47889]));
      }

      WaypointPVBuilder WaypointPVBuilder::constantBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_constantBefore_4d55dff8aba47889]));
      }

      WaypointPVBuilder WaypointPVBuilder::greatCircleBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_greatCircleBuilder_062020604dbc5286], a0.this$));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidAfter() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidAfter_4d55dff8aba47889]));
      }

      WaypointPVBuilder WaypointPVBuilder::invalidBefore() const
      {
        return WaypointPVBuilder(env->callObjectMethod(this$, mids$[mid_invalidBefore_4d55dff8aba47889]));
      }

      WaypointPVBuilder WaypointPVBuilder::loxodromeBuilder(const ::org::orekit::bodies::OneAxisEllipsoid & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return WaypointPVBuilder(env->callStaticObjectMethod(cls, mids$[mid_loxodromeBuilder_062020604dbc5286], a0.this$));
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
      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg);
      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds);
      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args);
      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg);
      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self);
      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_WaypointPVBuilder__methods_[] = {
        DECLARE_METHOD(t_WaypointPVBuilder, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, addWaypoint, METH_VARARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, build, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, cartesianBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, constantBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, greatCircleBuilder, METH_O | METH_CLASS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidAfter, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, invalidBefore, METH_NOARGS),
        DECLARE_METHOD(t_WaypointPVBuilder, loxodromeBuilder, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(WaypointPVBuilder)[] = {
        { Py_tp_methods, t_WaypointPVBuilder__methods_ },
        { Py_tp_init, (void *) t_WaypointPVBuilder_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(WaypointPVBuilder)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(WaypointPVBuilder, t_WaypointPVBuilder, WaypointPVBuilder);

      void t_WaypointPVBuilder::install(PyObject *module)
      {
        installType(&PY_TYPE(WaypointPVBuilder), &PY_TYPE_DEF(WaypointPVBuilder), module, "WaypointPVBuilder", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "InterpolationFactory", make_descriptor(&PY_TYPE_DEF(WaypointPVBuilder$InterpolationFactory)));
      }

      void t_WaypointPVBuilder::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "class_", make_descriptor(WaypointPVBuilder::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "wrapfn_", make_descriptor(t_WaypointPVBuilder::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(WaypointPVBuilder), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_WaypointPVBuilder_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, WaypointPVBuilder::initializeClass, 1)))
          return NULL;
        return t_WaypointPVBuilder::wrap_Object(WaypointPVBuilder(((t_WaypointPVBuilder *) arg)->object.this$));
      }
      static PyObject *t_WaypointPVBuilder_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, WaypointPVBuilder::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_WaypointPVBuilder_init_(t_WaypointPVBuilder *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory a0((jobject) NULL);
        ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
        WaypointPVBuilder object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::WaypointPVBuilder$InterpolationFactory::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = WaypointPVBuilder(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_WaypointPVBuilder_addWaypoint(t_WaypointPVBuilder *self, PyObject *args)
      {
        ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.addWaypoint(a0, a1));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "addWaypoint", args);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_build(t_WaypointPVBuilder *self)
      {
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.build());
        return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_cartesianBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::cartesianBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "cartesianBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_constantAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_constantBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.constantBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_greatCircleBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::greatCircleBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "greatCircleBuilder", arg);
        return NULL;
      }

      static PyObject *t_WaypointPVBuilder_invalidAfter(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidAfter());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_invalidBefore(t_WaypointPVBuilder *self)
      {
        WaypointPVBuilder result((jobject) NULL);
        OBJ_CALL(result = self->object.invalidBefore());
        return t_WaypointPVBuilder::wrap_Object(result);
      }

      static PyObject *t_WaypointPVBuilder_loxodromeBuilder(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        WaypointPVBuilder result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::utils::WaypointPVBuilder::loxodromeBuilder(a0));
          return t_WaypointPVBuilder::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "loxodromeBuilder", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateFunction::class$ = NULL;
      jmethodID *FieldMultivariateFunction::mids$ = NULL;
      bool FieldMultivariateFunction::live$ = false;

      jclass FieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateFunction_a4d036ee2f9ac768] = env->getMethodID(cls, "toCalculusFieldMultivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateFunction;");
          mids$[mid_value_05c598bf3375e090] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateFunction FieldMultivariateFunction::toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateFunction_a4d036ee2f9ac768], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_05c598bf3375e090], a0.this$));
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
      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, toCalculusFieldMultivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateFunction, t_FieldMultivariateFunction, FieldMultivariateFunction);

      void t_FieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateFunction), &PY_TYPE_DEF(FieldMultivariateFunction), module, "FieldMultivariateFunction", 0);
      }

      void t_FieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "class_", make_descriptor(FieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "wrapfn_", make_descriptor(t_FieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateFunction::wrap_Object(FieldMultivariateFunction(((t_FieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
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
              mids$[mid_init$_e988acb14b88b552] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DDD)V");
              mids$[mid_getDesignator_0090f7797e403f43] = env->getMethodID(cls, "getDesignator", "()Ljava/lang/String;");
              mids$[mid_getReceiverIdentifier_0090f7797e403f43] = env->getMethodID(cls, "getReceiverIdentifier", "()Ljava/lang/String;");
              mids$[mid_getX_456d9a2f64d6b28d] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_456d9a2f64d6b28d] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_456d9a2f64d6b28d] = env->getMethodID(cls, "getZ", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$Receiver::RinexClock$Receiver(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e988acb14b88b552, a0.this$, a1.this$, a2, a3, a4)) {}

          ::java::lang::String RinexClock$Receiver::getDesignator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDesignator_0090f7797e403f43]));
          }

          ::java::lang::String RinexClock$Receiver::getReceiverIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverIdentifier_0090f7797e403f43]));
          }

          jdouble RinexClock$Receiver::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$Receiver::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_456d9a2f64d6b28d]);
          }

          jdouble RinexClock$Receiver::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_456d9a2f64d6b28d]);
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
            mids$[mid_getInstance_17f1925f5f3449ab] = env->getStaticMethodID(cls, "getInstance", "()Lorg/orekit/rugged/utils/MinSelector;");
            mids$[mid_selectFirst_a836bdf37f582c99] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MinSelector MinSelector::getInstance()
        {
          jclass cls = env->getClass(initializeClass);
          return MinSelector(env->callStaticObjectMethod(cls, mids$[mid_getInstance_17f1925f5f3449ab]));
        }

        jboolean MinSelector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_a836bdf37f582c99], a0, a1);
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
