#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/OutlierFilter.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OutlierFilter::class$ = NULL;
          jmethodID *OutlierFilter::mids$ = NULL;
          bool OutlierFilter::live$ = false;

          jclass OutlierFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OutlierFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_getWarmup_570ce0828f81a2c1] = env->getMethodID(cls, "getWarmup", "()I");
              mids$[mid_getMaxSigma_dff5885c2c873297] = env->getMethodID(cls, "getMaxSigma", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OutlierFilter::OutlierFilter(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

          ::java::util::List OutlierFilter::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OutlierFilter::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args);
          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self);
          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg);
          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data);
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data);
          static PyGetSetDef t_OutlierFilter__fields_[] = {
            DECLARE_GET_FIELD(t_OutlierFilter, parametersDrivers),
            DECLARE_GET_FIELD(t_OutlierFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OutlierFilter__methods_[] = {
            DECLARE_METHOD(t_OutlierFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OutlierFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_OutlierFilter, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OutlierFilter, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OutlierFilter)[] = {
            { Py_tp_methods, t_OutlierFilter__methods_ },
            { Py_tp_init, (void *) t_OutlierFilter_init_ },
            { Py_tp_getset, t_OutlierFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OutlierFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OutlierFilter, t_OutlierFilter, OutlierFilter);
          PyObject *t_OutlierFilter::wrap_Object(const OutlierFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OutlierFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OutlierFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OutlierFilter *self = (t_OutlierFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OutlierFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(OutlierFilter), &PY_TYPE_DEF(OutlierFilter), module, "OutlierFilter", 0);
          }

          void t_OutlierFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "class_", make_descriptor(OutlierFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "wrapfn_", make_descriptor(t_OutlierFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OutlierFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OutlierFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OutlierFilter::initializeClass, 1)))
              return NULL;
            return t_OutlierFilter::wrap_Object(OutlierFilter(((t_OutlierFilter *) arg)->object.this$));
          }
          static PyObject *t_OutlierFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OutlierFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OutlierFilter_of_(t_OutlierFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_OutlierFilter_init_(t_OutlierFilter *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            jdouble a1;
            OutlierFilter object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = OutlierFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OutlierFilter_getParametersDrivers(t_OutlierFilter *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OutlierFilter_modifyWithoutDerivatives(t_OutlierFilter *self, PyObject *arg)
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
          static PyObject *t_OutlierFilter_get__parameters_(t_OutlierFilter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OutlierFilter_get__parametersDrivers(t_OutlierFilter *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/models/earth/troposphere/DiscreteTroposphericModel.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseTroposphericDelayModifier::class$ = NULL;
          jmethodID *PhaseTroposphericDelayModifier::mids$ = NULL;
          bool PhaseTroposphericDelayModifier::live$ = false;

          jclass PhaseTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3e4962f34ea61659] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseTroposphericDelayModifier::PhaseTroposphericDelayModifier(const ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e4962f34ea61659, a0.this$)) {}

          ::java::util::List PhaseTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void PhaseTroposphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void PhaseTroposphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self);
          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseTroposphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseTroposphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseTroposphericDelayModifier, t_PhaseTroposphericDelayModifier, PhaseTroposphericDelayModifier);

          void t_PhaseTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseTroposphericDelayModifier), &PY_TYPE_DEF(PhaseTroposphericDelayModifier), module, "PhaseTroposphericDelayModifier", 0);
          }

          void t_PhaseTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "class_", make_descriptor(PhaseTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseTroposphericDelayModifier::wrap_Object(PhaseTroposphericDelayModifier(((t_PhaseTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseTroposphericDelayModifier_init_(t_PhaseTroposphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel a0((jobject) NULL);
            PhaseTroposphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::models::earth::troposphere::DiscreteTroposphericModel::initializeClass, &a0))
            {
              INT_CALL(object = PhaseTroposphericDelayModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_getParametersDrivers(t_PhaseTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modify(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurement::parameters_))
            {
              OBJ_CALL(self->object.modify(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modify", arg);
            return NULL;
          }

          static PyObject *t_PhaseTroposphericDelayModifier_modifyWithoutDerivatives(t_PhaseTroposphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseTroposphericDelayModifier_get__parametersDrivers(t_PhaseTroposphericDelayModifier *self, void *data)
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
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *IntegerDistribution::class$ = NULL;
      jmethodID *IntegerDistribution::mids$ = NULL;
      bool IntegerDistribution::live$ = false;

      jclass IntegerDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/IntegerDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
          mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
          mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
          mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
          mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
          mids$[mid_inverseCumulativeProbability_4508852644846c83] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
          mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
          mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
          mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");
          mids$[mid_probability_dbbe5f05149dbf73] = env->getMethodID(cls, "probability", "(II)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble IntegerDistribution::cumulativeProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
      }

      jdouble IntegerDistribution::getNumericalMean() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
      }

      jdouble IntegerDistribution::getNumericalVariance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
      }

      jint IntegerDistribution::getSupportLowerBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
      }

      jint IntegerDistribution::getSupportUpperBound() const
      {
        return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
      }

      jint IntegerDistribution::inverseCumulativeProbability(jdouble a0) const
      {
        return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_4508852644846c83], a0);
      }

      jboolean IntegerDistribution::isSupportConnected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
      }

      jdouble IntegerDistribution::logProbability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
      }

      jdouble IntegerDistribution::probability(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
      }

      jdouble IntegerDistribution::probability(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_probability_dbbe5f05149dbf73], a0, a1);
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
      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self);
      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg);
      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args);
      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data);
      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data);
      static PyGetSetDef t_IntegerDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalMean),
        DECLARE_GET_FIELD(t_IntegerDistribution, numericalVariance),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportConnected),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportLowerBound),
        DECLARE_GET_FIELD(t_IntegerDistribution, supportUpperBound),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IntegerDistribution__methods_[] = {
        DECLARE_METHOD(t_IntegerDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntegerDistribution, cumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalMean, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getNumericalVariance, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportLowerBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, getSupportUpperBound, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, inverseCumulativeProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, isSupportConnected, METH_NOARGS),
        DECLARE_METHOD(t_IntegerDistribution, logProbability, METH_O),
        DECLARE_METHOD(t_IntegerDistribution, probability, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntegerDistribution)[] = {
        { Py_tp_methods, t_IntegerDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IntegerDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntegerDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntegerDistribution, t_IntegerDistribution, IntegerDistribution);

      void t_IntegerDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(IntegerDistribution), &PY_TYPE_DEF(IntegerDistribution), module, "IntegerDistribution", 0);
      }

      void t_IntegerDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "class_", make_descriptor(IntegerDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "wrapfn_", make_descriptor(t_IntegerDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntegerDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntegerDistribution::initializeClass, 1)))
          return NULL;
        return t_IntegerDistribution::wrap_Object(IntegerDistribution(((t_IntegerDistribution *) arg)->object.this$));
      }
      static PyObject *t_IntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntegerDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntegerDistribution_cumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.cumulativeProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "cumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_getNumericalMean(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getNumericalVariance(t_IntegerDistribution *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IntegerDistribution_getSupportLowerBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_getSupportUpperBound(t_IntegerDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_IntegerDistribution_inverseCumulativeProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jdouble a0;
        jint result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
          return PyLong_FromLong((long) result);
        }

        PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_isSupportConnected(t_IntegerDistribution *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSupportConnected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IntegerDistribution_logProbability(t_IntegerDistribution *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.logProbability(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_probability(t_IntegerDistribution *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            jdouble result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.probability(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.probability(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "probability", args);
        return NULL;
      }

      static PyObject *t_IntegerDistribution_get__numericalMean(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalMean());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__numericalVariance(t_IntegerDistribution *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNumericalVariance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IntegerDistribution_get__supportConnected(t_IntegerDistribution *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSupportConnected());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_IntegerDistribution_get__supportLowerBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportLowerBound());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_IntegerDistribution_get__supportUpperBound(t_IntegerDistribution *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSupportUpperBound());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm05Header::class$ = NULL;
              jmethodID *SsrIgm05Header::mids$ = NULL;
              bool SsrIgm05Header::live$ = false;

              jclass SsrIgm05Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm05Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm05Header::SsrIgm05Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds);

              static PyMethodDef t_SsrIgm05Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm05Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm05Header, instance_, METH_O | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm05Header)[] = {
                { Py_tp_methods, t_SsrIgm05Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm05Header_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm05Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm05Header, t_SsrIgm05Header, SsrIgm05Header);

              void t_SsrIgm05Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm05Header), &PY_TYPE_DEF(SsrIgm05Header), module, "SsrIgm05Header", 0);
              }

              void t_SsrIgm05Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "class_", make_descriptor(SsrIgm05Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "wrapfn_", make_descriptor(t_SsrIgm05Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm05Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm05Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm05Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm05Header::wrap_Object(SsrIgm05Header(((t_SsrIgm05Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm05Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm05Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm05Header_init_(t_SsrIgm05Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm05Header object((jobject) NULL);

                INT_CALL(object = SsrIgm05Header());
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
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
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
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_acd058c9ad5e3c71] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_init$_05aabef5e3d10010] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDDLjava/util/Comparator;)V");
          mids$[mid_getVT_c992983685c753c5] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_acd058c9ad5e3c71, a0.this$, a1, a2, a3)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::Comparator & a4) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_05aabef5e3d10010, a0.this$, a1, a2, a3, a4.this$)) {}

      ::org::hipparchus::linear::FieldMatrix OrderedComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_c992983685c753c5]));
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "java/lang/String.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBody::class$ = NULL;
            jmethodID *DSSTThirdBody::mids$ = NULL;
            bool DSSTThirdBody::live$ = false;
            ::java::lang::String *DSSTThirdBody::ATTRACTION_COEFFICIENT = NULL;
            jdouble DSSTThirdBody::BIG_TRUNCATION_TOLERANCE = (jdouble) 0;
            jint DSSTThirdBody::MAX_POWER = (jint) 0;
            ::java::lang::String *DSSTThirdBody::SHORT_PERIOD_PREFIX = NULL;
            jdouble DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE = (jdouble) 0;

            jclass DSSTThirdBody::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7f7787fe4e615d6e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;D)V");
                mids$[mid_getBody_624686a38a6b107c] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                BIG_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "BIG_TRUNCATION_TOLERANCE");
                MAX_POWER = env->getStaticIntField(cls, "MAX_POWER");
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SMALL_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "SMALL_TRUNCATION_TOLERANCE");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBody::DSSTThirdBody(const ::org::orekit::bodies::CelestialBody & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7f7787fe4e615d6e, a0.this$, a1)) {}

            ::org::orekit::bodies::CelestialBody DSSTThirdBody::getBody() const
            {
              return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_624686a38a6b107c]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTThirdBody::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
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
          namespace forces {
            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg);
            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data);
            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data);
            static PyGetSetDef t_DSSTThirdBody__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBody, body),
              DECLARE_GET_FIELD(t_DSSTThirdBody, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBody__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBody, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, getBody, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTThirdBody, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBody)[] = {
              { Py_tp_methods, t_DSSTThirdBody__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBody_init_ },
              { Py_tp_getset, t_DSSTThirdBody__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBody)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBody, t_DSSTThirdBody, DSSTThirdBody);

            void t_DSSTThirdBody::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBody), &PY_TYPE_DEF(DSSTThirdBody), module, "DSSTThirdBody", 0);
            }

            void t_DSSTThirdBody::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "class_", make_descriptor(DSSTThirdBody::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "wrapfn_", make_descriptor(t_DSSTThirdBody::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTThirdBody::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTThirdBody::ATTRACTION_COEFFICIENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "BIG_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::BIG_TRUNCATION_TOLERANCE));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "MAX_POWER", make_descriptor(DSSTThirdBody::MAX_POWER));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTThirdBody::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SMALL_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE));
            }

            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBody::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBody::wrap_Object(DSSTThirdBody(((t_DSSTThirdBody *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBody::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              jdouble a1;
              DSSTThirdBody object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTThirdBody(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self)
            {
              ::org::orekit::bodies::CelestialBody result((jobject) NULL);
              OBJ_CALL(result = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
            }

            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data)
            {
              ::org::orekit::bodies::CelestialBody value((jobject) NULL);
              OBJ_CALL(value = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
            }

            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *RawSphericalHarmonicsProvider$RawSphericalHarmonics::class$ = NULL;
          jmethodID *RawSphericalHarmonicsProvider$RawSphericalHarmonics::mids$ = NULL;
          bool RawSphericalHarmonicsProvider$RawSphericalHarmonics::live$ = false;

          jclass RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getRawCnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getRawCnm", "(II)D");
              mids$[mid_getRawSnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getRawSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawCnm_dbbe5f05149dbf73], a0, a1);
          }

          jdouble RawSphericalHarmonicsProvider$RawSphericalHarmonics::getRawSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRawSnm_dbbe5f05149dbf73], a0, a1);
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
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawCnm, METH_VARARGS),
            DECLARE_METHOD(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, getRawSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            { Py_tp_methods, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RawSphericalHarmonicsProvider$RawSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics, t_RawSphericalHarmonicsProvider$RawSphericalHarmonics, RawSphericalHarmonicsProvider$RawSphericalHarmonics);

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), &PY_TYPE_DEF(RawSphericalHarmonicsProvider$RawSphericalHarmonics), module, "RawSphericalHarmonicsProvider$RawSphericalHarmonics", 0);
          }

          void t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "class_", make_descriptor(RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "wrapfn_", make_descriptor(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RawSphericalHarmonicsProvider$RawSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_RawSphericalHarmonicsProvider$RawSphericalHarmonics::wrap_Object(RawSphericalHarmonicsProvider$RawSphericalHarmonics(((t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawCnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawCnm", args);
            return NULL;
          }

          static PyObject *t_RawSphericalHarmonicsProvider$RawSphericalHarmonics_getRawSnm(t_RawSphericalHarmonicsProvider$RawSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getRawSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRawSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/PythonFieldPVCoordinatesProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldPVCoordinatesProvider::class$ = NULL;
      jmethodID *PythonFieldPVCoordinatesProvider::mids$ = NULL;
      bool PythonFieldPVCoordinatesProvider::live$ = false;

      jclass PythonFieldPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getPVCoordinates_2cdae1c350dc3e9a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldPVCoordinatesProvider::PythonFieldPVCoordinatesProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldPVCoordinatesProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldPVCoordinatesProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldPVCoordinatesProvider::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self);
      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args);
      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data);
      static PyGetSetDef t_PythonFieldPVCoordinatesProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldPVCoordinatesProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldPVCoordinatesProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_PythonFieldPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldPVCoordinatesProvider_init_ },
        { Py_tp_getset, t_PythonFieldPVCoordinatesProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldPVCoordinatesProvider, t_PythonFieldPVCoordinatesProvider, PythonFieldPVCoordinatesProvider);
      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_Object(const PythonFieldPVCoordinatesProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldPVCoordinatesProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldPVCoordinatesProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldPVCoordinatesProvider *self = (t_PythonFieldPVCoordinatesProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldPVCoordinatesProvider), &PY_TYPE_DEF(PythonFieldPVCoordinatesProvider), module, "PythonFieldPVCoordinatesProvider", 1);
      }

      void t_PythonFieldPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "class_", make_descriptor(PythonFieldPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "wrapfn_", make_descriptor(t_PythonFieldPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldPVCoordinatesProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;", (void *) t_PythonFieldPVCoordinatesProvider_getPVCoordinates0 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldPVCoordinatesProvider_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldPVCoordinatesProvider::wrap_Object(PythonFieldPVCoordinatesProvider(((t_PythonFieldPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_of_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldPVCoordinatesProvider_init_(t_PythonFieldPVCoordinatesProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldPVCoordinatesProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldPVCoordinatesProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_finalize(t_PythonFieldPVCoordinatesProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_pythonExtension(t_PythonFieldPVCoordinatesProvider *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldPVCoordinatesProvider_getPVCoordinates0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
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

      static void JNICALL t_PythonFieldPVCoordinatesProvider_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldPVCoordinatesProvider::mids$[PythonFieldPVCoordinatesProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldPVCoordinatesProvider_get__self(t_PythonFieldPVCoordinatesProvider *self, void *data)
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
      static PyObject *t_PythonFieldPVCoordinatesProvider_get__parameters_(t_PythonFieldPVCoordinatesProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Constant.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Constant::class$ = NULL;
        jmethodID *Constant::mids$ = NULL;
        bool Constant::live$ = false;

        jclass Constant::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Constant");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Constant::Constant(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        jdouble Constant::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Constant::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Constant_value(t_Constant *self, PyObject *args);

        static PyMethodDef t_Constant__methods_[] = {
          DECLARE_METHOD(t_Constant, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Constant, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Constant)[] = {
          { Py_tp_methods, t_Constant__methods_ },
          { Py_tp_init, (void *) t_Constant_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Constant)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Constant, t_Constant, Constant);

        void t_Constant::install(PyObject *module)
        {
          installType(&PY_TYPE(Constant), &PY_TYPE_DEF(Constant), module, "Constant", 0);
        }

        void t_Constant::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "class_", make_descriptor(Constant::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "wrapfn_", make_descriptor(t_Constant::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Constant), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Constant_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Constant::initializeClass, 1)))
            return NULL;
          return t_Constant::wrap_Object(Constant(((t_Constant *) arg)->object.this$));
        }
        static PyObject *t_Constant_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Constant::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Constant_init_(t_Constant *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Constant object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Constant(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Constant_value(t_Constant *self, PyObject *args)
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
#include "org/orekit/rugged/los/FixedRotation.h"
#include "java/util/stream/Stream.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/rugged/utils/DerivativeGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *FixedRotation::class$ = NULL;
        jmethodID *FixedRotation::mids$ = NULL;
        bool FixedRotation::live$ = false;

        jclass FixedRotation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/FixedRotation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0d37035a6f00662a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_getParametersDrivers_20f6d2b462aaef4b] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/stream/Stream;");
            mids$[mid_transformLOS_c5b4a35f45a6f61e] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_transformLOS_43c702ec4c12ce7d] = env->getMethodID(cls, "transformLOS", "(ILorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/rugged/utils/DerivativeGenerator;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FixedRotation::FixedRotation(const ::java::lang::String & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d37035a6f00662a, a0.this$, a1.this$, a2)) {}

        ::java::util::stream::Stream FixedRotation::getParametersDrivers() const
        {
          return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_20f6d2b462aaef4b]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_c5b4a35f45a6f61e], a0, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FixedRotation::transformLOS(jint a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::rugged::utils::DerivativeGenerator & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformLOS_43c702ec4c12ce7d], a0, a1.this$, a2.this$));
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
      namespace los {
        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self);
        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args);
        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data);
        static PyGetSetDef t_FixedRotation__fields_[] = {
          DECLARE_GET_FIELD(t_FixedRotation, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FixedRotation__methods_[] = {
          DECLARE_METHOD(t_FixedRotation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FixedRotation, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_FixedRotation, transformLOS, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FixedRotation)[] = {
          { Py_tp_methods, t_FixedRotation__methods_ },
          { Py_tp_init, (void *) t_FixedRotation_init_ },
          { Py_tp_getset, t_FixedRotation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FixedRotation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FixedRotation, t_FixedRotation, FixedRotation);

        void t_FixedRotation::install(PyObject *module)
        {
          installType(&PY_TYPE(FixedRotation), &PY_TYPE_DEF(FixedRotation), module, "FixedRotation", 0);
        }

        void t_FixedRotation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "class_", make_descriptor(FixedRotation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "wrapfn_", make_descriptor(t_FixedRotation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FixedRotation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FixedRotation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FixedRotation::initializeClass, 1)))
            return NULL;
          return t_FixedRotation::wrap_Object(FixedRotation(((t_FixedRotation *) arg)->object.this$));
        }
        static PyObject *t_FixedRotation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FixedRotation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FixedRotation_init_(t_FixedRotation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          FixedRotation object((jobject) NULL);

          if (!parseArgs(args, "skD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = FixedRotation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FixedRotation_getParametersDrivers(t_FixedRotation *self)
        {
          ::java::util::stream::Stream result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_FixedRotation_transformLOS(t_FixedRotation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "Ik", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              jint a0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::rugged::utils::DerivativeGenerator a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "IKK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::orekit::rugged::utils::DerivativeGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::orekit::rugged::utils::t_DerivativeGenerator::parameters_))
              {
                OBJ_CALL(result = self->object.transformLOS(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "transformLOS", args);
          return NULL;
        }

        static PyObject *t_FixedRotation_get__parametersDrivers(t_FixedRotation *self, void *data)
        {
          ::java::util::stream::Stream value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::stream::t_Stream::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/tdm/TimetagReference.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TimetagReference::class$ = NULL;
            jmethodID *TimetagReference::mids$ = NULL;
            bool TimetagReference::live$ = false;
            TimetagReference *TimetagReference::RECEIVE = NULL;
            TimetagReference *TimetagReference::TRANSMIT = NULL;

            jclass TimetagReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TimetagReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_e28ae5778fa748ef] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");
                mids$[mid_values_a0bbc5af0038b925] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                RECEIVE = new TimetagReference(env->getStaticObjectField(cls, "RECEIVE", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                TRANSMIT = new TimetagReference(env->getStaticObjectField(cls, "TRANSMIT", "Lorg/orekit/files/ccsds/ndm/tdm/TimetagReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            TimetagReference TimetagReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TimetagReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e28ae5778fa748ef], a0.this$));
            }

            JArray< TimetagReference > TimetagReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TimetagReference >(env->callStaticObjectMethod(cls, mids$[mid_values_a0bbc5af0038b925]));
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
            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args);
            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TimetagReference_values(PyTypeObject *type);
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data);
            static PyGetSetDef t_TimetagReference__fields_[] = {
              DECLARE_GET_FIELD(t_TimetagReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TimetagReference__methods_[] = {
              DECLARE_METHOD(t_TimetagReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_TimetagReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TimetagReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TimetagReference)[] = {
              { Py_tp_methods, t_TimetagReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TimetagReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TimetagReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TimetagReference, t_TimetagReference, TimetagReference);
            PyObject *t_TimetagReference::wrap_Object(const TimetagReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TimetagReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TimetagReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TimetagReference *self = (t_TimetagReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TimetagReference::install(PyObject *module)
            {
              installType(&PY_TYPE(TimetagReference), &PY_TYPE_DEF(TimetagReference), module, "TimetagReference", 0);
            }

            void t_TimetagReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "class_", make_descriptor(TimetagReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "wrapfn_", make_descriptor(t_TimetagReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(TimetagReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "RECEIVE", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::RECEIVE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TimetagReference), "TRANSMIT", make_descriptor(t_TimetagReference::wrap_Object(*TimetagReference::TRANSMIT)));
            }

            static PyObject *t_TimetagReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TimetagReference::initializeClass, 1)))
                return NULL;
              return t_TimetagReference::wrap_Object(TimetagReference(((t_TimetagReference *) arg)->object.this$));
            }
            static PyObject *t_TimetagReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TimetagReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TimetagReference_of_(t_TimetagReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TimetagReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TimetagReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::valueOf(a0));
                return t_TimetagReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TimetagReference_values(PyTypeObject *type)
            {
              JArray< TimetagReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TimetagReference::values());
              return JArray<jobject>(result.this$).wrap(t_TimetagReference::wrap_jobject);
            }
            static PyObject *t_TimetagReference_get__parameters_(t_TimetagReference *self, void *data)
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
#include "org/orekit/attitudes/PythonAttitudeProviderModifier.h"
#include "java/lang/Throwable.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProviderModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *PythonAttitudeProviderModifier::class$ = NULL;
      jmethodID *PythonAttitudeProviderModifier::mids$ = NULL;
      bool PythonAttitudeProviderModifier::live$ = false;

      jclass PythonAttitudeProviderModifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/PythonAttitudeProviderModifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getUnderlyingAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAttitudeProviderModifier::PythonAttitudeProviderModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonAttitudeProviderModifier::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonAttitudeProviderModifier::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonAttitudeProviderModifier::pythonExtension(jlong a0) const
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
    namespace attitudes {
      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self);
      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data);
      static PyGetSetDef t_PythonAttitudeProviderModifier__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAttitudeProviderModifier, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAttitudeProviderModifier__methods_[] = {
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAttitudeProviderModifier, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAttitudeProviderModifier)[] = {
        { Py_tp_methods, t_PythonAttitudeProviderModifier__methods_ },
        { Py_tp_init, (void *) t_PythonAttitudeProviderModifier_init_ },
        { Py_tp_getset, t_PythonAttitudeProviderModifier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAttitudeProviderModifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonAttitudeProviderModifier, t_PythonAttitudeProviderModifier, PythonAttitudeProviderModifier);

      void t_PythonAttitudeProviderModifier::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAttitudeProviderModifier), &PY_TYPE_DEF(PythonAttitudeProviderModifier), module, "PythonAttitudeProviderModifier", 1);
      }

      void t_PythonAttitudeProviderModifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "class_", make_descriptor(PythonAttitudeProviderModifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "wrapfn_", make_descriptor(t_PythonAttitudeProviderModifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAttitudeProviderModifier), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAttitudeProviderModifier::initializeClass);
        JNINativeMethod methods[] = {
          { "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude0 },
          { "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;", (void *) t_PythonAttitudeProviderModifier_getAttitude1 },
          { "getUnderlyingAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2 },
          { "pythonDecRef", "()V", (void *) t_PythonAttitudeProviderModifier_pythonDecRef3 },
        };
        env->registerNatives(cls, methods, 4);
      }

      static PyObject *t_PythonAttitudeProviderModifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 1)))
          return NULL;
        return t_PythonAttitudeProviderModifier::wrap_Object(PythonAttitudeProviderModifier(((t_PythonAttitudeProviderModifier *) arg)->object.this$));
      }
      static PyObject *t_PythonAttitudeProviderModifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAttitudeProviderModifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAttitudeProviderModifier_init_(t_PythonAttitudeProviderModifier *self, PyObject *args, PyObject *kwds)
      {
        PythonAttitudeProviderModifier object((jobject) NULL);

        INT_CALL(object = PythonAttitudeProviderModifier());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAttitudeProviderModifier_finalize(t_PythonAttitudeProviderModifier *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAttitudeProviderModifier_pythonExtension(t_PythonAttitudeProviderModifier *self, PyObject *args)
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(::org::orekit::utils::PVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::Attitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getAttitude1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(::org::orekit::utils::FieldPVCoordinatesProvider(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "getAttitude", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::FieldAttitude::initializeClass, &value))
        {
          throwTypeError("getAttitude", result);
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

      static jobject JNICALL t_PythonAttitudeProviderModifier_getUnderlyingAttitudeProvider2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUnderlyingAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getUnderlyingAttitudeProvider", result);
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

      static void JNICALL t_PythonAttitudeProviderModifier_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAttitudeProviderModifier::mids$[PythonAttitudeProviderModifier::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAttitudeProviderModifier_get__self(t_PythonAttitudeProviderModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/oem/OemWriter.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/Oem.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace oem {

              ::java::lang::Class *OemWriter::class$ = NULL;
              jmethodID *OemWriter::mids$ = NULL;
              bool OemWriter::live$ = false;
              jdouble OemWriter::CCSDS_OEM_VERS = (jdouble) 0;
              ::java::lang::String *OemWriter::DEFAULT_FILE_NAME = NULL;
              jint OemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass OemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/oem/OemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_6f30abb95e05bcdd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_23075babb40e611c] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/odm/oem/OemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_OEM_VERS = env->getStaticDoubleField(cls, "CCSDS_OEM_VERS");
                  DEFAULT_FILE_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_FILE_NAME", "Ljava/lang/String;"));
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemWriter::OemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_6f30abb95e05bcdd, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args);
              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data);
              static PyGetSetDef t_OemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_OemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OemWriter__methods_[] = {
                DECLARE_METHOD(t_OemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OemWriter)[] = {
                { Py_tp_methods, t_OemWriter__methods_ },
                { Py_tp_init, (void *) t_OemWriter_init_ },
                { Py_tp_getset, t_OemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(OemWriter, t_OemWriter, OemWriter);
              PyObject *t_OemWriter::wrap_Object(const OemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_OemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_OemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OemWriter *self = (t_OemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_OemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(OemWriter), &PY_TYPE_DEF(OemWriter), module, "OemWriter", 0);
              }

              void t_OemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "class_", make_descriptor(OemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "wrapfn_", make_descriptor(t_OemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(OemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "CCSDS_OEM_VERS", make_descriptor(OemWriter::CCSDS_OEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "DEFAULT_FILE_NAME", make_descriptor(j2p(*OemWriter::DEFAULT_FILE_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OemWriter), "KVN_PADDING_WIDTH", make_descriptor(OemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_OemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OemWriter::initializeClass, 1)))
                  return NULL;
                return t_OemWriter::wrap_Object(OemWriter(((t_OemWriter *) arg)->object.this$));
              }
              static PyObject *t_OemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OemWriter_of_(t_OemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_OemWriter_init_(t_OemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                OemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = OemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::odm::PY_TYPE(OdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(OemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::odm::oem::PY_TYPE(Oem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_OemWriter_get__parameters_(t_OemWriter *self, void *data)
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
#include "org/orekit/bodies/PythonBodyShape.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *PythonBodyShape::class$ = NULL;
      jmethodID *PythonBodyShape::mids$ = NULL;
      bool PythonBodyShape::live$ = false;

      jclass PythonBodyShape::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/PythonBodyShape");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBodyFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getBodyFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getIntersectionPoint_e81d59d1bc381e5e] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_getIntersectionPoint_ec4b828b0bd3964b] = env->getMethodID(cls, "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_projectToGround_7ddc39790e3dd04b] = env->getMethodID(cls, "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_projectToGround_73ba258c5f91e9db] = env->getMethodID(cls, "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_transform_5f1451dffd8cde56] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transform_6cf64433187e46c3] = env->getMethodID(cls, "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_transform_e019f2426bfb11d5] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;");
          mids$[mid_transform_dd18b1b42137f809] = env->getMethodID(cls, "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBodyShape::PythonBodyShape() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonBodyShape::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonBodyShape::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonBodyShape::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self);
      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args);
      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data);
      static PyGetSetDef t_PythonBodyShape__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBodyShape, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBodyShape__methods_[] = {
        DECLARE_METHOD(t_PythonBodyShape, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBodyShape, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBodyShape, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBodyShape)[] = {
        { Py_tp_methods, t_PythonBodyShape__methods_ },
        { Py_tp_init, (void *) t_PythonBodyShape_init_ },
        { Py_tp_getset, t_PythonBodyShape__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBodyShape)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBodyShape, t_PythonBodyShape, PythonBodyShape);

      void t_PythonBodyShape::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBodyShape), &PY_TYPE_DEF(PythonBodyShape), module, "PythonBodyShape", 1);
      }

      void t_PythonBodyShape::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "class_", make_descriptor(PythonBodyShape::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "wrapfn_", make_descriptor(t_PythonBodyShape::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBodyShape), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBodyShape::initializeClass);
        JNINativeMethod methods[] = {
          { "getBodyFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBodyShape_getBodyFrame0 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint1 },
          { "getIntersectionPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_getIntersectionPoint2 },
          { "projectToGround", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBodyShape_projectToGround3 },
          { "projectToGround", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_projectToGround4 },
          { "pythonDecRef", "()V", (void *) t_PythonBodyShape_pythonDecRef5 },
          { "transform", "(Lorg/orekit/bodies/FieldGeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonBodyShape_transform6 },
          { "transform", "(Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonBodyShape_transform7 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/bodies/GeodeticPoint;", (void *) t_PythonBodyShape_transform8 },
          { "transform", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/orekit/bodies/FieldGeodeticPoint;", (void *) t_PythonBodyShape_transform9 },
        };
        env->registerNatives(cls, methods, 10);
      }

      static PyObject *t_PythonBodyShape_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBodyShape::initializeClass, 1)))
          return NULL;
        return t_PythonBodyShape::wrap_Object(PythonBodyShape(((t_PythonBodyShape *) arg)->object.this$));
      }
      static PyObject *t_PythonBodyShape_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBodyShape::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBodyShape_init_(t_PythonBodyShape *self, PyObject *args, PyObject *kwds)
      {
        PythonBodyShape object((jobject) NULL);

        INT_CALL(object = PythonBodyShape());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBodyShape_finalize(t_PythonBodyShape *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBodyShape_pythonExtension(t_PythonBodyShape *self, PyObject *args)
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

      static jobject JNICALL t_PythonBodyShape_getBodyFrame0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBodyFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getBodyFrame", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Line(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_getIntersectionPoint2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldLine(a0));
        PyObject *o1 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *o3 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a3));
        PyObject *result = PyObject_CallMethod(obj, "getIntersectionPoint", "OOOO", o0, o1, o2, o3);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        Py_DECREF(o3);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("getIntersectionPoint", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(::org::orekit::utils::TimeStampedPVCoordinates(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static jobject JNICALL t_PythonBodyShape_projectToGround4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *o2 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a2));
        PyObject *result = PyObject_CallMethod(obj, "projectToGround", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("projectToGround", result);
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

      static void JNICALL t_PythonBodyShape_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonBodyShape_transform6(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_FieldGeodeticPoint::wrap_Object(::org::orekit::bodies::FieldGeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(::org::orekit::bodies::GeodeticPoint(a0));
        PyObject *result = PyObject_CallMethod(obj, "transform", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform8(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static jobject JNICALL t_PythonBodyShape_transform9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBodyShape::mids$[PythonBodyShape::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::bodies::FieldGeodeticPoint value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::FieldVector3D(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *o2 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a2));
        PyObject *result = PyObject_CallMethod(obj, "transform", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::bodies::FieldGeodeticPoint::initializeClass, &value))
        {
          throwTypeError("transform", result);
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

      static PyObject *t_PythonBodyShape_get__self(t_PythonBodyShape *self, void *data)
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
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *MessageObserver::class$ = NULL;
          jmethodID *MessageObserver::mids$ = NULL;
          bool MessageObserver::live$ = false;

          jclass MessageObserver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/MessageObserver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_messageAvailable_4d53d7b30f77764b] = env->getMethodID(cls, "messageAvailable", "(Ljava/lang/String;Lorg/orekit/gnss/metric/messages/ParsedMessage;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void MessageObserver::messageAvailable(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::messages::ParsedMessage & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_messageAvailable_4d53d7b30f77764b], a0.this$, a1.this$);
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
        namespace ntrip {
          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args);

          static PyMethodDef t_MessageObserver__methods_[] = {
            DECLARE_METHOD(t_MessageObserver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageObserver, messageAvailable, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageObserver)[] = {
            { Py_tp_methods, t_MessageObserver__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageObserver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageObserver, t_MessageObserver, MessageObserver);

          void t_MessageObserver::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageObserver), &PY_TYPE_DEF(MessageObserver), module, "MessageObserver", 0);
          }

          void t_MessageObserver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "class_", make_descriptor(MessageObserver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "wrapfn_", make_descriptor(t_MessageObserver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageObserver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageObserver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageObserver::initializeClass, 1)))
              return NULL;
            return t_MessageObserver::wrap_Object(MessageObserver(((t_MessageObserver *) arg)->object.this$));
          }
          static PyObject *t_MessageObserver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageObserver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageObserver_messageAvailable(t_MessageObserver *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::messages::ParsedMessage a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::gnss::metric::messages::ParsedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.messageAvailable(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "messageAvailable", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/SortedMap.h"
#include "java/lang/Double.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *CoefficientsFactory::class$ = NULL;
            jmethodID *CoefficientsFactory::mids$ = NULL;
            bool CoefficientsFactory::live$ = false;

            jclass CoefficientsFactory::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory");

                mids$ = new jmethodID[max_mid];
                mids$[mid_computeGsHs_9729f35458e90405] = env->getStaticMethodID(cls, "computeGsHs", "(DDDDI)[[D");
                mids$[mid_computeGsHs_92ed6d97d3136441] = env->getStaticMethodID(cls, "computeGsHs", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeQns_164c4999f0e80777] = env->getStaticMethodID(cls, "computeQns", "(DII)[[D");
                mids$[mid_computeQns_571181d055513081] = env->getStaticMethodID(cls, "computeQns", "(Lorg/hipparchus/CalculusFieldElement;II)[[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_computeVns_58ab571ec7f76162] = env->getStaticMethodID(cls, "computeVns", "(I)Ljava/util/SortedMap;");
                mids$[mid_getVmns_3d407e6a8cf9e8ca] = env->getStaticMethodID(cls, "getVmns", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeGsHs(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jint a4)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_9729f35458e90405], a0, a1, a2, a3, a4));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeGsHs(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, jint a4, const ::org::hipparchus::Field & a5)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeGsHs_92ed6d97d3136441], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$));
            }

            JArray< JArray< jdouble > > CoefficientsFactory::computeQns(jdouble a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< jdouble > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_164c4999f0e80777], a0, a1, a2));
            }

            JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CoefficientsFactory::computeQns(const ::org::hipparchus::CalculusFieldElement & a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callStaticObjectMethod(cls, mids$[mid_computeQns_571181d055513081], a0.this$, a1, a2));
            }

            ::java::util::SortedMap CoefficientsFactory::computeVns(jint a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_computeVns_58ab571ec7f76162], a0));
            }

            jdouble CoefficientsFactory::getVmns(jint a0, jint a1, jint a2)
            {
              jclass cls = env->getClass(initializeClass);
              return env->callStaticDoubleMethod(cls, mids$[mid_getVmns_3d407e6a8cf9e8ca], a0, a1, a2);
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
            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args);
            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args);

            static PyMethodDef t_CoefficientsFactory__methods_[] = {
              DECLARE_METHOD(t_CoefficientsFactory, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeGsHs, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeQns, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, computeVns, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CoefficientsFactory, getVmns, METH_VARARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CoefficientsFactory)[] = {
              { Py_tp_methods, t_CoefficientsFactory__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CoefficientsFactory)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CoefficientsFactory, t_CoefficientsFactory, CoefficientsFactory);

            void t_CoefficientsFactory::install(PyObject *module)
            {
              installType(&PY_TYPE(CoefficientsFactory), &PY_TYPE_DEF(CoefficientsFactory), module, "CoefficientsFactory", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "NSKey", make_descriptor(&PY_TYPE_DEF(CoefficientsFactory$NSKey)));
            }

            void t_CoefficientsFactory::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "class_", make_descriptor(CoefficientsFactory::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "wrapfn_", make_descriptor(t_CoefficientsFactory::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CoefficientsFactory), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CoefficientsFactory_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CoefficientsFactory::initializeClass, 1)))
                return NULL;
              return t_CoefficientsFactory::wrap_Object(CoefficientsFactory(((t_CoefficientsFactory *) arg)->object.this$));
            }
            static PyObject *t_CoefficientsFactory_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CoefficientsFactory::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CoefficientsFactory_computeGsHs(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jint a4;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DDDDI", &a0, &a1, &a2, &a3, &a4))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                break;
               case 6:
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                  PyTypeObject **p3;
                  jint a4;
                  ::org::hipparchus::Field a5((jobject) NULL);
                  PyTypeObject **p5;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KKKKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeGsHs(a0, a1, a2, a3, a4, a5));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeGsHs", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeQns(PyTypeObject *type, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  jdouble a0;
                  jint a1;
                  jint a2;
                  JArray< JArray< jdouble > > result((jobject) NULL);

                  if (!parseArgs(args, "DII", &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
                {
                  ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                  PyTypeObject **p0;
                  jint a1;
                  jint a2;
                  JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

                  if (!parseArgs(args, "KII", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &a2))
                  {
                    OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeQns(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(NULL);
                  }
                }
              }

              PyErr_SetArgsError(type, "computeQns", args);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_computeVns(PyTypeObject *type, PyObject *arg)
            {
              jint a0;
              ::java::util::SortedMap result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::computeVns(a0));
                return ::java::util::t_SortedMap::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::utilities::PY_TYPE(CoefficientsFactory$NSKey), ::java::lang::PY_TYPE(Double));
              }

              PyErr_SetArgsError(type, "computeVns", arg);
              return NULL;
            }

            static PyObject *t_CoefficientsFactory_getVmns(PyTypeObject *type, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::semianalytical::dsst::utilities::CoefficientsFactory::getVmns(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError(type, "getVmns", args);
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
#include "java/util/Collections.h"
#include "java/util/Iterator.h"
#include "java/util/ListIterator.h"
#include "java/util/Set.h"
#include "java/util/SortedSet.h"
#include "java/util/NavigableSet.h"
#include "java/util/ArrayList.h"
#include "java/util/Map.h"
#include "java/util/NavigableMap.h"
#include "java/util/Enumeration.h"
#include "java/util/Deque.h"
#include "java/util/Queue.h"
#include "java/util/Comparator.h"
#include "java/util/Random.h"
#include "java/util/SortedMap.h"
#include "java/lang/Class.h"
#include "java/lang/Comparable.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/lang/Boolean.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Collections::class$ = NULL;
    jmethodID *Collections::mids$ = NULL;
    bool Collections::live$ = false;
    ::java::util::List *Collections::EMPTY_LIST = NULL;
    ::java::util::Map *Collections::EMPTY_MAP = NULL;
    ::java::util::Set *Collections::EMPTY_SET = NULL;

    jclass Collections::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Collections");

        mids$ = new jmethodID[max_mid];
        mids$[mid_addAll_22d601fe1483eb09] = env->getStaticMethodID(cls, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
        mids$[mid_asLifoQueue_6111f3cbeaaef8ef] = env->getStaticMethodID(cls, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
        mids$[mid_binarySearch_8c99c6992f085006] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
        mids$[mid_binarySearch_74f362af58d5c781] = env->getStaticMethodID(cls, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
        mids$[mid_checkedCollection_5c66179242450ef2] = env->getStaticMethodID(cls, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
        mids$[mid_checkedList_8891d31196c4e400] = env->getStaticMethodID(cls, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
        mids$[mid_checkedMap_86f4c9a30101680f] = env->getStaticMethodID(cls, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
        mids$[mid_checkedNavigableMap_0e7e371f7c620677] = env->getStaticMethodID(cls, "checkedNavigableMap", "(Ljava/util/NavigableMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/NavigableMap;");
        mids$[mid_checkedNavigableSet_007da9c15ce101f0] = env->getStaticMethodID(cls, "checkedNavigableSet", "(Ljava/util/NavigableSet;Ljava/lang/Class;)Ljava/util/NavigableSet;");
        mids$[mid_checkedQueue_c24def4bd68eaac8] = env->getStaticMethodID(cls, "checkedQueue", "(Ljava/util/Queue;Ljava/lang/Class;)Ljava/util/Queue;");
        mids$[mid_checkedSet_99752fad9765f965] = env->getStaticMethodID(cls, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
        mids$[mid_checkedSortedMap_7f682d869d181fe9] = env->getStaticMethodID(cls, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
        mids$[mid_checkedSortedSet_1f1d2c1e351438cf] = env->getStaticMethodID(cls, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
        mids$[mid_copy_6701c064a13f8d2f] = env->getStaticMethodID(cls, "copy", "(Ljava/util/List;Ljava/util/List;)V");
        mids$[mid_disjoint_5532fe2c8d564d7f] = env->getStaticMethodID(cls, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
        mids$[mid_emptyEnumeration_0dc02dfa0be4cd25] = env->getStaticMethodID(cls, "emptyEnumeration", "()Ljava/util/Enumeration;");
        mids$[mid_emptyIterator_4d23511a9f0db098] = env->getStaticMethodID(cls, "emptyIterator", "()Ljava/util/Iterator;");
        mids$[mid_emptyList_2afa36052df4765d] = env->getStaticMethodID(cls, "emptyList", "()Ljava/util/List;");
        mids$[mid_emptyListIterator_13ec0a4b5149ed65] = env->getStaticMethodID(cls, "emptyListIterator", "()Ljava/util/ListIterator;");
        mids$[mid_emptyMap_6f5a75ccd8c04465] = env->getStaticMethodID(cls, "emptyMap", "()Ljava/util/Map;");
        mids$[mid_emptyNavigableMap_d71603ad1730c5c7] = env->getStaticMethodID(cls, "emptyNavigableMap", "()Ljava/util/NavigableMap;");
        mids$[mid_emptyNavigableSet_024b2fed0d07125f] = env->getStaticMethodID(cls, "emptyNavigableSet", "()Ljava/util/NavigableSet;");
        mids$[mid_emptySet_015730311a5bacdc] = env->getStaticMethodID(cls, "emptySet", "()Ljava/util/Set;");
        mids$[mid_emptySortedMap_9ad1cc5ce8934f3d] = env->getStaticMethodID(cls, "emptySortedMap", "()Ljava/util/SortedMap;");
        mids$[mid_emptySortedSet_917725130bbb61f1] = env->getStaticMethodID(cls, "emptySortedSet", "()Ljava/util/SortedSet;");
        mids$[mid_enumeration_eff0e7cbe41787fe] = env->getStaticMethodID(cls, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
        mids$[mid_fill_679800f8cb9e472a] = env->getStaticMethodID(cls, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
        mids$[mid_frequency_311f4e2af63ee3c3] = env->getStaticMethodID(cls, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
        mids$[mid_indexOfSubList_41cab71153f4cf87] = env->getStaticMethodID(cls, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_lastIndexOfSubList_41cab71153f4cf87] = env->getStaticMethodID(cls, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
        mids$[mid_list_2e43058ab6203036] = env->getStaticMethodID(cls, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
        mids$[mid_max_1697389b58adf6f8] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_max_5d3363fd500698f8] = env->getStaticMethodID(cls, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_min_1697389b58adf6f8] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;)Ljava/lang/Object;");
        mids$[mid_min_5d3363fd500698f8] = env->getStaticMethodID(cls, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
        mids$[mid_nCopies_d5717e9471bc1109] = env->getStaticMethodID(cls, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
        mids$[mid_newSetFromMap_54b88ae22a7a375f] = env->getStaticMethodID(cls, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
        mids$[mid_replaceAll_665b2a7de210113d] = env->getStaticMethodID(cls, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
        mids$[mid_reverse_de3e021e7266b71e] = env->getStaticMethodID(cls, "reverse", "(Ljava/util/List;)V");
        mids$[mid_reverseOrder_96e45e3694fbbb22] = env->getStaticMethodID(cls, "reverseOrder", "()Ljava/util/Comparator;");
        mids$[mid_reverseOrder_7a4cd21393022d6a] = env->getStaticMethodID(cls, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
        mids$[mid_rotate_03acd6a351f054ce] = env->getStaticMethodID(cls, "rotate", "(Ljava/util/List;I)V");
        mids$[mid_shuffle_de3e021e7266b71e] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;)V");
        mids$[mid_shuffle_ba3d89bfee65adec] = env->getStaticMethodID(cls, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
        mids$[mid_singleton_9fef958b6aa7109a] = env->getStaticMethodID(cls, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_singletonList_5d13575984be857e] = env->getStaticMethodID(cls, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
        mids$[mid_singletonMap_0230da4ce7f50443] = env->getStaticMethodID(cls, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
        mids$[mid_sort_de3e021e7266b71e] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;)V");
        mids$[mid_sort_dc23f93ada84ec2c] = env->getStaticMethodID(cls, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
        mids$[mid_swap_6b38ae948ce5640f] = env->getStaticMethodID(cls, "swap", "(Ljava/util/List;II)V");
        mids$[mid_synchronizedCollection_e6702ab1f73fd997] = env->getStaticMethodID(cls, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_synchronizedList_667c8a8776700e01] = env->getStaticMethodID(cls, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_synchronizedMap_6d7943ade285151c] = env->getStaticMethodID(cls, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_synchronizedNavigableMap_7f5a42f111e974f6] = env->getStaticMethodID(cls, "synchronizedNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_synchronizedNavigableSet_a117041fd682448e] = env->getStaticMethodID(cls, "synchronizedNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_synchronizedSet_30cac86f76fb9232] = env->getStaticMethodID(cls, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_synchronizedSortedMap_fd1e3b4024be7eb6] = env->getStaticMethodID(cls, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_synchronizedSortedSet_da1dadc8982e9e6f] = env->getStaticMethodID(cls, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
        mids$[mid_unmodifiableCollection_e6702ab1f73fd997] = env->getStaticMethodID(cls, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
        mids$[mid_unmodifiableList_667c8a8776700e01] = env->getStaticMethodID(cls, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
        mids$[mid_unmodifiableMap_6d7943ade285151c] = env->getStaticMethodID(cls, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
        mids$[mid_unmodifiableNavigableMap_7f5a42f111e974f6] = env->getStaticMethodID(cls, "unmodifiableNavigableMap", "(Ljava/util/NavigableMap;)Ljava/util/NavigableMap;");
        mids$[mid_unmodifiableNavigableSet_a117041fd682448e] = env->getStaticMethodID(cls, "unmodifiableNavigableSet", "(Ljava/util/NavigableSet;)Ljava/util/NavigableSet;");
        mids$[mid_unmodifiableSet_30cac86f76fb9232] = env->getStaticMethodID(cls, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
        mids$[mid_unmodifiableSortedMap_fd1e3b4024be7eb6] = env->getStaticMethodID(cls, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
        mids$[mid_unmodifiableSortedSet_da1dadc8982e9e6f] = env->getStaticMethodID(cls, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        EMPTY_LIST = new ::java::util::List(env->getStaticObjectField(cls, "EMPTY_LIST", "Ljava/util/List;"));
        EMPTY_MAP = new ::java::util::Map(env->getStaticObjectField(cls, "EMPTY_MAP", "Ljava/util/Map;"));
        EMPTY_SET = new ::java::util::Set(env->getStaticObjectField(cls, "EMPTY_SET", "Ljava/util/Set;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Collections::addAll(const ::java::util::Collection & a0, const JArray< ::java::lang::Object > & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_addAll_22d601fe1483eb09], a0.this$, a1.this$);
    }

    ::java::util::Queue Collections::asLifoQueue(const ::java::util::Deque & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_asLifoQueue_6111f3cbeaaef8ef], a0.this$));
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_8c99c6992f085006], a0.this$, a1.this$);
    }

    jint Collections::binarySearch(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::util::Comparator & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_binarySearch_74f362af58d5c781], a0.this$, a1.this$, a2.this$);
    }

    ::java::util::Collection Collections::checkedCollection(const ::java::util::Collection & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_checkedCollection_5c66179242450ef2], a0.this$, a1.this$));
    }

    ::java::util::List Collections::checkedList(const ::java::util::List & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_checkedList_8891d31196c4e400], a0.this$, a1.this$));
    }

    ::java::util::Map Collections::checkedMap(const ::java::util::Map & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_checkedMap_86f4c9a30101680f], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableMap Collections::checkedNavigableMap(const ::java::util::NavigableMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableMap_0e7e371f7c620677], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::NavigableSet Collections::checkedNavigableSet(const ::java::util::NavigableSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_checkedNavigableSet_007da9c15ce101f0], a0.this$, a1.this$));
    }

    ::java::util::Queue Collections::checkedQueue(const ::java::util::Queue & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Queue(env->callStaticObjectMethod(cls, mids$[mid_checkedQueue_c24def4bd68eaac8], a0.this$, a1.this$));
    }

    ::java::util::Set Collections::checkedSet(const ::java::util::Set & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_checkedSet_99752fad9765f965], a0.this$, a1.this$));
    }

    ::java::util::SortedMap Collections::checkedSortedMap(const ::java::util::SortedMap & a0, const ::java::lang::Class & a1, const ::java::lang::Class & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedMap_7f682d869d181fe9], a0.this$, a1.this$, a2.this$));
    }

    ::java::util::SortedSet Collections::checkedSortedSet(const ::java::util::SortedSet & a0, const ::java::lang::Class & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_checkedSortedSet_1f1d2c1e351438cf], a0.this$, a1.this$));
    }

    void Collections::copy(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_copy_6701c064a13f8d2f], a0.this$, a1.this$);
    }

    jboolean Collections::disjoint(const ::java::util::Collection & a0, const ::java::util::Collection & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_disjoint_5532fe2c8d564d7f], a0.this$, a1.this$);
    }

    ::java::util::Enumeration Collections::emptyEnumeration()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_emptyEnumeration_0dc02dfa0be4cd25]));
    }

    ::java::util::Iterator Collections::emptyIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Iterator(env->callStaticObjectMethod(cls, mids$[mid_emptyIterator_4d23511a9f0db098]));
    }

    ::java::util::List Collections::emptyList()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_emptyList_2afa36052df4765d]));
    }

    ::java::util::ListIterator Collections::emptyListIterator()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ListIterator(env->callStaticObjectMethod(cls, mids$[mid_emptyListIterator_13ec0a4b5149ed65]));
    }

    ::java::util::Map Collections::emptyMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_emptyMap_6f5a75ccd8c04465]));
    }

    ::java::util::NavigableMap Collections::emptyNavigableMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableMap_d71603ad1730c5c7]));
    }

    ::java::util::NavigableSet Collections::emptyNavigableSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_emptyNavigableSet_024b2fed0d07125f]));
    }

    ::java::util::Set Collections::emptySet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_emptySet_015730311a5bacdc]));
    }

    ::java::util::SortedMap Collections::emptySortedMap()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_emptySortedMap_9ad1cc5ce8934f3d]));
    }

    ::java::util::SortedSet Collections::emptySortedSet()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_emptySortedSet_917725130bbb61f1]));
    }

    ::java::util::Enumeration Collections::enumeration(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Enumeration(env->callStaticObjectMethod(cls, mids$[mid_enumeration_eff0e7cbe41787fe], a0.this$));
    }

    void Collections::fill(const ::java::util::List & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_fill_679800f8cb9e472a], a0.this$, a1.this$);
    }

    jint Collections::frequency(const ::java::util::Collection & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_frequency_311f4e2af63ee3c3], a0.this$, a1.this$);
    }

    jint Collections::indexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_indexOfSubList_41cab71153f4cf87], a0.this$, a1.this$);
    }

    jint Collections::lastIndexOfSubList(const ::java::util::List & a0, const ::java::util::List & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_lastIndexOfSubList_41cab71153f4cf87], a0.this$, a1.this$);
    }

    ::java::util::ArrayList Collections::list(const ::java::util::Enumeration & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::ArrayList(env->callStaticObjectMethod(cls, mids$[mid_list_2e43058ab6203036], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_1697389b58adf6f8], a0.this$));
    }

    ::java::lang::Object Collections::max$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_max_5d3363fd500698f8], a0.this$, a1.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_1697389b58adf6f8], a0.this$));
    }

    ::java::lang::Object Collections::min$(const ::java::util::Collection & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::Object(env->callStaticObjectMethod(cls, mids$[mid_min_5d3363fd500698f8], a0.this$, a1.this$));
    }

    ::java::util::List Collections::nCopies(jint a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_nCopies_d5717e9471bc1109], a0, a1.this$));
    }

    ::java::util::Set Collections::newSetFromMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_newSetFromMap_54b88ae22a7a375f], a0.this$));
    }

    jboolean Collections::replaceAll(const ::java::util::List & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_replaceAll_665b2a7de210113d], a0.this$, a1.this$, a2.this$);
    }

    void Collections::reverse(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_reverse_de3e021e7266b71e], a0.this$);
    }

    ::java::util::Comparator Collections::reverseOrder()
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_96e45e3694fbbb22]));
    }

    ::java::util::Comparator Collections::reverseOrder(const ::java::util::Comparator & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Comparator(env->callStaticObjectMethod(cls, mids$[mid_reverseOrder_7a4cd21393022d6a], a0.this$));
    }

    void Collections::rotate(const ::java::util::List & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_rotate_03acd6a351f054ce], a0.this$, a1);
    }

    void Collections::shuffle(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_de3e021e7266b71e], a0.this$);
    }

    void Collections::shuffle(const ::java::util::List & a0, const ::java::util::Random & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_shuffle_ba3d89bfee65adec], a0.this$, a1.this$);
    }

    ::java::util::Set Collections::singleton(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_singleton_9fef958b6aa7109a], a0.this$));
    }

    ::java::util::List Collections::singletonList(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_singletonList_5d13575984be857e], a0.this$));
    }

    ::java::util::Map Collections::singletonMap(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_singletonMap_0230da4ce7f50443], a0.this$, a1.this$));
    }

    void Collections::sort(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_de3e021e7266b71e], a0.this$);
    }

    void Collections::sort(const ::java::util::List & a0, const ::java::util::Comparator & a1)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_sort_dc23f93ada84ec2c], a0.this$, a1.this$);
    }

    void Collections::swap(const ::java::util::List & a0, jint a1, jint a2)
    {
      jclass cls = env->getClass(initializeClass);
      env->callStaticVoidMethod(cls, mids$[mid_swap_6b38ae948ce5640f], a0.this$, a1, a2);
    }

    ::java::util::Collection Collections::synchronizedCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_synchronizedCollection_e6702ab1f73fd997], a0.this$));
    }

    ::java::util::List Collections::synchronizedList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_synchronizedList_667c8a8776700e01], a0.this$));
    }

    ::java::util::Map Collections::synchronizedMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_synchronizedMap_6d7943ade285151c], a0.this$));
    }

    ::java::util::NavigableMap Collections::synchronizedNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableMap_7f5a42f111e974f6], a0.this$));
    }

    ::java::util::NavigableSet Collections::synchronizedNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedNavigableSet_a117041fd682448e], a0.this$));
    }

    ::java::util::Set Collections::synchronizedSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSet_30cac86f76fb9232], a0.this$));
    }

    ::java::util::SortedMap Collections::synchronizedSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedMap_fd1e3b4024be7eb6], a0.this$));
    }

    ::java::util::SortedSet Collections::synchronizedSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_synchronizedSortedSet_da1dadc8982e9e6f], a0.this$));
    }

    ::java::util::Collection Collections::unmodifiableCollection(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Collection(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableCollection_e6702ab1f73fd997], a0.this$));
    }

    ::java::util::List Collections::unmodifiableList(const ::java::util::List & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::List(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableList_667c8a8776700e01], a0.this$));
    }

    ::java::util::Map Collections::unmodifiableMap(const ::java::util::Map & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Map(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableMap_6d7943ade285151c], a0.this$));
    }

    ::java::util::NavigableMap Collections::unmodifiableNavigableMap(const ::java::util::NavigableMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableMap_7f5a42f111e974f6], a0.this$));
    }

    ::java::util::NavigableSet Collections::unmodifiableNavigableSet(const ::java::util::NavigableSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::NavigableSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableNavigableSet_a117041fd682448e], a0.this$));
    }

    ::java::util::Set Collections::unmodifiableSet(const ::java::util::Set & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::Set(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSet_30cac86f76fb9232], a0.this$));
    }

    ::java::util::SortedMap Collections::unmodifiableSortedMap(const ::java::util::SortedMap & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedMap(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedMap_fd1e3b4024be7eb6], a0.this$));
    }

    ::java::util::SortedSet Collections::unmodifiableSortedSet(const ::java::util::SortedSet & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::util::SortedSet(env->callStaticObjectMethod(cls, mids$[mid_unmodifiableSortedSet_da1dadc8982e9e6f], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type);
    static PyObject *t_Collections_emptyIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyList(PyTypeObject *type);
    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type);
    static PyObject *t_Collections_emptyMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type);
    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type);
    static PyObject *t_Collections_emptySet(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type);
    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type);
    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args);
    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg);

    static PyMethodDef t_Collections__methods_[] = {
      DECLARE_METHOD(t_Collections, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, addAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, asLifoQueue, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, binarySearch, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedCollection, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedNavigableSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedQueue, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, checkedSortedSet, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, copy, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, disjoint, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyEnumeration, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyList, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyListIterator, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptyNavigableSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedMap, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, emptySortedSet, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, enumeration, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, fill, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, frequency, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, indexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, lastIndexOfSubList, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, list, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, nCopies, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, newSetFromMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, replaceAll, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, reverseOrder, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, rotate, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, shuffle, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, singleton, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, singletonMap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, sort, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, swap, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, synchronizedSortedSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableCollection, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableList, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableNavigableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSet, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedMap, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Collections, unmodifiableSortedSet, METH_O | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Collections)[] = {
      { Py_tp_methods, t_Collections__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Collections)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Collections, t_Collections, Collections);

    void t_Collections::install(PyObject *module)
    {
      installType(&PY_TYPE(Collections), &PY_TYPE_DEF(Collections), module, "Collections", 0);
    }

    void t_Collections::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "class_", make_descriptor(Collections::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "wrapfn_", make_descriptor(t_Collections::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "boxfn_", make_descriptor(boxObject));
      env->getClass(Collections::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_LIST", make_descriptor(::java::util::t_List::wrap_Object(*Collections::EMPTY_LIST)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_MAP", make_descriptor(::java::util::t_Map::wrap_Object(*Collections::EMPTY_MAP)));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Collections), "EMPTY_SET", make_descriptor(::java::util::t_Set::wrap_Object(*Collections::EMPTY_SET)));
    }

    static PyObject *t_Collections_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Collections::initializeClass, 1)))
        return NULL;
      return t_Collections::wrap_Object(Collections(((t_Collections *) arg)->object.this$));
    }
    static PyObject *t_Collections_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Collections::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Collections_addAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      JArray< ::java::lang::Object > a1((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "K[o", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "addAll", args);
      return NULL;
    }

    static PyObject *t_Collections_asLifoQueue(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Deque a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Deque::initializeClass, &a0, &p0, ::java::util::t_Deque::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::asLifoQueue(a0));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "asLifoQueue", arg);
      return NULL;
    }

    static PyObject *t_Collections_binarySearch(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          jint result;

          if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object a1((jobject) NULL);
          ::java::util::Comparator a2((jobject) NULL);
          PyTypeObject **p2;
          jint result;

          if (!parseArgs(args, "KoK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &p2, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::binarySearch(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      PyErr_SetArgsError(type, "binarySearch", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedCollection(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedCollection(a0, a1));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedCollection", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedList(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedList", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::Map::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedMap(a0, a1, a2));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::NavigableMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableMap(a0, a1, a2));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedNavigableSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::NavigableSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedNavigableSet(a0, a1));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedNavigableSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedQueue(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Queue a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Queue result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Queue::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Queue::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedQueue(a0, a1));
        return ::java::util::t_Queue::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedQueue", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::Set result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::Set::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSet(a0, a1));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedMap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::lang::Class a2((jobject) NULL);
      PyTypeObject **p2;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArgs(args, "KKK", ::java::util::SortedMap::initializeClass, ::java::lang::Class::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_, &a2, &p2, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedMap(a0, a1, a2));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedMap", args);
      return NULL;
    }

    static PyObject *t_Collections_checkedSortedSet(PyTypeObject *type, PyObject *args)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Class a1((jobject) NULL);
      PyTypeObject **p1;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArgs(args, "KK", ::java::util::SortedSet::initializeClass, ::java::lang::Class::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_, &a1, &p1, ::java::lang::t_Class::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::checkedSortedSet(a0, a1));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "checkedSortedSet", args);
      return NULL;
    }

    static PyObject *t_Collections_copy(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::copy(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "copy", args);
      return NULL;
    }

    static PyObject *t_Collections_disjoint(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::disjoint(a0, a1));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "disjoint", args);
      return NULL;
    }

    static PyObject *t_Collections_emptyEnumeration(PyTypeObject *type)
    {
      ::java::util::Enumeration result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyEnumeration());
      return ::java::util::t_Enumeration::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyIterator(PyTypeObject *type)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyIterator());
      return ::java::util::t_Iterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyList(PyTypeObject *type)
    {
      ::java::util::List result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyList());
      return ::java::util::t_List::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyListIterator(PyTypeObject *type)
    {
      ::java::util::ListIterator result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyListIterator());
      return ::java::util::t_ListIterator::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyMap(PyTypeObject *type)
    {
      ::java::util::Map result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyMap());
      return ::java::util::t_Map::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableMap(PyTypeObject *type)
    {
      ::java::util::NavigableMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableMap());
      return ::java::util::t_NavigableMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptyNavigableSet(PyTypeObject *type)
    {
      ::java::util::NavigableSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptyNavigableSet());
      return ::java::util::t_NavigableSet::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySet(PyTypeObject *type)
    {
      ::java::util::Set result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySet());
      return ::java::util::t_Set::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedMap(PyTypeObject *type)
    {
      ::java::util::SortedMap result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedMap());
      return ::java::util::t_SortedMap::wrap_Object(result);
    }

    static PyObject *t_Collections_emptySortedSet(PyTypeObject *type)
    {
      ::java::util::SortedSet result((jobject) NULL);
      OBJ_CALL(result = ::java::util::Collections::emptySortedSet());
      return ::java::util::t_SortedSet::wrap_Object(result);
    }

    static PyObject *t_Collections_enumeration(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Enumeration result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::enumeration(a0));
        return ::java::util::t_Enumeration::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "enumeration", arg);
      return NULL;
    }

    static PyObject *t_Collections_fill(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);

      if (!parseArgs(args, "Ko", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::fill(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "fill", args);
      return NULL;
    }

    static PyObject *t_Collections_frequency(PyTypeObject *type, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      jint result;

      if (!parseArgs(args, "Ko", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::frequency(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "frequency", args);
      return NULL;
    }

    static PyObject *t_Collections_indexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::indexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "indexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_lastIndexOfSubList(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List a1((jobject) NULL);
      PyTypeObject **p1;
      jint result;

      if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::lastIndexOfSubList(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "lastIndexOfSubList", args);
      return NULL;
    }

    static PyObject *t_Collections_list(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Enumeration a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::ArrayList result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Enumeration::initializeClass, &a0, &p0, ::java::util::t_Enumeration::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::list(a0));
        return ::java::util::t_ArrayList::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "list", arg);
      return NULL;
    }

    static PyObject *t_Collections_max(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::max$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Collections_min(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;
          ::java::lang::Object result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::Collection::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::min$(a0, a1));
            return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Collections_nCopies(PyTypeObject *type, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "Io", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::nCopies(a0, a1));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "nCopies", args);
      return NULL;
    }

    static PyObject *t_Collections_newSetFromMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::newSetFromMap(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "newSetFromMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_replaceAll(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object a2((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "Koo", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(result = ::java::util::Collections::replaceAll(a0, a1, a2));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "replaceAll", args);
      return NULL;
    }

    static PyObject *t_Collections_reverse(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(::java::util::Collections::reverse(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Collections_reverseOrder(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::Comparator result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Collections::reverseOrder());
          return ::java::util::t_Comparator::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Comparator a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator result((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(result = ::java::util::Collections::reverseOrder(a0));
            return ::java::util::t_Comparator::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "reverseOrder", args);
      return NULL;
    }

    static PyObject *t_Collections_rotate(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;

      if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
      {
        OBJ_CALL(::java::util::Collections::rotate(a0, a1));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "rotate", args);
      return NULL;
    }

    static PyObject *t_Collections_shuffle(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Random a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::java::util::Random::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
          {
            OBJ_CALL(::java::util::Collections::shuffle(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "shuffle", args);
      return NULL;
    }

    static PyObject *t_Collections_singleton(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singleton(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singleton", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonList(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonList", arg);
      return NULL;
    }

    static PyObject *t_Collections_singletonMap(PyTypeObject *type, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      ::java::lang::Object a1((jobject) NULL);
      ::java::util::Map result((jobject) NULL);

      if (!parseArgs(args, "oo", &a0, &a1))
      {
        OBJ_CALL(result = ::java::util::Collections::singletonMap(a0, a1));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "singletonMap", args);
      return NULL;
    }

    static PyObject *t_Collections_sort(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 2:
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::util::Comparator a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::Comparator::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_Comparator::parameters_))
          {
            OBJ_CALL(::java::util::Collections::sort(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError(type, "sort", args);
      return NULL;
    }

    static PyObject *t_Collections_swap(PyTypeObject *type, PyObject *args)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      jint a1;
      jint a2;

      if (!parseArgs(args, "KII", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
      {
        OBJ_CALL(::java::util::Collections::swap(a0, a1, a2));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError(type, "swap", args);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedList", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_synchronizedSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::synchronizedSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "synchronizedSortedSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableCollection(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Collection result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableCollection(a0));
        return ::java::util::t_Collection::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableCollection", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableList(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::List a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::List result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableList(a0));
        return ::java::util::t_List::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableList", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Map a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Map result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableMap(a0));
        return ::java::util::t_Map::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableMap::initializeClass, &a0, &p0, ::java::util::t_NavigableMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableMap(a0));
        return ::java::util::t_NavigableMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableNavigableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::NavigableSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::NavigableSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::NavigableSet::initializeClass, &a0, &p0, ::java::util::t_NavigableSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableNavigableSet(a0));
        return ::java::util::t_NavigableSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableNavigableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Set a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Set::initializeClass, &a0, &p0, ::java::util::t_Set::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSet(a0));
        return ::java::util::t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSet", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedMap(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedMap a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedMap result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedMap::initializeClass, &a0, &p0, ::java::util::t_SortedMap::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedMap(a0));
        return ::java::util::t_SortedMap::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedMap", arg);
      return NULL;
    }

    static PyObject *t_Collections_unmodifiableSortedSet(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::SortedSet a0((jobject) NULL);
      PyTypeObject **p0;
      ::java::util::SortedSet result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::SortedSet::initializeClass, &a0, &p0, ::java::util::t_SortedSet::parameters_))
      {
        OBJ_CALL(result = ::java::util::Collections::unmodifiableSortedSet(a0));
        return ::java::util::t_SortedSet::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "unmodifiableSortedSet", arg);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {

          ::java::lang::Class *LeastSquaresConverter::class$ = NULL;
          jmethodID *LeastSquaresConverter::mids$ = NULL;
          bool LeastSquaresConverter::live$ = false;

          jclass LeastSquaresConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/LeastSquaresConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_39d2406262aa1a74] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D)V");
              mids$[mid_init$_b3c40b66fb017889] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[D[D)V");
              mids$[mid_init$_5426cbd7f34887d0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;[DLorg/hipparchus/linear/RealMatrix;)V");
              mids$[mid_value_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "value", "([D)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_39d2406262aa1a74, a0.this$, a1.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3c40b66fb017889, a0.this$, a1.this$, a2.this$)) {}

          LeastSquaresConverter::LeastSquaresConverter(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5426cbd7f34887d0, a0.this$, a1.this$, a2.this$)) {}

          jdouble LeastSquaresConverter::value(const JArray< jdouble > & a0) const
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
          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg);

          static PyMethodDef t_LeastSquaresConverter__methods_[] = {
            DECLARE_METHOD(t_LeastSquaresConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LeastSquaresConverter, value, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LeastSquaresConverter)[] = {
            { Py_tp_methods, t_LeastSquaresConverter__methods_ },
            { Py_tp_init, (void *) t_LeastSquaresConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LeastSquaresConverter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LeastSquaresConverter, t_LeastSquaresConverter, LeastSquaresConverter);

          void t_LeastSquaresConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(LeastSquaresConverter), &PY_TYPE_DEF(LeastSquaresConverter), module, "LeastSquaresConverter", 0);
          }

          void t_LeastSquaresConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "class_", make_descriptor(LeastSquaresConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "wrapfn_", make_descriptor(t_LeastSquaresConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LeastSquaresConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LeastSquaresConverter::initializeClass, 1)))
              return NULL;
            return t_LeastSquaresConverter::wrap_Object(LeastSquaresConverter(((t_LeastSquaresConverter *) arg)->object.this$));
          }
          static PyObject *t_LeastSquaresConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LeastSquaresConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LeastSquaresConverter_init_(t_LeastSquaresConverter *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[D[D", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
                LeastSquaresConverter object((jobject) NULL);

                if (!parseArgs(args, "k[Dk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = LeastSquaresConverter(a0, a1, a2));
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

          static PyObject *t_LeastSquaresConverter_value(t_LeastSquaresConverter *self, PyObject *arg)
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
#include "org/orekit/utils/ParameterDriversList.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/String.h"
#include "org/orekit/utils/ParameterDriversList$DelegatingDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriversList::class$ = NULL;
      jmethodID *ParameterDriversList::mids$ = NULL;
      bool ParameterDriversList::live$ = false;

      jclass ParameterDriversList::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriversList");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_add_01a5c4b8230d6f04] = env->getMethodID(cls, "add", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_filter_bd04c9335fb9e4cf] = env->getMethodID(cls, "filter", "(Z)V");
          mids$[mid_findByName_01949d6c54d4d229] = env->getMethodID(cls, "findByName", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriversList$DelegatingDriver;");
          mids$[mid_findDelegatingSpanNameBySpanName_92807efd57acb082] = env->getMethodID(cls, "findDelegatingSpanNameBySpanName", "(Ljava/lang/String;)Ljava/lang/String;");
          mids$[mid_getDrivers_2afa36052df4765d] = env->getMethodID(cls, "getDrivers", "()Ljava/util/List;");
          mids$[mid_getNbParams_570ce0828f81a2c1] = env->getMethodID(cls, "getNbParams", "()I");
          mids$[mid_getNbValuesToEstimate_570ce0828f81a2c1] = env->getMethodID(cls, "getNbValuesToEstimate", "()I");
          mids$[mid_sort_0fa09c18fee449d5] = env->getMethodID(cls, "sort", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriversList::ParameterDriversList() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void ParameterDriversList::add(const ::org::orekit::utils::ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_add_01a5c4b8230d6f04], a0.this$);
      }

      void ParameterDriversList::filter(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_filter_bd04c9335fb9e4cf], a0);
      }

      ::org::orekit::utils::ParameterDriversList$DelegatingDriver ParameterDriversList::findByName(const ::java::lang::String & a0) const
      {
        return ::org::orekit::utils::ParameterDriversList$DelegatingDriver(env->callObjectMethod(this$, mids$[mid_findByName_01949d6c54d4d229], a0.this$));
      }

      ::java::lang::String ParameterDriversList::findDelegatingSpanNameBySpanName(const ::java::lang::String & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_findDelegatingSpanNameBySpanName_92807efd57acb082], a0.this$));
      }

      ::java::util::List ParameterDriversList::getDrivers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDrivers_2afa36052df4765d]));
      }

      jint ParameterDriversList::getNbParams() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbParams_570ce0828f81a2c1]);
      }

      jint ParameterDriversList::getNbValuesToEstimate() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbValuesToEstimate_570ce0828f81a2c1]);
      }

      void ParameterDriversList::sort() const
      {
        env->callVoidMethod(this$, mids$[mid_sort_0fa09c18fee449d5]);
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
      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg);
      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self);
      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data);
      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data);
      static PyGetSetDef t_ParameterDriversList__fields_[] = {
        DECLARE_GET_FIELD(t_ParameterDriversList, drivers),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbParams),
        DECLARE_GET_FIELD(t_ParameterDriversList, nbValuesToEstimate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriversList__methods_[] = {
        DECLARE_METHOD(t_ParameterDriversList, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriversList, add, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, filter, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findByName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, findDelegatingSpanNameBySpanName, METH_O),
        DECLARE_METHOD(t_ParameterDriversList, getDrivers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbParams, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, getNbValuesToEstimate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriversList, sort, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriversList)[] = {
        { Py_tp_methods, t_ParameterDriversList__methods_ },
        { Py_tp_init, (void *) t_ParameterDriversList_init_ },
        { Py_tp_getset, t_ParameterDriversList__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriversList)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriversList, t_ParameterDriversList, ParameterDriversList);

      void t_ParameterDriversList::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriversList), &PY_TYPE_DEF(ParameterDriversList), module, "ParameterDriversList", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "DelegatingDriver", make_descriptor(&PY_TYPE_DEF(ParameterDriversList$DelegatingDriver)));
      }

      void t_ParameterDriversList::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "class_", make_descriptor(ParameterDriversList::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "wrapfn_", make_descriptor(t_ParameterDriversList::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriversList), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriversList_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriversList::initializeClass, 1)))
          return NULL;
        return t_ParameterDriversList::wrap_Object(ParameterDriversList(((t_ParameterDriversList *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriversList_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriversList::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriversList_init_(t_ParameterDriversList *self, PyObject *args, PyObject *kwds)
      {
        ParameterDriversList object((jobject) NULL);

        INT_CALL(object = ParameterDriversList());
        self->object = object;

        return 0;
      }

      static PyObject *t_ParameterDriversList_add(t_ParameterDriversList *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.add(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "add", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_filter(t_ParameterDriversList *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.filter(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findByName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::utils::ParameterDriversList$DelegatingDriver result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findByName(a0));
          return ::org::orekit::utils::t_ParameterDriversList$DelegatingDriver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findByName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_findDelegatingSpanNameBySpanName(t_ParameterDriversList *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.findDelegatingSpanNameBySpanName(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "findDelegatingSpanNameBySpanName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriversList_getDrivers(t_ParameterDriversList *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriversList$DelegatingDriver));
      }

      static PyObject *t_ParameterDriversList_getNbParams(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbParams());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_getNbValuesToEstimate(t_ParameterDriversList *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriversList_sort(t_ParameterDriversList *self)
      {
        OBJ_CALL(self->object.sort());
        Py_RETURN_NONE;
      }

      static PyObject *t_ParameterDriversList_get__drivers(t_ParameterDriversList *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getDrivers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriversList_get__nbParams(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbParams());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriversList_get__nbValuesToEstimate(t_ParameterDriversList *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbValuesToEstimate());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
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
              mids$[mid_init$_10e1fbe5774bfd91] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)V");
              mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
              mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
              mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
              mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SubOrientedPoint::SubOrientedPoint(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0, const ::org::hipparchus::geometry::partitioning::Region & a1) : ::org::hipparchus::geometry::partitioning::AbstractSubHyperplane(env->newObject(initializeClass, &mids$, mid_init$_10e1fbe5774bfd91, a0.this$, a1.this$)) {}

          jdouble SubOrientedPoint::getSize() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
          }

          jboolean SubOrientedPoint::isEmpty() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
          }

          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane SubOrientedPoint::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm04Header::SsrIgm04Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}
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
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {

        ::java::lang::Class *IntersectionAlgorithm::class$ = NULL;
        jmethodID *IntersectionAlgorithm::mids$ = NULL;
        bool IntersectionAlgorithm::live$ = false;

        jclass IntersectionAlgorithm::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/IntersectionAlgorithm");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getElevation_86ffecc08a63eff0] = env->getMethodID(cls, "getElevation", "(DD)D");
            mids$[mid_intersection_943aab8456e3784b] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_refineIntersection_860353a3ab3d03aa] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::api::AlgorithmId IntersectionAlgorithm::getAlgorithmId() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
        }

        jdouble IntersectionAlgorithm::getElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_86ffecc08a63eff0], a0, a1);
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_943aab8456e3784b], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint IntersectionAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_860353a3ab3d03aa], a0.this$, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self);
        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args);
        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data);
        static PyGetSetDef t_IntersectionAlgorithm__fields_[] = {
          DECLARE_GET_FIELD(t_IntersectionAlgorithm, algorithmId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IntersectionAlgorithm__methods_[] = {
          DECLARE_METHOD(t_IntersectionAlgorithm, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getAlgorithmId, METH_NOARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, getElevation, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, intersection, METH_VARARGS),
          DECLARE_METHOD(t_IntersectionAlgorithm, refineIntersection, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IntersectionAlgorithm)[] = {
          { Py_tp_methods, t_IntersectionAlgorithm__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_IntersectionAlgorithm__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IntersectionAlgorithm)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IntersectionAlgorithm, t_IntersectionAlgorithm, IntersectionAlgorithm);

        void t_IntersectionAlgorithm::install(PyObject *module)
        {
          installType(&PY_TYPE(IntersectionAlgorithm), &PY_TYPE_DEF(IntersectionAlgorithm), module, "IntersectionAlgorithm", 0);
        }

        void t_IntersectionAlgorithm::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "class_", make_descriptor(IntersectionAlgorithm::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "wrapfn_", make_descriptor(t_IntersectionAlgorithm::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IntersectionAlgorithm), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IntersectionAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IntersectionAlgorithm::initializeClass, 1)))
            return NULL;
          return t_IntersectionAlgorithm::wrap_Object(IntersectionAlgorithm(((t_IntersectionAlgorithm *) arg)->object.this$));
        }
        static PyObject *t_IntersectionAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IntersectionAlgorithm::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IntersectionAlgorithm_getAlgorithmId(t_IntersectionAlgorithm *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithmId());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_IntersectionAlgorithm_getElevation(t_IntersectionAlgorithm *self, PyObject *args)
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

        static PyObject *t_IntersectionAlgorithm_intersection(t_IntersectionAlgorithm *self, PyObject *args)
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

        static PyObject *t_IntersectionAlgorithm_refineIntersection(t_IntersectionAlgorithm *self, PyObject *args)
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

        static PyObject *t_IntersectionAlgorithm_get__algorithmId(t_IntersectionAlgorithm *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/definitions/OnOff.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OrbitManeuver::class$ = NULL;
              jmethodID *OrbitManeuver::mids$ = NULL;
              bool OrbitManeuver::live$ = false;

              jclass OrbitManeuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OrbitManeuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getAcceleration_d52645e0d4c07563] = env->getMethodID(cls, "getAcceleration", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getAccelerationDirectionSigma_dff5885c2c873297] = env->getMethodID(cls, "getAccelerationDirectionSigma", "()D");
                  mids$[mid_getAccelerationInterpolation_dbd08cb2db8aa7a2] = env->getMethodID(cls, "getAccelerationInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getAccelerationMagnitudeSigma_dff5885c2c873297] = env->getMethodID(cls, "getAccelerationMagnitudeSigma", "()D");
                  mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getDeltaMass_dff5885c2c873297] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDeployDirSigma_dff5885c2c873297] = env->getMethodID(cls, "getDeployDirSigma", "()D");
                  mids$[mid_getDeployDv_d52645e0d4c07563] = env->getMethodID(cls, "getDeployDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeployDvCda_dff5885c2c873297] = env->getMethodID(cls, "getDeployDvCda", "()D");
                  mids$[mid_getDeployDvRatio_dff5885c2c873297] = env->getMethodID(cls, "getDeployDvRatio", "()D");
                  mids$[mid_getDeployDvSigma_dff5885c2c873297] = env->getMethodID(cls, "getDeployDvSigma", "()D");
                  mids$[mid_getDeployId_11b109bd155ca898] = env->getMethodID(cls, "getDeployId", "()Ljava/lang/String;");
                  mids$[mid_getDeployMass_dff5885c2c873297] = env->getMethodID(cls, "getDeployMass", "()D");
                  mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getDv_d52645e0d4c07563] = env->getMethodID(cls, "getDv", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDvDirSigma_dff5885c2c873297] = env->getMethodID(cls, "getDvDirSigma", "()D");
                  mids$[mid_getDvMagSigma_dff5885c2c873297] = env->getMethodID(cls, "getDvMagSigma", "()D");
                  mids$[mid_getThrust_d52645e0d4c07563] = env->getMethodID(cls, "getThrust", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getThrustDirectionSigma_dff5885c2c873297] = env->getMethodID(cls, "getThrustDirectionSigma", "()D");
                  mids$[mid_getThrustEfficiency_dff5885c2c873297] = env->getMethodID(cls, "getThrustEfficiency", "()D");
                  mids$[mid_getThrustInterpolation_dbd08cb2db8aa7a2] = env->getMethodID(cls, "getThrustInterpolation", "()Lorg/orekit/files/ccsds/definitions/OnOff;");
                  mids$[mid_getThrustIsp_dff5885c2c873297] = env->getMethodID(cls, "getThrustIsp", "()D");
                  mids$[mid_getThrustMagnitudeSigma_dff5885c2c873297] = env->getMethodID(cls, "getThrustMagnitudeSigma", "()D");
                  mids$[mid_setAcceleration_bb79ca80d85d0a66] = env->getMethodID(cls, "setAcceleration", "(ID)V");
                  mids$[mid_setAccelerationDirectionSigma_17db3a65980d3441] = env->getMethodID(cls, "setAccelerationDirectionSigma", "(D)V");
                  mids$[mid_setAccelerationInterpolation_2cbb135764dcc859] = env->getMethodID(cls, "setAccelerationInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setAccelerationMagnitudeSigma_17db3a65980d3441] = env->getMethodID(cls, "setAccelerationMagnitudeSigma", "(D)V");
                  mids$[mid_setDate_600a2a61652bc473] = env->getMethodID(cls, "setDate", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setDeltaMass_17db3a65980d3441] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDeployDirSigma_17db3a65980d3441] = env->getMethodID(cls, "setDeployDirSigma", "(D)V");
                  mids$[mid_setDeployDv_bb79ca80d85d0a66] = env->getMethodID(cls, "setDeployDv", "(ID)V");
                  mids$[mid_setDeployDvCda_17db3a65980d3441] = env->getMethodID(cls, "setDeployDvCda", "(D)V");
                  mids$[mid_setDeployDvRatio_17db3a65980d3441] = env->getMethodID(cls, "setDeployDvRatio", "(D)V");
                  mids$[mid_setDeployDvSigma_17db3a65980d3441] = env->getMethodID(cls, "setDeployDvSigma", "(D)V");
                  mids$[mid_setDeployId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setDeployId", "(Ljava/lang/String;)V");
                  mids$[mid_setDeployMass_17db3a65980d3441] = env->getMethodID(cls, "setDeployMass", "(D)V");
                  mids$[mid_setDuration_17db3a65980d3441] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setDv_bb79ca80d85d0a66] = env->getMethodID(cls, "setDv", "(ID)V");
                  mids$[mid_setDvDirSigma_17db3a65980d3441] = env->getMethodID(cls, "setDvDirSigma", "(D)V");
                  mids$[mid_setDvMagSigma_17db3a65980d3441] = env->getMethodID(cls, "setDvMagSigma", "(D)V");
                  mids$[mid_setThrust_bb79ca80d85d0a66] = env->getMethodID(cls, "setThrust", "(ID)V");
                  mids$[mid_setThrustDirectionSigma_17db3a65980d3441] = env->getMethodID(cls, "setThrustDirectionSigma", "(D)V");
                  mids$[mid_setThrustEfficiency_17db3a65980d3441] = env->getMethodID(cls, "setThrustEfficiency", "(D)V");
                  mids$[mid_setThrustInterpolation_2cbb135764dcc859] = env->getMethodID(cls, "setThrustInterpolation", "(Lorg/orekit/files/ccsds/definitions/OnOff;)V");
                  mids$[mid_setThrustIsp_17db3a65980d3441] = env->getMethodID(cls, "setThrustIsp", "(D)V");
                  mids$[mid_setThrustMagnitudeSigma_17db3a65980d3441] = env->getMethodID(cls, "setThrustMagnitudeSigma", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OrbitManeuver::OrbitManeuver() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getAcceleration() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_d52645e0d4c07563]));
              }

              jdouble OrbitManeuver::getAccelerationDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationDirectionSigma_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getAccelerationInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getAccelerationInterpolation_dbd08cb2db8aa7a2]));
              }

              jdouble OrbitManeuver::getAccelerationMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getAccelerationMagnitudeSigma_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate OrbitManeuver::getDate() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
              }

              jdouble OrbitManeuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getDeployDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDirSigma_dff5885c2c873297]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDeployDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDeployDv_d52645e0d4c07563]));
              }

              jdouble OrbitManeuver::getDeployDvCda() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvCda_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getDeployDvRatio() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvRatio_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getDeployDvSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployDvSigma_dff5885c2c873297]);
              }

              ::java::lang::String OrbitManeuver::getDeployId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDeployId_11b109bd155ca898]));
              }

              jdouble OrbitManeuver::getDeployMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeployMass_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getDv() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDv_d52645e0d4c07563]));
              }

              jdouble OrbitManeuver::getDvDirSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvDirSigma_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getDvMagSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDvMagSigma_dff5885c2c873297]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D OrbitManeuver::getThrust() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrust_d52645e0d4c07563]));
              }

              jdouble OrbitManeuver::getThrustDirectionSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustDirectionSigma_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getThrustEfficiency() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustEfficiency_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::definitions::OnOff OrbitManeuver::getThrustInterpolation() const
              {
                return ::org::orekit::files::ccsds::definitions::OnOff(env->callObjectMethod(this$, mids$[mid_getThrustInterpolation_dbd08cb2db8aa7a2]));
              }

              jdouble OrbitManeuver::getThrustIsp() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustIsp_dff5885c2c873297]);
              }

              jdouble OrbitManeuver::getThrustMagnitudeSigma() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getThrustMagnitudeSigma_dff5885c2c873297]);
              }

              void OrbitManeuver::setAcceleration(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setAcceleration_bb79ca80d85d0a66], a0, a1);
              }

              void OrbitManeuver::setAccelerationDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationDirectionSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setAccelerationInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationInterpolation_2cbb135764dcc859], a0.this$);
              }

              void OrbitManeuver::setAccelerationMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAccelerationMagnitudeSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDate(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDate_600a2a61652bc473], a0.this$);
              }

              void OrbitManeuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDeployDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDirSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDeployDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDv_bb79ca80d85d0a66], a0, a1);
              }

              void OrbitManeuver::setDeployDvCda(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvCda_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDeployDvRatio(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvRatio_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDeployDvSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployDvSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDeployId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployId_d0bc48d5b00dc40c], a0.this$);
              }

              void OrbitManeuver::setDeployMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeployMass_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDv(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDv_bb79ca80d85d0a66], a0, a1);
              }

              void OrbitManeuver::setDvDirSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvDirSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setDvMagSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDvMagSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setThrust(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrust_bb79ca80d85d0a66], a0, a1);
              }

              void OrbitManeuver::setThrustDirectionSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustDirectionSigma_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setThrustEfficiency(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustEfficiency_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setThrustInterpolation(const ::org::orekit::files::ccsds::definitions::OnOff & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustInterpolation_2cbb135764dcc859], a0.this$);
              }

              void OrbitManeuver::setThrustIsp(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustIsp_17db3a65980d3441], a0);
              }

              void OrbitManeuver::setThrustMagnitudeSigma(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setThrustMagnitudeSigma_17db3a65980d3441], a0);
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
              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self);
              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args);
              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg);
              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data);
              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data);
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_OrbitManeuver__fields_[] = {
                DECLARE_GET_FIELD(t_OrbitManeuver, acceleration),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, accelerationMagnitudeSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, date),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deltaMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDirSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, deployDv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvCda),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvRatio),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployDvSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployId),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, deployMass),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, duration),
                DECLARE_GET_FIELD(t_OrbitManeuver, dv),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvDirSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, dvMagSigma),
                DECLARE_GET_FIELD(t_OrbitManeuver, thrust),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustDirectionSigma),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustEfficiency),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustInterpolation),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustIsp),
                DECLARE_GETSET_FIELD(t_OrbitManeuver, thrustMagnitudeSigma),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OrbitManeuver__methods_[] = {
                DECLARE_METHOD(t_OrbitManeuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OrbitManeuver, getAcceleration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getAccelerationMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDate, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvCda, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvRatio, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployDvSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployId, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDeployMass, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDv, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvDirSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getDvMagSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrust, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustDirectionSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustEfficiency, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustInterpolation, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustIsp, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, getThrustMagnitudeSigma, METH_NOARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAcceleration, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setAccelerationMagnitudeSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDate, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvCda, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvRatio, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployDvSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployId, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDeployMass, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDuration, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDv, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setDvDirSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setDvMagSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrust, METH_VARARGS),
                DECLARE_METHOD(t_OrbitManeuver, setThrustDirectionSigma, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustEfficiency, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustInterpolation, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustIsp, METH_O),
                DECLARE_METHOD(t_OrbitManeuver, setThrustMagnitudeSigma, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OrbitManeuver)[] = {
                { Py_tp_methods, t_OrbitManeuver__methods_ },
                { Py_tp_init, (void *) t_OrbitManeuver_init_ },
                { Py_tp_getset, t_OrbitManeuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OrbitManeuver)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(OrbitManeuver, t_OrbitManeuver, OrbitManeuver);

              void t_OrbitManeuver::install(PyObject *module)
              {
                installType(&PY_TYPE(OrbitManeuver), &PY_TYPE_DEF(OrbitManeuver), module, "OrbitManeuver", 0);
              }

              void t_OrbitManeuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "class_", make_descriptor(OrbitManeuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "wrapfn_", make_descriptor(t_OrbitManeuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OrbitManeuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_OrbitManeuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OrbitManeuver::initializeClass, 1)))
                  return NULL;
                return t_OrbitManeuver::wrap_Object(OrbitManeuver(((t_OrbitManeuver *) arg)->object.this$));
              }
              static PyObject *t_OrbitManeuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OrbitManeuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OrbitManeuver_init_(t_OrbitManeuver *self, PyObject *args, PyObject *kwds)
              {
                OrbitManeuver object((jobject) NULL);

                INT_CALL(object = OrbitManeuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_OrbitManeuver_getAcceleration(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getAccelerationMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDate(t_OrbitManeuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeltaMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvCda(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvRatio(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployDvSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDeployId(t_OrbitManeuver *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getDeployId());
                return j2p(result);
              }

              static PyObject *t_OrbitManeuver_getDeployMass(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeployMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDuration(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDv(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getDvDirSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getDvMagSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrust(t_OrbitManeuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustDirectionSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustEfficiency(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustInterpolation(t_OrbitManeuver *self)
              {
                ::org::orekit::files::ccsds::definitions::OnOff result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(result);
              }

              static PyObject *t_OrbitManeuver_getThrustIsp(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_getThrustMagnitudeSigma(t_OrbitManeuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_OrbitManeuver_setAcceleration(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setAcceleration(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAcceleration", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setAccelerationInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setAccelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setAccelerationMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAccelerationMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDate(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setDate(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDate", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeltaMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDeployDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvCda(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvCda(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvCda", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvRatio(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvRatio(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvRatio", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployDvSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployDvSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployDvSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployId(t_OrbitManeuver *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setDeployId(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployId", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDeployMass(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeployMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeployMass", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDuration(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDv(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDv(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDv", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvDirSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvDirSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvDirSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setDvMagSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDvMagSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDvMagSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrust(t_OrbitManeuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setThrust(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrust", args);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustDirectionSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustDirectionSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustEfficiency(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustEfficiency(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustEfficiency", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustInterpolation(t_OrbitManeuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::OnOff a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_OnOff::parameters_))
                {
                  OBJ_CALL(self->object.setThrustInterpolation(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustInterpolation", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustIsp(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustIsp(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustIsp", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_setThrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setThrustMagnitudeSigma(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setThrustMagnitudeSigma", arg);
                return NULL;
              }

              static PyObject *t_OrbitManeuver_get__acceleration(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getAcceleration());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__accelerationDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getAccelerationInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__accelerationInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAccelerationInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__accelerationMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getAccelerationMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__accelerationMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setAccelerationMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "accelerationMagnitudeSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__date(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getDate());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__date(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setDate(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "date", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deltaMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deltaMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__deployDvCda(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvCda());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvCda(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvCda(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvCda", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvRatio(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvRatio());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvRatio(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvRatio(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvRatio", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployDvSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployDvSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployDvSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployDvSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployDvSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployId(t_OrbitManeuver *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getDeployId());
                return j2p(value);
              }
              static int t_OrbitManeuver_set__deployId(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setDeployId(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployId", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__deployMass(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeployMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__deployMass(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeployMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deployMass", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__duration(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__duration(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dv(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDv());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__dvDirSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvDirSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvDirSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvDirSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvDirSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__dvMagSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDvMagSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__dvMagSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDvMagSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dvMagSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrust(t_OrbitManeuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrust());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_OrbitManeuver_get__thrustDirectionSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustDirectionSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustDirectionSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustDirectionSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustDirectionSigma", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustEfficiency(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustEfficiency());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustEfficiency(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustEfficiency(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustEfficiency", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustInterpolation(t_OrbitManeuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                OBJ_CALL(value = self->object.getThrustInterpolation());
                return ::org::orekit::files::ccsds::definitions::t_OnOff::wrap_Object(value);
              }
              static int t_OrbitManeuver_set__thrustInterpolation(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::OnOff value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::OnOff::initializeClass, &value))
                  {
                    INT_CALL(self->object.setThrustInterpolation(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustInterpolation", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustIsp(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustIsp());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustIsp(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustIsp(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustIsp", arg);
                return -1;
              }

              static PyObject *t_OrbitManeuver_get__thrustMagnitudeSigma(t_OrbitManeuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getThrustMagnitudeSigma());
                return PyFloat_FromDouble((double) value);
              }
              static int t_OrbitManeuver_set__thrustMagnitudeSigma(t_OrbitManeuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setThrustMagnitudeSigma(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "thrustMagnitudeSigma", arg);
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
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockPhaseModifier::RelativisticJ2ClockPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void RelativisticJ2ClockPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockPhaseModifier, t_RelativisticJ2ClockPhaseModifier, RelativisticJ2ClockPhaseModifier);

          void t_RelativisticJ2ClockPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockPhaseModifier), module, "RelativisticJ2ClockPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockPhaseModifier::wrap_Object(RelativisticJ2ClockPhaseModifier(((t_RelativisticJ2ClockPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockPhaseModifier_init_(t_RelativisticJ2ClockPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_RelativisticJ2ClockPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockPhaseModifier *self, void *data)
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
#include "org/orekit/propagation/events/FieldEventState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventState$EventOccurrence.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventState::class$ = NULL;
        jmethodID *FieldEventState::mids$ = NULL;
        bool FieldEventState::live$ = false;

        jclass FieldEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f929ebd2a84dbfe7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_doEvent_64e3f7fbad9633b0] = env->getMethodID(cls, "doEvent", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/events/FieldEventState$EventOccurrence;");
            mids$[mid_evaluateStep_9e297a99a072e460] = env->getMethodID(cls, "evaluateStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");
            mids$[mid_getEventDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getEventDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
            mids$[mid_getEventDetector_4fe06ecc019ea51d] = env->getMethodID(cls, "getEventDetector", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_getPendingEvent_b108b35ef48e27bd] = env->getMethodID(cls, "getPendingEvent", "()Z");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_reinitializeBegin_edb529c141e8d4a9] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_tryAdvance_0c4e1f72634cc9b1] = env->getMethodID(cls, "tryAdvance", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventState::FieldEventState(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f929ebd2a84dbfe7, a0.this$)) {}

        ::org::orekit::propagation::events::FieldEventState$EventOccurrence FieldEventState::doEvent(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::orekit::propagation::events::FieldEventState$EventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_64e3f7fbad9633b0], a0.this$));
        }

        jboolean FieldEventState::evaluateStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_9e297a99a072e460], a0.this$);
        }

        ::org::orekit::time::FieldAbsoluteDate FieldEventState::getEventDate() const
        {
          return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEventDate_51da00d5b8a3b5df]));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldEventState::getEventDetector() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_4fe06ecc019ea51d]));
        }

        jboolean FieldEventState::getPendingEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getPendingEvent_b108b35ef48e27bd]);
        }

        void FieldEventState::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        void FieldEventState::reinitializeBegin(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_edb529c141e8d4a9], a0.this$);
        }

        jboolean FieldEventState::tryAdvance(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_0c4e1f72634cc9b1], a0.this$, a1.this$);
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
        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args);
        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self);
        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self);
        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg);
        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args);
        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data);
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data);
        static PyGetSetDef t_FieldEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventState, eventDate),
          DECLARE_GET_FIELD(t_FieldEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldEventState, pendingEvent),
          DECLARE_GET_FIELD(t_FieldEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventState__methods_[] = {
          DECLARE_METHOD(t_FieldEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldEventState, getEventDate, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, getPendingEvent, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventState)[] = {
          { Py_tp_methods, t_FieldEventState__methods_ },
          { Py_tp_init, (void *) t_FieldEventState_init_ },
          { Py_tp_getset, t_FieldEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventState, t_FieldEventState, FieldEventState);
        PyObject *t_FieldEventState::wrap_Object(const FieldEventState& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldEventState::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventState *self = (t_FieldEventState *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventState), &PY_TYPE_DEF(FieldEventState), module, "FieldEventState", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "EventOccurrence", make_descriptor(&PY_TYPE_DEF(FieldEventState$EventOccurrence)));
        }

        void t_FieldEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "class_", make_descriptor(FieldEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "wrapfn_", make_descriptor(t_FieldEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventState::initializeClass, 1)))
            return NULL;
          return t_FieldEventState::wrap_Object(FieldEventState(((t_FieldEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventState_of_(t_FieldEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventState_init_(t_FieldEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldEventState_doEvent(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::events::FieldEventState$EventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::orekit::propagation::events::t_FieldEventState$EventOccurrence::wrap_Object(result, self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_evaluateStep(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_getEventDate(t_FieldEventState *self)
        {
          ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldEventState_getEventDetector(t_FieldEventState *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result);
        }

        static PyObject *t_FieldEventState_getPendingEvent(t_FieldEventState *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getPendingEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldEventState_init(t_FieldEventState *self, PyObject *args)
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

        static PyObject *t_FieldEventState_reinitializeBegin(t_FieldEventState *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldEventState_tryAdvance(t_FieldEventState *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldEventState_get__parameters_(t_FieldEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventState_get__eventDate(t_FieldEventState *self, void *data)
        {
          ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDate());
          return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__eventDetector(t_FieldEventState *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldEventState_get__pendingEvent(t_FieldEventState *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getPendingEvent());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/YUMAParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/io/InputStream.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/text/ParseException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *YUMAParser::class$ = NULL;
      jmethodID *YUMAParser::mids$ = NULL;
      bool YUMAParser::live$ = false;

      jclass YUMAParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/YUMAParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4449ecb3aa08e27f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_2afa36052df4765d] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_2afa36052df4765d] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_0fa09c18fee449d5] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      YUMAParser::YUMAParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      YUMAParser::YUMAParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4449ecb3aa08e27f, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List YUMAParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_2afa36052df4765d]));
      }

      ::java::util::List YUMAParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_2afa36052df4765d]));
      }

      ::java::lang::String YUMAParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
      }

      void YUMAParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_0fa09c18fee449d5]);
      }

      void YUMAParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
      }

      jboolean YUMAParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self);
      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self);
      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args);
      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self);
      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data);
      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data);
      static PyGetSetDef t_YUMAParser__fields_[] = {
        DECLARE_GET_FIELD(t_YUMAParser, almanacs),
        DECLARE_GET_FIELD(t_YUMAParser, pRNNumbers),
        DECLARE_GET_FIELD(t_YUMAParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_YUMAParser__methods_[] = {
        DECLARE_METHOD(t_YUMAParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_YUMAParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_YUMAParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_YUMAParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(YUMAParser)[] = {
        { Py_tp_methods, t_YUMAParser__methods_ },
        { Py_tp_init, (void *) t_YUMAParser_init_ },
        { Py_tp_getset, t_YUMAParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(YUMAParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(YUMAParser, t_YUMAParser, YUMAParser);

      void t_YUMAParser::install(PyObject *module)
      {
        installType(&PY_TYPE(YUMAParser), &PY_TYPE_DEF(YUMAParser), module, "YUMAParser", 0);
      }

      void t_YUMAParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "class_", make_descriptor(YUMAParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "wrapfn_", make_descriptor(t_YUMAParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(YUMAParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_YUMAParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, YUMAParser::initializeClass, 1)))
          return NULL;
        return t_YUMAParser::wrap_Object(YUMAParser(((t_YUMAParser *) arg)->object.this$));
      }
      static PyObject *t_YUMAParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, YUMAParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_YUMAParser_init_(t_YUMAParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = YUMAParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            YUMAParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = YUMAParser(a0, a1, a2));
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

      static PyObject *t_YUMAParser_getAlmanacs(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_YUMAParser_getPRNNumbers(t_YUMAParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_YUMAParser_getSupportedNames(t_YUMAParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_YUMAParser_loadData(t_YUMAParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_YUMAParser_stillAcceptsData(t_YUMAParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_YUMAParser_get__almanacs(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__pRNNumbers(t_YUMAParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_YUMAParser_get__supportedNames(t_YUMAParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *ODEIntegratorBuilder::class$ = NULL;
        jmethodID *ODEIntegratorBuilder::mids$ = NULL;
        bool ODEIntegratorBuilder::live$ = false;

        jclass ODEIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/ODEIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildIntegrator_65049cf04139ef04] = env->getMethodID(cls, "buildIntegrator", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::ode::AbstractIntegrator ODEIntegratorBuilder::buildIntegrator(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::OrbitType & a1) const
        {
          return ::org::hipparchus::ode::AbstractIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_65049cf04139ef04], a0.this$, a1.this$));
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
        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args);

        static PyMethodDef t_ODEIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_ODEIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ODEIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ODEIntegratorBuilder)[] = {
          { Py_tp_methods, t_ODEIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ODEIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ODEIntegratorBuilder, t_ODEIntegratorBuilder, ODEIntegratorBuilder);

        void t_ODEIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(ODEIntegratorBuilder), &PY_TYPE_DEF(ODEIntegratorBuilder), module, "ODEIntegratorBuilder", 0);
        }

        void t_ODEIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "class_", make_descriptor(ODEIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "wrapfn_", make_descriptor(t_ODEIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ODEIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ODEIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ODEIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_ODEIntegratorBuilder::wrap_Object(ODEIntegratorBuilder(((t_ODEIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_ODEIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ODEIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ODEIntegratorBuilder_buildIntegrator(t_ODEIntegratorBuilder *self, PyObject *args)
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
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "org/orekit/gnss/metric/ntrip/Authentication.h"
#include "org/orekit/gnss/metric/ntrip/RecordType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NetworkRecord::class$ = NULL;
          jmethodID *NetworkRecord::mids$ = NULL;
          bool NetworkRecord::live$ = false;

          jclass NetworkRecord::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NetworkRecord");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_areFeesRequired_b108b35ef48e27bd] = env->getMethodID(cls, "areFeesRequired", "()Z");
              mids$[mid_getAuthentication_9b280d308e8278f6] = env->getMethodID(cls, "getAuthentication", "()Lorg/orekit/gnss/metric/ntrip/Authentication;");
              mids$[mid_getNetworkIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getNetworkIdentifier", "()Ljava/lang/String;");
              mids$[mid_getNetworkInfoAddress_11b109bd155ca898] = env->getMethodID(cls, "getNetworkInfoAddress", "()Ljava/lang/String;");
              mids$[mid_getOperator_11b109bd155ca898] = env->getMethodID(cls, "getOperator", "()Ljava/lang/String;");
              mids$[mid_getRecordType_7952bb756bff2dbf] = env->getMethodID(cls, "getRecordType", "()Lorg/orekit/gnss/metric/ntrip/RecordType;");
              mids$[mid_getRegistrationAddress_11b109bd155ca898] = env->getMethodID(cls, "getRegistrationAddress", "()Ljava/lang/String;");
              mids$[mid_getStreamInfoAddress_11b109bd155ca898] = env->getMethodID(cls, "getStreamInfoAddress", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NetworkRecord::NetworkRecord(const ::java::lang::String & a0) : ::org::orekit::gnss::metric::ntrip::Record(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          jboolean NetworkRecord::areFeesRequired() const
          {
            return env->callBooleanMethod(this$, mids$[mid_areFeesRequired_b108b35ef48e27bd]);
          }

          ::org::orekit::gnss::metric::ntrip::Authentication NetworkRecord::getAuthentication() const
          {
            return ::org::orekit::gnss::metric::ntrip::Authentication(env->callObjectMethod(this$, mids$[mid_getAuthentication_9b280d308e8278f6]));
          }

          ::java::lang::String NetworkRecord::getNetworkIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkIdentifier_11b109bd155ca898]));
          }

          ::java::lang::String NetworkRecord::getNetworkInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNetworkInfoAddress_11b109bd155ca898]));
          }

          ::java::lang::String NetworkRecord::getOperator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOperator_11b109bd155ca898]));
          }

          ::org::orekit::gnss::metric::ntrip::RecordType NetworkRecord::getRecordType() const
          {
            return ::org::orekit::gnss::metric::ntrip::RecordType(env->callObjectMethod(this$, mids$[mid_getRecordType_7952bb756bff2dbf]));
          }

          ::java::lang::String NetworkRecord::getRegistrationAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRegistrationAddress_11b109bd155ca898]));
          }

          ::java::lang::String NetworkRecord::getStreamInfoAddress() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStreamInfoAddress_11b109bd155ca898]));
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
        namespace ntrip {
          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args);
          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self);
          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data);
          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data);
          static PyGetSetDef t_NetworkRecord__fields_[] = {
            DECLARE_GET_FIELD(t_NetworkRecord, authentication),
            DECLARE_GET_FIELD(t_NetworkRecord, networkIdentifier),
            DECLARE_GET_FIELD(t_NetworkRecord, networkInfoAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, operator),
            DECLARE_GET_FIELD(t_NetworkRecord, recordType),
            DECLARE_GET_FIELD(t_NetworkRecord, registrationAddress),
            DECLARE_GET_FIELD(t_NetworkRecord, streamInfoAddress),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NetworkRecord__methods_[] = {
            DECLARE_METHOD(t_NetworkRecord, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NetworkRecord, areFeesRequired, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getAuthentication, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getNetworkInfoAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getOperator, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getRecordType, METH_VARARGS),
            DECLARE_METHOD(t_NetworkRecord, getRegistrationAddress, METH_NOARGS),
            DECLARE_METHOD(t_NetworkRecord, getStreamInfoAddress, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NetworkRecord)[] = {
            { Py_tp_methods, t_NetworkRecord__methods_ },
            { Py_tp_init, (void *) t_NetworkRecord_init_ },
            { Py_tp_getset, t_NetworkRecord__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NetworkRecord)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::ntrip::Record),
            NULL
          };

          DEFINE_TYPE(NetworkRecord, t_NetworkRecord, NetworkRecord);

          void t_NetworkRecord::install(PyObject *module)
          {
            installType(&PY_TYPE(NetworkRecord), &PY_TYPE_DEF(NetworkRecord), module, "NetworkRecord", 0);
          }

          void t_NetworkRecord::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "class_", make_descriptor(NetworkRecord::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "wrapfn_", make_descriptor(t_NetworkRecord::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NetworkRecord), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NetworkRecord_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NetworkRecord::initializeClass, 1)))
              return NULL;
            return t_NetworkRecord::wrap_Object(NetworkRecord(((t_NetworkRecord *) arg)->object.this$));
          }
          static PyObject *t_NetworkRecord_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NetworkRecord::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NetworkRecord_init_(t_NetworkRecord *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            NetworkRecord object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = NetworkRecord(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NetworkRecord_areFeesRequired(t_NetworkRecord *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.areFeesRequired());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_NetworkRecord_getAuthentication(t_NetworkRecord *self)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication result((jobject) NULL);
            OBJ_CALL(result = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(result);
          }

          static PyObject *t_NetworkRecord_getNetworkIdentifier(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkIdentifier());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getNetworkInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworkInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getOperator(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getOperator());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getRecordType(t_NetworkRecord *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getRecordType());
              return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NetworkRecord), (PyObject *) self, "getRecordType", args, 2);
          }

          static PyObject *t_NetworkRecord_getRegistrationAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRegistrationAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_getStreamInfoAddress(t_NetworkRecord *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStreamInfoAddress());
            return j2p(result);
          }

          static PyObject *t_NetworkRecord_get__authentication(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::Authentication value((jobject) NULL);
            OBJ_CALL(value = self->object.getAuthentication());
            return ::org::orekit::gnss::metric::ntrip::t_Authentication::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__networkIdentifier(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkIdentifier());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__networkInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworkInfoAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__operator(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getOperator());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__recordType(t_NetworkRecord *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::RecordType value((jobject) NULL);
            OBJ_CALL(value = self->object.getRecordType());
            return ::org::orekit::gnss::metric::ntrip::t_RecordType::wrap_Object(value);
          }

          static PyObject *t_NetworkRecord_get__registrationAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRegistrationAddress());
            return j2p(value);
          }

          static PyObject *t_NetworkRecord_get__streamInfoAddress(t_NetworkRecord *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStreamInfoAddress());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *PolyhedronsSet$BRep::class$ = NULL;
          jmethodID *PolyhedronsSet$BRep::mids$ = NULL;
          bool PolyhedronsSet$BRep::live$ = false;

          jclass PolyhedronsSet$BRep::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/PolyhedronsSet$BRep");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6701c064a13f8d2f] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getFacets_2afa36052df4765d] = env->getMethodID(cls, "getFacets", "()Ljava/util/List;");
              mids$[mid_getVertices_2afa36052df4765d] = env->getMethodID(cls, "getVertices", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PolyhedronsSet$BRep::PolyhedronsSet$BRep(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6701c064a13f8d2f, a0.this$, a1.this$)) {}

          ::java::util::List PolyhedronsSet$BRep::getFacets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFacets_2afa36052df4765d]));
          }

          ::java::util::List PolyhedronsSet$BRep::getVertices() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getVertices_2afa36052df4765d]));
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
          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args);
          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self);
          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data);
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data);
          static PyGetSetDef t_PolyhedronsSet$BRep__fields_[] = {
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, facets),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, vertices),
            DECLARE_GET_FIELD(t_PolyhedronsSet$BRep, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PolyhedronsSet$BRep__methods_[] = {
            DECLARE_METHOD(t_PolyhedronsSet$BRep, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, of_, METH_VARARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getFacets, METH_NOARGS),
            DECLARE_METHOD(t_PolyhedronsSet$BRep, getVertices, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PolyhedronsSet$BRep)[] = {
            { Py_tp_methods, t_PolyhedronsSet$BRep__methods_ },
            { Py_tp_init, (void *) t_PolyhedronsSet$BRep_init_ },
            { Py_tp_getset, t_PolyhedronsSet$BRep__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PolyhedronsSet$BRep)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PolyhedronsSet$BRep, t_PolyhedronsSet$BRep, PolyhedronsSet$BRep);
          PyObject *t_PolyhedronsSet$BRep::wrap_Object(const PolyhedronsSet$BRep& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PolyhedronsSet$BRep::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PolyhedronsSet$BRep::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PolyhedronsSet$BRep *self = (t_PolyhedronsSet$BRep *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PolyhedronsSet$BRep::install(PyObject *module)
          {
            installType(&PY_TYPE(PolyhedronsSet$BRep), &PY_TYPE_DEF(PolyhedronsSet$BRep), module, "PolyhedronsSet$BRep", 0);
          }

          void t_PolyhedronsSet$BRep::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "class_", make_descriptor(PolyhedronsSet$BRep::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "wrapfn_", make_descriptor(t_PolyhedronsSet$BRep::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PolyhedronsSet$BRep), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PolyhedronsSet$BRep_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PolyhedronsSet$BRep::initializeClass, 1)))
              return NULL;
            return t_PolyhedronsSet$BRep::wrap_Object(PolyhedronsSet$BRep(((t_PolyhedronsSet$BRep *) arg)->object.this$));
          }
          static PyObject *t_PolyhedronsSet$BRep_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PolyhedronsSet$BRep::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PolyhedronsSet$BRep_of_(t_PolyhedronsSet$BRep *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PolyhedronsSet$BRep_init_(t_PolyhedronsSet$BRep *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            PolyhedronsSet$BRep object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = PolyhedronsSet$BRep(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
              self->parameters[1] = ::org::hipparchus::geometry::euclidean::twod::PY_TYPE(Euclidean2D);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PolyhedronsSet$BRep_getFacets(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Object));
          }

          static PyObject *t_PolyhedronsSet$BRep_getVertices(t_PolyhedronsSet$BRep *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
          }
          static PyObject *t_PolyhedronsSet$BRep_get__parameters_(t_PolyhedronsSet$BRep *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_PolyhedronsSet$BRep_get__facets(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getFacets());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_PolyhedronsSet$BRep_get__vertices(t_PolyhedronsSet$BRep *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getVertices());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
